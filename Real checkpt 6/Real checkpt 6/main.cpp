// Include files
#include <cassert>
#include <iostream>
#include <vector>
#include "Constant.h"
#include "Sort.h"
#include "Transformation.h"


// PART 4 (6 POINTS)
// You will need to add code to the PrintHeaderForElement() function inside of the main.cpp file
void PrintHeaderForElement(Transformation* t)
{
	// -----------------------------------------------------------------------
	// If the element is a pointer to a Constant object print "CONSTANT: "
	// If the element is a pointer to a Sort     object print "SORT:     "
	// Which C++ keyword can be used at runtime to determine an object's type?
	// -----------------------------------------------------------------------

	if (dynamic_cast<Constant*>(t))
	{
		std::cout << "CONSTANT: ";
	}
	else if (dynamic_cast<Sort*>(t))
	{
		std::cout << "SORT:     ";
	}





}


// YOU MAY NOT MODIFY ANY CODE FOUND IN THIS main() FUNCTION BELOW
int main()
{
	// Set up the vector of Transformation objects
	std::vector<Transformation*> elements
	{
		new Constant({ 1, 6, 3, 4, 2 }),
		new Sort({ 11, 65, 35, 14, 3, 99 }),
		new Constant({ 2, 6, 5, 14, 2, 99, 103232 }),
		new Sort({ 11, 8, 5, 2, 94, 15, 3 }),
		new Constant({ 1, 7, 13, 14, 12, 11, 11, 8 })
	};

	// Print the elements before transformation
	std::cout << "--------BEFORE--------" << std::endl;
	for (Transformation* t : elements)
	{
		PrintHeaderForElement(t);
		t->Print();
	}

	// Transform the elements
	for (Transformation* t : elements)
	{
		t->Transform();
	}

	// Print the elements after transformation
	std::cout << "---------AFTER--------" << std::endl;
	for (Transformation* t : elements)
	{
		PrintHeaderForElement(t);
		t->Print();
	}
	std::cout << "----------------------" << std::endl;

	// Final testing to see that the transformations did what they were supposed to do
	assert(elements[0]->GetVectorCopy() == std::vector<int>({ 1, 6, 3, 4, 2 }));
	assert(elements[1]->GetVectorCopy() == std::vector<int>({ 3, 11, 14, 35, 65, 99 }));
	assert(elements[2]->GetVectorCopy() == std::vector<int>({ 2, 6, 5, 14, 2, 99, 103232 }));
	assert(elements[3]->GetVectorCopy() == std::vector<int>({ 2, 3, 5, 8, 11, 15, 94 }));
	assert(elements[4]->GetVectorCopy() == std::vector<int>({ 1, 7, 13, 14, 12, 11, 11, 8 }));

	// Boilerplate
	return 0;
}