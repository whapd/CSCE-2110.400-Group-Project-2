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

// insert() inserts a key into the hash table, given a key to insert
void HashTable::insert(int key) {
        int index = hashFunct(key);
        hashTable[index].push_back(key);
}

// search() searches the hash table at target index for the target key; if it finds the key in the table, returns its position within its bucket's vector (successful search), otherwise, returns -1 (unsuccessful search)
int HashTable::search(int key) {
        int index = hashFunct(key);

        for (int i = 0; i < hashTable[index].size(); ++i) {
                if (hashTable[index][i] == key) {
                        std::cout << "Value found at position " << i << "!\n";
                        return i;
                }
        }

        return -1;
}

// del() builds off of search() function. If the search is successful (returns key's position), removes key at position. If search is unsuccessful (returns -1), nothing happens
void HashTable::del(int key) {
        int index = hashFunct(key);
        int pos = search(key);
        if (pos != -1) {
                hashTable[index].erase(hashTable[index].begin() + pos);
                std::cout << "Value successfully removed.\n";
        }
        else {
                std::cout << "Value not found in table.\n";
        }
}
