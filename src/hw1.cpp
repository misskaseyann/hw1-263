#include <iostream>
#include <math.h>

// HW1 Data Structs
// Takes in a value for a circle radius and outputs the diameter and area.
//
// @author Kasey Stowell
// @version Winter 2018

int main(int argc, char** argv) {
	std::cout << "\n\nWELCOME TO THE CIRCLE PROGRAM!!\n\n--------------------\n\n";
	std::cout << "RULES:\n";
	std::cout << "1. Enter the radius of a circle.\n2. Negative values quit the program.\n\n";
	
	// Circle radius.
	double radius = 0.0;
	// Circle diameter.
	double diameter;
	// Circle area.
	float area;
	
	std::cout << "--------------------\n\nRadius: ";
        std::cin >> radius;
	
	// Used code structure to check that the std::cin would not fail with
	// an incorrect input value from the following stackoverflow answer:
	// https://stackoverflow.com/a/18728791
	while (std::cin.fail()) {
		std::cout << "\nDouble values only allowed in this program.\nPlease enter a valid number: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> radius;
	}
	
	// Start loop for input. 
	while (radius >= 0) {
		diameter = radius * 2;
		area = 3.14 * pow(radius, 2);
		
		std::cout << "\nArea: " + std::to_string(area) + "\n";
		std::cout << "\nDiameter: " + std::to_string(diameter) + "\n";
		std::cout << "--------------------\n\nRadius: ";
		std::cin >> radius;
		
		// Error handling if input is not a float.
		// See comment above for source.
		while (std::cin.fail()) {
                std::cout << "\nInteger values only allowed in this program.\nPlease enter a valid number: ";
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> radius;
        	}
	}
}
