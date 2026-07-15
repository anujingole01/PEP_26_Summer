#include<iostream>
using namespace std;

class MyQueue {
    int* arr;
    int front;
    int rear;
    int size;
public:
    MyQueue(int n);
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    bool isFull();
};

MyQueue::MyQueue(int n) {
    size = n;
    arr = new int[size];
    front = -1;
    rear = -1;
}

bool MyQueue::isEmpty() {
    return front == -1;
}

bool MyQueue::isFull() {
    return ((rear + 1) % size) == front;
}

void MyQueue::enqueue(int x) {
    if (isFull()) {
        cout << "Queue is full\n";
        return;
    }
    rear = (rear + 1) % size;
    arr[rear] = x;
    if (front == -1) {
        front = 0;
    }
}

int MyQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    int x = arr[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % size;
    }
    return x;
}

int main() {
    MyQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl; // Output: 1
    cout << q.dequeue() << endl; // Output: 2
    cout << q.dequeue() << endl; // Output: 3
    cout << q.dequeue() << endl; // Output: Queue is empty
    return 0;
}