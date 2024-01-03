//
// Created by andrzej on 02.01.24.
//

#include <iostream>
#include <thread>
#include <memory>

#include "include/Entity.h"

static bool s_Finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;

    // this is printing on other thread as fast as it can ( until on main thd enter is pressed )
    while (!s_Finished) {
        std::cout << "Thread [ " << std::this_thread::get_id() << " ] : Working ...\n";
        std::this_thread::sleep_for(1s);
    }
}

int main() {

    {
//        std::unique_ptr<Entity> entity(new Entity());  works but meh ...
        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // only one reference to pointer - cant copy
        entity->Point();
    } // Destructor Run Here and memory gets unallocated

    {
        /** shared_ptr
         *  Operates on additional object responsible for reference counting - increases the ref count
         */
        std::shared_ptr<Entity> shared_entity;
        {
            std::shared_ptr<Entity> entity = std::make_shared<Entity>();
            shared_entity = entity;
        }
    } // Destructor Run Here


    {
        /**
         *  weak_ptr like shared pointer but doesn't increase the reference counter,
         *  Possibly dead pointer
         *  Also doesn't keep it alive
         */
        std::weak_ptr<Entity> weak_entity_ptr;
        {
            std::shared_ptr<Entity> entity = std::make_shared<Entity>();
            weak_entity_ptr = entity;
        } // Destructor Run Here
        weak_entity_ptr.expired(); // checking if is ok
    }

//////////////////////////

    std::thread worker(DoWork);

    std::cin.get();
    s_Finished = true;

    //wait for thread to end work ( below won't run until now worker job is finished )
    worker.join();

    std::cout << "Thread [ " << std::this_thread::get_id() << " ] : Took Over ( back main ) ...\n";

    return 0;
}
