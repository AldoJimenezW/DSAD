#include <iostream>
#include <vector>

// Define a basic key-value pair structure
struct KeyValuePair {
  int key;
  int value;
};

// Define the HashTable class
class HashTable {
 private:
  static const int tableSize = 10;  // Size of the hash table
  std::vector<KeyValuePair>* table[tableSize];

 public:
  // Constructor to initialize the hash table with empty linked lists
  HashTable() {
    for (int i = 0; i < tableSize; ++i) {
      table[i] = new std::vector<KeyValuePair>();
    }
  }

  // Hash function to convert the key into an index for the hash table
  int hashFunction(int key) { return key % tableSize; }

  // Insert a key-value pair into the hash table
  void insert(int key, int value) {
    int index = hashFunction(key);
    KeyValuePair kvp = {key, value};
    table[index]->push_back(kvp);
  }

  // Retrieve a value from the hash table using the key
  int get(int key) {
    int index = hashFunction(key);
    for (const KeyValuePair& kvp : *table[index]) {
      if (kvp.key == key) {
        return kvp.value;
      }
    }
    // Return -1 if the key is not found
    return -1;
  }

  // Destructor to free the allocated memory
  ~HashTable() {
    for (int i = 0; i < tableSize; ++i) {
      delete table[i];
    }
  }
};

int main() {
  HashTable hashTable;

  // Insert key-value pairs into the hash table
  hashTable.insert(5, 42);
  hashTable.insert(15, 73);
  hashTable.insert(25, 99);

  // Retrieve values from the hash table using keys
  std::cout << "Value for key 5: " << hashTable.get(5) << std::endl;
  std::cout << "Value for key 15: " << hashTable.get(15) << std::endl;
  std::cout << "Value for key 25: " << hashTable.get(25) << std::endl;
  std::cout << "Value for key 35: " << hashTable.get(35)
            << std::endl;  // Key not found, will return -1

  return 0;
}
