#ifndef HASHTABLE_H
#define HASHTABLE_H

// HashTable.h
// Includes the class HashTable, 

class HashTable {
    public:
        HashTable(int x);

        int hash(std::string ID);
        int hashFunct(int inp);

        void insert(int key);
        void delete(int key);
    private:
        // Buckets is the number of buckets within the hash table
        int Buckets;

        // hashTable is the hash table to be used, a vector of vectors of integers (fron hashFunct)
        vector<vector<int>> hashTable;
};

#endif
