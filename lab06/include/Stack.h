//
// Created by andrzej on 22.11.23.
//
#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#pragma once

/**
 * @class Stack
 * @brief An abstract class providing an interface for stack data structure.
 */
class Stack
{
public:
    /**
     * @brief Default constructor for the Stack class.
     */
    Stack();

    /**
     * @brief Virtual destructor for proper cleanup in derived classes.
     */
    virtual ~Stack() = default;

    /**
     * @brief Pure virtual function for removing the top element from the stack.
     * @return The value of the popped element.
     */
    virtual int Pop() = 0;

    /**
     * @brief Pure virtual function for adding an element to the top of the stack.
     * @param[in] value The value to be pushed onto the stack.
     */
    virtual void Push(int value) = 0;

    /**
     * @brief Pure virtual function for printing the contents of the stack.
     * @retrun void
     */
    virtual void Print() const = 0;

    /**
     * @brief Pure virtual function to check if the stack is empty.
     * @return True if the stack is empty, false otherwise.
     */
    virtual bool IsEmpty() const = 0;

    /**
     * @brief Pure virtual function to check if the stack is full.
     * @return True if the stack is full, false otherwise.
     */
    virtual bool IsFull() const = 0;

    /**
     * @brief Pure virtual function to get the current size of the stack.
     * @return The size of the stack.
     */
    virtual int Size() const = 0;

    /**
     * @brief Pure virtual function to clear the contents of the stack.
     * @return void
     */
    virtual void Clear() = 0;

    /**
     * @class Iterator
     * @brief Nested class providing an iterator interface for stack traversal.
     */
    class Iterator
    {
    public:
        /**
         * @brief Virtual destructor for proper cleanup.
         */
        virtual ~Iterator() = default;

        /**
         * @brief Pure virtual function to dereference the iterator.
         * @return Reference to the dereferenced iterator.
         */
        virtual int& operator*() const = 0;

        /**
         * @brief Pure virtual function to advance the iterator to the next element.
         * @return Reference to the advanced iterator.
         */
        virtual Iterator& operator++() = 0;

        /**
         * @brief Pure virtual function to compare iterators for inequality.
         * @param other The iterator to compare with.
         * @return True if the iterators are not equal, false otherwise.
         */
        virtual bool operator!=(const Iterator& other) const = 0;
    };

    /**
     * @brief Pure virtual function to get an iterator pointing to the beginning of the stack.
     * @return Iterator pointing to the beginning of the stack.
     */
    virtual Iterator begin() const = 0;

    /**
     * @brief Pure virtual function to get an iterator pointing to the end of the stack.
     * @return Iterator pointing to the end of the stack.
     */
    virtual Iterator end() const = 0;
};

#endif //ARRAY_STACK_H
