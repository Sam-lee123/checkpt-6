#pragma once
// PART 2 (18 POINTS)
// One derived class of Transformation to develop will be called Constant
//       - The only constructor for this derived class takes a vector of integer values as its only parameter and passes it along to its base class
//       - A function called Transform() will do nothing at all to the maintained vector, thus the name of the class type

// If it's easier for you, you may put the member function definitions in this file (instead of creating a second CPP implementation file for the class)

// However you MAY NOT put any member function definitions directly into the class header though...  
// The member function definitions must come AFTER the class header

#pragma once
#include "Transformation.h"

class Constant : public Transformation {
public:
    Constant(const std::vector<int>& inputVector);
    void Transform() override;
};

// Member function definitions

Constant::Constant(const std::vector<int>& inputVector) : Transformation(inputVector) {}

void Constant::Transform() {
    // Do nothing for Constant transformation
}

