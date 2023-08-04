#include <iostream>
#include <queue>
#include <string>

class CustomerServiceQueue {
public:
    void enqueueCall(const std::string& callerName) {
        callQueue.push(callerName);
        std::cout << "Call from " << callerName << " added to the queue." << std::endl;
    }

    void answerNextCall() {
        if (!callQueue.empty()) {
            std::string nextCaller = callQueue.front();
            callQueue.pop();
            std::cout << "CSR is answering call from " << nextCaller << "." << std::endl;
        } else {
            std::cout << "No calls in the queue." << std::endl;
        }
    }

private:
    std::queue<std::string> callQueue;
};

int main() {
    CustomerServiceQueue callCenter;

    callCenter.enqueueCall("Alice");
    callCenter.enqueueCall("Bob");
    callCenter.enqueueCall("Charlie");

    callCenter.answerNextCall();  // Output: CSR is answering call from Alice.
    callCenter.answerNextCall();  // Output: CSR is answering call from Bob.
    callCenter.answerNextCall();  // Output: CSR is answering call from Charlie.
    callCenter.answerNextCall();  // Output: No calls in the queue.

    return 0;
}
