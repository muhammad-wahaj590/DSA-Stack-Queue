class Queue {
public:
    int size;        // Size of the queue
    int* arr;        // Array to store queue elements
    int rear;        // Index of the rear (last) element  (push karen ge to rear main karenge )
    int qfront;      // Index of the front (first) element  (pop karen ge to front se karen ge)

    // Constructor
    Queue() {
        size = 100001;  // Initialize the size of the queue
        arr = new int[size];  // Dynamically allocate memory for the array
        rear = -1;     // Initialize rear as -1 (empty queue)
        qfront = -1;   // Initialize qfront as -1 (empty queue)
    }

    // Enqueue operation to add an element to the queue
    void enQueue(int data) {
        if (rear == size - 1) {   //matlab sab se last main chala gaya or rear array k or wahan se -1
            cout << "Queue full" << endl;  // Display a message if the queue is full
        }
        else {
            rear++;          // Move the rear index forward
            arr[rear] = data; // Add the data to the rear of the queue
            if (qfront == -1) {
                qfront = 0;  // If the queue was empty, update qfront to 0
            }
        }
    }

    // Dequeue operation to remove an element from the front of the queue
    void deQueue() {
        if (qfront == -1) {
            cout << "Queue is empty" << endl;  // Display a message if the queue is empty
            return;
        }
        else {
            if (qfront == rear) {
                qfront = -1;  // Reset qfront and rear to -1 if there was only one element in the queue
                rear = -1;
            }
            else {
                qfront++;  // Move the qfront index forward
            }
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (qfront == -1);  // Return true if qfront is -1 (empty queue), otherwise return false
    }

    // Get the front element of the queue
    int front() {
        if (qfront == -1) {
            cout << "Queue is empty" << endl;  // Display a message if the queue is empty
            return -1;
        }
        else {
            return arr[qfront];  // Return the element at the front


int main() {
    Queue q;  // Corrected initialization
    
    q.enQueue(2);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(8);
    
    cout << "front view " << q.front() << endl;
    cout << "remove from front "<<q.deQueue()<<endl;
    
    
    return 0;
}

