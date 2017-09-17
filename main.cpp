#include <iostream>

template <class T> class StackNode
{
    T data;
    StackNode* next;

    StackNode(const T& data): data(std::move(data)) { next = nullptr; }
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

<<<<<<< HEAD

int main()
{
    Stack<int> myStack;
    std::cout << "Hello World!" << std::endl;
=======
void Stack<T>::push(const T &t)
{
    StackNode<T>* newTop = new StackNode<T>(t);
    newTop->next = top;
    top = newTop;
}

class Person
{
    std::string name;
    uint8_t age;

    Person(std::string name, int age): name(name), age(age)
    {
        std::cout << "New person created: " << name << ", age: " << age << std::endl;
    }
};


int main()
{
    Stack<Person>* myStack = new Stack();

>>>>>>> wypociny
    return 0;
}
