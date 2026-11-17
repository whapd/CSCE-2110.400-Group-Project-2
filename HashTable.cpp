#include "HashTable.h"
#include <iostream>
#include <string>
#include <vector>

// HashTable.cpp
// Includes the code for functions declared within HashTable.h

// Constructor to initialize the number of buckets for the hash table and the hash table itself using the number of buckets
HashTable::HashTable(int x) {
        x = this->getBuckets();
        hashTable.resize(Buckets);
}

// getBuckets() returns private member buckets
int HashTable::getBuckets() const {
        return Buckets;
}

// hash() to hash a proper facility ID into a usable int key
int HashTable::hashString(std::string ID) {
        int hashCode = 0;
        for (int i = 0; i < ID.length(); i++) {
                hashCode = hashCode * 19 + ID[i];
        }
        return hashCode;
}

// hashFunct() maps an inputted key's value to an index for the hash table, to be used in insert() and delete()
int HashTable::hashFunct(int inp) {
        int bucs = getBuckets();
        int val = inp % bucs;
        return val;
}

// insert() inserts a key into the hash table
/* void HashTable::insert(int key) {
        int index = hashFunct(key);
        hashTable[index] = push_back(key);
} */

// search() searches the hash table at target index for the target key; if it finds the key in the table, returns true, and if not, returns false
/* bool HashTable::search(int key) {
        int index = hashFunct(key);
        auto it = find(hashTable[index].begin(), hashTable[index].end(), key);
        if (it != hashTable[index].end()) {
                std::cout << "Key found at index " << index << ".\n";
                return true;
        }
        else {
                std::cout << "Key not found.\n";
                return false;
        }
} */

// del() builds off of search() function. If the search returns true, the key at that index is deleted
 /* void HashTable::del(int key) {
        if (search(key) == true) {
                table[index].erase(it);
        }
} */
