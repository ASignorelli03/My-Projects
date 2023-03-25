#ifndef HASHTABLECHAINING_H
#define HASHTABLECHAINING_H
#include "HashTable.h"
// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
class HashTableChaining {

 
    Public: 
        HashTableChaining();
        HashTableChaining();
        ~HashTableChaining();
        getArray();
        setArray();
        void insert(int key, int value); 
        int search(int key); 
        void remove(int key); 
        void print(); 

    Private: 
        DoublyLinkedList * entry_; 
        int size_; 
    
};
#endif