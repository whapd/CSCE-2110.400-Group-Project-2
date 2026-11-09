#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <string>
#include <vector>

// HashTable.h
// Includes the class HashTable, involving the hash table (as a vector of vectors of ints) with int keys hashed from string ID values and functions for the hash table

class HashTable {
    public:
        // Constructor to initialize the number of buckets and hash table based on buckets
        HashTable(int x);

        // Returns the buckets (private value) as int
        int getBuckets() const;

        // Functions to hash, either string to a usable hash key int or hash key int to position within hash table
        int hashString(std::string ID);
        int hashFunct(int inp);

        // Insert, search, and delete functions FILL OUT INSERT
        void insert(int key);
        bool search (int key);
        void del(int key);
    private:
        // Buckets, the number of buckets within the hash table
        int Buckets;

        // hashTable, the hash table to be used, a vector of vectors of integers (fron hashFunct)
        std::vector<std::vector<int>> hashTable;
};

#endif
