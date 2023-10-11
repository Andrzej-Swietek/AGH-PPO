#ifndef MYLIBRARY_h 
#define MYLIBRARY_h

#include <iostream>
#include <string>
// #define PROJECTPATH "/home/stud2022/2swietek/Desktop/AGH-PPO/lab01"

/**
 * @brief Function that prints formated project owner's name
 * @param text - { const char * } - the project owner's name as text variable
 * @void
*/
void PrintName(std::string text);


/**
 * @brief Function that prints where project is located in the file system
 * @param text - { const char * } - The path constant
 * @void
*/
void PrintInfo(std::string text);


// void PrintName(std::string text)
// {
//    std::cout << "[INFO]:: Name:"<< text << std::endl;
// }


// void PrintInfo(std::string text)
// {
//     std::cout << "[INFO]:: " << text << std::endl;
// }

#endif