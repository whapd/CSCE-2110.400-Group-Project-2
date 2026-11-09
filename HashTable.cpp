#include "HashTable.h"
#include <iostream>
#include <vector>

// HashTable.cpp
// Includes the code for functions declared within HashTable.h

// Constructor to initialize the number of buckets for the hash table and the hash table itself using the number of buckets
HashTable::HashTable(int x) {
    this->getBuckets() = b;
    hashTable.resize(Buckets);
}

// hash() to hash a proper facility ID
int HashTable::hash(std::string ID) {
    return ____;
}

// hashFunct() maps an inputted key's value to an index for the hash table, to be used in insert() and delete()
int hashFunct(int inp) {
    return (int % getBuckets());
}

// insert() inserts a key into the hash table
void HashTable::insert(int key) {
    int index = hashFunct(key);
    hashTable[index] = push_back(key);
}

// delete() searches the hash table at target index for the target key; if it finds the key in the table, the key is deleted from the table, and if not, nothing happens
void HashTable::delete(int key) {
    int index = hashFunct(key);
    auto if = find(hashTable[index].begin(), hashTable[index].end(), key);
    if (it != hashTable[index].end()) {
        table[erase].erase(it);
        std::cout << "Key successfully deleted.\n";
    }
    else {
        std::cout << "Key not found.\n";
    }
}
