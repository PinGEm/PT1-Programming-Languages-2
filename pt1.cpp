#include <iostream> // used for input and output streams
#include <conio.h> // used for getch(), so that the program will not close immediately
#include "helper.h" // grabs the header helper file

using std::cout; // std::cout will be shortened to just cout

double c = 0; // define a global variable to be used freely in this entire file
void showCalc(std::string text); // have to declare this function before the main(), otherwise main() cannot access it and will not recognize it as part of the scope. we also force ourselves to pass a string value to it.

int main(){
	int a = 5; // defining two local variables: a & b. only used within the main()
	int b = 2;
	
	cout << "------" << '\n'; // we will output a series of "---" into the terminal, then we will make a new line using '\n'
	
	cout << "A is: " << a << '\n'; // displaying the value of a.
	cout << "B is: " << b << '\n'; // displaying the value of b.
	
	c = a + b; // manipulating the value of C to be the sum of a & b.
	showCalc("sum"); // we will pass a string with the value of "sum"
	
	c = subtract(a,b); // from pt1_1.cpp: we will be using the implementation of the function there.
	showCalc("difference"); // we will pass a string with the value of "difference"
	
	c = multiply(a,b); // from pt1_1.cpp: we will be using the implementation of the function there.
	showCalc("product"); // we will pass a string with the value of "product"
	
	c = divide(a,b); // from pt1_1.cpp: we will be using the implementation of the function there.
	showCalc("quotient"); // we will pass a string with the value of "quotient"
	
	cout << "------" << '\n';
	getch(); // we will require the user to type on the keyboard in order to exit the program.
	
	return 0; // indicates the end of the program, required as main() is an integer
}

void showCalc(std::string text) // we write the implementation of the function here
{
	cout << "If C is the " << text << " of A and B: " << c << '\n'; // using the parameter "text", we will display then display the value of c at the time the function is run.
}