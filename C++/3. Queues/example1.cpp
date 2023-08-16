#include <iostream>
#include <queue>

int main() {
    // Creating a queue
    std::queue<int> myQueue;

    // Enqueueing elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Dequeueing and printing elements
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";  // Print the front element
        myQueue.pop();  // Remove the front element
    }

    return 0;
}
