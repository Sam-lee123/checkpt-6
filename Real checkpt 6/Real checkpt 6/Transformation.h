#pragma once
// PART 1 (18 POINTS)
// The base class for this relationship will be called Transformation and has the following properties that need developing:
//      - Every Transformaton object maintains a vector of integer values which can only be directly accessed by itself and its derived classes
//      - The only constructor for this base class takes a vector of integer values as its only parameter, and copies all its values in order into the maintained vector
//      - A function called Print() will print every element of the maintained vector, space separated, with a newline character when exhausted
//      - A function called GetVectorCopy() will simply return a copy of the maintained vector
//      - A function called Transform() will do something different to the maintained vector for each derived class, but by itself has no true default behavior

// If it's easier for you, you may put the member function definitions in this file (instead of creating a second CPP implementation file for the class)

// However you MAY NOT put any member function definitions directly into the class header though...  
// The member function definitions must come AFTER the class header


#pragma once
#include <vector>
#include <iostream>


class Transformation {
protected:
    std::vector<int> values;

public:
    Transformation(const std::vector<int>& inputVector);
    void Print()const;
    std::vector<int> GetVectorCopy()const;
    virtual void Transform() = 0; // Pure virtual function, making Transformation an abstract class
};

// Member function definitions

Transformation::Transformation(const std::vector<int>& inputVector) : values(inputVector) {}

void Transformation::Print() const {
    for (int val : values) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

std::vector<int> Transformation::GetVectorCopy() const {
    return values;
}


