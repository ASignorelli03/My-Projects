#ifndef HASHTABLECUCKOO_H
#define HASHTABLECUCKOO_H
#include "HashTable.h"
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
class HashTableCuckoo {

 
    Public: 
        HashTableCuckoo();
        HashTableCuckoo();
        ~HashTableCuckoo();
        getArray();
        setArray();
        void insert(int key, int value); 
        int search(int key); 
        void remove(int key); 
        void print(); 

    Private: 
        HashEntry * entry_; 
        HashEntry * entry2_; 
        int size_; 
    
};
#endif