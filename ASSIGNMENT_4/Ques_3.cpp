#include <iostream>
using namespace std;

#define SIZE 100   // Max queue size

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return (front > rear);
    }

    void enqueue(int x) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        arr[++rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        return arr[front++];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    int size() {
        return (rear - front + 1);
    }

    void display() {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// Function to interleave queue
void interleaveQueue(Queue &q) {
    int n = q.size();
    if (n % 2 != 0) {
        cout << "Queue size must be even!" << endl;
        return;
    }

    int half = n / 2;
    Queue firstHalf;

    // Move first half elements to another queue
    for (int i = 0; i < half; i++) {
        firstHalf.enqueue(q.dequeue());
    }

    // Interleave firstHalf and remaining elements
    while (!firstHalf.isEmpty()) {
        q.enqueue(firstHalf.dequeue()); // from first half
        q.enqueue(q.dequeue());         // from second half
    }
}

int main() {
    Queue q;
    int n, val;

    cout << "Enter number of elements (even): ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        q.enqueue(val);
    }

    
    q.display();

    interleaveQueue(q);

   
    q.display();

    return 0;
}
