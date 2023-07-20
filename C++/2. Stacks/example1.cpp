#include <iostream>
#include <stack>

int main() {
  std::stack<int> myStack;

  // Pushing elements onto the stack
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  // Checking if the stack is empty
  if (myStack.empty()) {
    std::cout << "Stack is empty.\n";
  } else {
    std::cout << "Stack is not empty.\n";
  }

  // Accessing the top element of the stack
  std::cout << "Top element: " << myStack.top() << "\n";

  // Popping elements from the stack
  myStack.pop();

  std::cout << "Top element after popping: " << myStack.top() << "\n";

  // Getting the size of the stack
  std::cout << "Size of stack: " << myStack.size() << "\n";

  return 0;
}
