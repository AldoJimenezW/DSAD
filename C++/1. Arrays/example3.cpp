#include <iostream>
#include <vector>

int main()
{
    // Declare a vector of integers
    std::vector<int> myVector;

    // Adding elements to the vector using push_back()
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);

    // Accessing elements in the vector
    std::cout << "Elements in the vector: ";
    for (int i = 0; i < myVector.size(); ++i)
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    // Modifying elements in the vector
    myVector[2] = 35;

    // Using iterator to access elements
    std::cout << "Modified elements using iterators: ";
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Removing elements from the vector
    myVector.pop_back();

    std::cout << "Elements after removing the last one: ";
    for (int num : myVector)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Clear the vector
    myVector.clear();

    std::cout << "Vector size after clearing: " << myVector.size() << std::endl;

    return 0;
}
