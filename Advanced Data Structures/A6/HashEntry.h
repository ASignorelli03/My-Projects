#ifndef HASHENTRY_H
#define HASHENTRY_H

#include <ostream>
#include <math.h>
#include <fstream>

// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// Anthony Signorelli
class HashEntry {
	public:
        /// Constructor
        HashEntry();                                        
		HashEntry(const HashEntry & entry);
		/// Destructor
		~HashEntry(); 
        int getEntry();
        setEntry();

        enum Status {EMPTY, OCCUPIED, REMOVED}; 
	private:
        int key_;
        int value_;
        Status status_;
}; 

#endif