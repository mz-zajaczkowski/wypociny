#include <iostream>

template <class T> class StackNode
{
    T data;
    StackNode* next;

    StackNode() { next = nullptr; }
    ~StackNode() {}
};

template <class T> class Stack
{
public:
    void push(const T& t);
    StackNode<T>* Stack<T>::top();
    void pop();
    size_t size();
    bool empty();

    Stack(): top(nullptr)
    {
        std::cout << "Stack Ctor" << std::endl;
    }
    ~Stack()
    {
        while (!empty())
            pop();
    }
private:
    StackNode<T>* top;
    size_t count;
};


int main()
{
    Stack<int> myStack;
    std::cout << "Hello World!" << std::endl;
    return 0;
}
