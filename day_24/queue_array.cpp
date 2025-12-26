class myQueue {

  public:
    int front,rear,size;
    int* arr;
    myQueue(int n) {
        // Define Data Structures
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front==-1;
    }

    bool isFull() {
        // check if the queue is full
        return front==(rear+1)%size;
        
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()) return;
       if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()) return;
        if (front == rear) {
            front = rear = -1;  // queue becomes empty
        } else {
            front = (front + 1) % size;
        }
        
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()) return -1;
        return arr[rear];
    }
};