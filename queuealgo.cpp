#include <iostream>
using namespace std;

const int SIZE = 4;
int queue[SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == SIZE - 1;
}

void enqueue(int element) {
    if (isFull()) {
        cout << "Queue is full!" << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    queue[++rear] = element;
    cout << element << " enqueued!" << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << queue[front] << " dequeued!" << endl;
    if (front == rear) {
        front = rear = -1; // Reset the queue when the last element is dequeued
    } else {
        front++;
    }
}

void frontelement() {
    if (isEmpty()) {
        cout << "Queue is empty, no front element." << endl;
    } else {
        cout << "Front element is " << queue[front] << endl;
    }
}

void show() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(9);
    enqueue(3);
    enqueue(4);
    show();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    frontelement();
    show();
    enqueue(2);
    enqueue(4);
    enqueue(1);
    enqueue(5);
    enqueue(7);
    show();
    dequeue();
    show();
    dequeue();
    dequeue();
    show();
    frontelement();
    dequeue();
    enqueue(6);
    dequeue();
    dequeue();
    dequeue();
    show();

    return 0;
}
