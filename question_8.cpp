// 8. Write a C++ Program to implement push and pop methods from stack using template.
#include <iostream>
#include <string>
using namespace std;
#define SIZE 5
template <class T>
class Stack
{
private:
    int top;
    T st[SIZE];

public:
    // Empty constructor
    Stack();
    // Method 1
    // To add element to stack  which can be any type
    //  using stack push() mehtod
    void push(T k);
    // Method 2
    // This will check our stack is full or not
    bool isFull();
    // Method 3
    // To remove top element from stack
    // using pop() method
    T pop();
    // Mehtod 4
    //  It will check our stack is empty or not
    bool isEmpty();
    // This will give top element of our stack
    T topElement();
};
template <class T>
bool Stack<T>::isFull()
{
    return top == (SIZE - 1) ? true : false;
}
template <class T>
Stack<T>::Stack()
{
    top = -1;
}
template <class T>
void Stack<T>::push(T k)
{
    if (isFull())
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        st[top] = k;
        cout << "Inserted element " << k << endl;
    }
}
template <class T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        T popped_element = st[top];
        top--;
        return popped_element;
    }
}
template <class T>
bool Stack<T>::isEmpty()
{
    return (top == -1) ? true : false;
}
template <class T>
T Stack<T>::topElement()
{
    return st[top];
}
int main()
{
    Stack<int> integer_stack;
    Stack<string> string_stack;

    integer_stack.push(2);
    integer_stack.push(54);
    integer_stack.push(255);

    string_stack.push("Welcome");
    string_stack.push("to");
    string_stack.push("Hello World");

     // Now, removing element from integer stack
    cout << integer_stack.pop() << " is removed from stack"
         << endl;
 
    // Removing top element from string stack
    cout << string_stack.pop() << " is removed from stack "
         << endl;
 
    // Print and display the top element in integer stack
    cout << "Top element is " << integer_stack.topElement()
         << endl;
 
    // Print and display the top element in string stack
    cout << "Top element is " << string_stack.topElement()
         << endl;
 
    return 0;
}