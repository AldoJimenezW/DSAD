#include <iostream>

const int ARRAY_SIZE = 5;

// Function to display the elements of an array
void displayArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += arr[i];
  }
  return sum;
}

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
  int min = arr[0];
  for (int i = 1; i < size; ++i) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int myArray[ARRAY_SIZE] = {10, 5, 23, 8,
                             14}; // Declara and initialize an array

  std::cout << "Elements in the array: ";
  displayArray(myArray, ARRAY_SIZE);

  int sum = findSum(myArray, ARRAY_SIZE);
  std::cout << "Sum of elements: " << sum << std::endl;

  int max = findMax(myArray, ARRAY_SIZE);
  std::cout << "Maximum element: " << max << std::endl;

  int min = findMin(myArray, ARRAY_SIZE);
  std::cout << "Minimum element: " << min << std::endl;

  return 0;
}
