#include <vector>
using namespace std;

class MyCircularQueue {
private:
    vector<int> q;
    int front, rear;
    int count; // To track the current number of elements

public:
    MyCircularQueue(int k) {
        q.resize(k);
        front = 0;
        rear = 0;
        count = 0; // Initialize the count
    }
    
    bool enQueue(int value) {
        if (isFull()) return false; // Check if the queue is full
        q[rear] = value; // Insert the value at rear
        rear = (rear + 1) % q.size(); // Move rear forward
        count++; // Increase the count of elements
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false; // Check if the queue is empty
        front = (front + 1) % q.size(); // Move front forward
        count--; // Decrease the count of elements
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1; // Return -1 if the queue is empty
        return q[front]; // Return the front value
    }
    
    int Rear() {
        if (isEmpty()) return -1; // Return -1 if the queue is empty
        return q[(rear - 1 + q.size()) % q.size()]; // Return the last inserted value
    }
    
    bool isEmpty() {
        return count == 0; // Check if count is 0
    }
    
    bool isFull() {
        return count == q.size(); // Check if the queue is full
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
