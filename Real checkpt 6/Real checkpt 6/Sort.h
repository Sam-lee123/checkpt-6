#pragma once
// PART 3 (18 POINTS)
// A second derived class of Transformation to develop will be called Sort
//       - The only constructor for this derived class takes a vector of integer values as its only parameter and passes it along to its base class
//       - A function called Transform() will sort the maintained vector, thus the name of the class type

// If it's easier for you, you may put the member function definitions in this file (instead of creating a second CPP implementation file for the class)

// However you MAY NOT put any member function definitions directly into the class header though...  
// The member function definitions must come AFTER the class header

#pragma once
#include "Transformation.h"
#include <algorithm> // for std::sort

class Sort : public Transformation {
public:
    Sort(const std::vector<int>& inputVector);
    void Transform() override;
};

// Member function definitions

Sort::Sort(const std::vector<int>& inputVector) : Transformation(inputVector) {}

void Sort::Transform() {
    std::sort(values.begin(), values.end());
}

