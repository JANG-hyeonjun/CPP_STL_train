// Problem2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template<typename T>
class Stack
{
private:
    T buf[100];
    int size;
public:
    Stack() : size(0)
    {}
    void Push(const T& data)
    {
        buf[size++] = data;
    }
    T& Pop()
    {
        return buf[--size];
    }
    bool Empty()
    {
        return size == 0 ? true : false;
    }
    void state_Stack()
    {
        for (size_t idx = 0; idx < size; ++idx)
        {
            std::cout << buf[idx] << std::endl;
        }
        std::cout << std::endl;
    }
};

template<typename T>
class Queue
{
private:
    enum {CAP = 100};
    T buf[CAP];
    int front;
    int rear;
public:
    Queue() : front(0),rear(0) {}
    void Push(const T& data)
    {
        buf[rear = (rear + 1) % CAP] = data;
    }
    T& Pop()
    {
        return buf[front = (front + 1) % CAP];
    }
    bool Empty()
    {
        return front == rear;
    }
};


int main()
{
    Stack<int> st;
    st.Push(10);
    st.Push(20);
    st.Push(30);

    st.state_Stack();
    
    if (!st.Empty())
    {
        std::cout << st.Pop() << std::endl;
    }
    if (!st.Empty())
    {
        std::cout << st.Pop() << std::endl;
    }
    if (!st.Empty())
    {
        std::cout << st.Pop() << std::endl;
    }
    std::cout << std::endl;

    Queue<int> q;
    q.Push(10);
    q.Push(20);
    q.Push(30);

    if (!q.Empty())
    {
        std::cout << q.Pop() << std::endl;
    }
    if (!q.Empty())
    {
        std::cout << q.Pop() << std::endl;
    }
    if (!q.Empty())
    {
        std::cout << q.Pop() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

