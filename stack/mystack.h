#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>

using namespace std;

template <class T>
class Stack
{
public:
    Stack(int size = 1024); //申请栈
    bool Empty();//判断是否为空
    bool Full();//判断是否满

    void Push(const T& ch);//入栈
    T Pop();//弹栈
private:
    T * buffer;//泛型指针
    int top;//栈顶光标
    int buffersize;//栈容量
};

template <class T>
Stack<T>::Stack(int size)
{
    this->top = 0;
    this->buffer = new T[size];
    this->buffersize = size;

}

template<class T>
bool Stack<T>::Empty()
{
    return (this->top == 0);
}

template<class T>
bool Stack<T>::Full()
{
    return  this->top == this->buffersize;
}

template<class T>
void Stack<T>::Push(const T &ch)
{
    buffer[top++] = ch;
}

template<class T>
T Stack<T>::Pop()
{
    return buffer[--top];
}







#endif // MYSTACK_H
