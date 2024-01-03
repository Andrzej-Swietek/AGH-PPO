//
// Created by andrzej on 02.01.24.
//

#include "Entity.h"

Entity::Entity()
{
    std::cout << "Created Entity" << std::endl;
}

Entity::~Entity()
{
    std::cout << "Destroyed Entity" << std::endl;
}

void Entity::Point() {
    std::cout << "Entity Pointing" << std::endl;
}
