#ifndef HASHTABLE_H
#define HASHTABLE_H

// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
class HashTable {
	public:
        /// Constructor
        HashTable();                                        
		/// Destructor
		~HashTable(); 
        void insert(int key, int value) = 0; 
        int search(int key) = 0; 
        void remove(int key) = 0; 
        void print() = 0;
}; 

#endif