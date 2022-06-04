#ifndef C343_ASSIGNMENT1EXAMPLE_SEQUENCE_H
#define C343_ASSIGNMENT1EXAMPLE_SEQUENCE_H

#include <string>
#include <optional>

/**
 * Description: The header file for created a generic singly-linked list
 * @tparam T Generic data-type for eash NodeRecord's value */
template <class T>
class Sequence {

private:

    /**
     * Description: NodeRecord is used as the underlining Data Structure to hold
     * the values and pointers
     */
    class NodeRecord {
    public:
        /**
         * Description: Holds a single instance of a value for this node in the sequence.
         */
        T value;

        /**
         * Description: Points at the next NodeRecord in the sequence
         */
        NodeRecord* next;

        /**
         * Description: Default Constructor
         */
        NodeRecord() = default;
    };

    /**
     * Description: The beginning of the singly-linked list
     */
    NodeRecord* head;

    /**
     * Description: The number of values stored in the list
     */
    int size;

    /**
     * Description: Reclaims all space in the heap from the allocated for p and any sequential NodeRecord it points to.
     * @param p A NodeRecord value
     */
    void reclaimAllNodes (NodeRecord*& p);

public:

    /**
     * Description: Constructor that initializes all attributes of this class.
     */
    Sequence ();

    /**
     * Description: Deconstructor that reclaims all space allocated to the heap.
     */
    ~Sequence ();

    /**
     * Description: Clears all of the elements in the data structure.
     */
    void clear ();

    /**
     * Description: Adds a value into the singly-linked list
     * @param x The generic to be stored in NodeRecord's value field
     * @param pos The position in the NodeRecord that the generic will be stored
     */
    void add (T& x, int pos);

    /**
     * Description: Removes a value from the singly-linked list
     * @param x The value to removed from the singly-linked list
     * @param pos The position of the value to be removed
     */
    void remove (T& x, int pos);

    /**
     * Description: Returns the value stored in a NodeRecord
     * @param pos The position of the value to be returned
     * @return The value of type T stored in the given position
     */
    std::optional<T> entry (int pos);

    /**
     * Description: The length of the singly-linked list, index 1.
     * @return The integer value representing the size of the singly-linked list.
     */
    int length ();

    /**
     * Description: Creates a string of values that are stored in the NodeRecord to the screen
     * @return A string of representing the NodeRecord
     */
    std::string outputSequence();

};


#endif
