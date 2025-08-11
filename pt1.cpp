#include <iostream> // used for input and output streams
#include <conio.h> // used for getch(), so that the program will not close immediately
#include "helper.h" // grabs the header helper file

using std::cout; // std::cout will be shortened to just cout

double c = 0; // define a global variable to be used freely in this entire file
void showCalc(std::string text);  // have to declare this function before the main(), otherwise main() cannot access it and will not recognize it as part of the scope. we also force ourselves to pass a string value to it. 
void showLocalC_Calc(std::string text, double C); // have to declare this function before the main(), otherwise main() cannot access it and will not recognize it as part of the scope. 
												//we also force ourselves to pass a string value to it along with a double value named "C".

int main(){
	int a = 5; // defining a local variable named a, only used within the main(). we will then assign it a value of 5.
	int b = 2; // defining a local variable named B, used only within thhe main(). we will then assign it a value of 2.
	double local_c = 0; // defining a local variable named local_c, used only within the main(), we will then assign it a value of 0.
	char letterG = 'G'; // defining a local variable named "letterG", used only within the main(), we will then assign it a value of 'G'.
	bool lightSwitch = false; // create a boolean with variable name "lightSwitch", a data type with two values "true" or "false";
	
	cout << "------" << '\n'; // we will output a series of "---" into the terminal, then we will make a new line using '\n'
	
	cout << "A is: " << a << '\n'; // displaying the value of a.
	cout << "B is: " << b << '\n'; // displaying the value of b.
	
	c = a + b; // manipulating the value of C to be the sum of a & b.
	showCalc("sum"); // we will pass a string with the value of "sum"
	
	c = subtract(a,b); // from pt1_1.cpp: we will be using the implementation of the function there.
	showCalc("difference"); // we will pass a string with the value of "difference"
	
	c = multiply(a,b); // from pt1_1.cpp: we will be using the implementation of the function there.
	showCalc("product"); // we will pass a string with the value of "product"
	
	local_c = divide(a,b); // from pt1_1.cpp: we will be using the implementation of the function there.
	showLocalC_Calc("quotient", local_c); // we will pass a string with the value of "quotient", we will also pass "local_c" (with a value of 2.5) into this function.
	
	cout << "------" << '\n'; // we will output a series of "---" into the terminal, then we will make a new line using '\n'
	if(!lightSwitch) // IF LIGHT SWITCH IS FALSE PERFORM THE LINES OF CODE BELOW.
	{
		cout << "Light switch is off, therefore I'll output the letter " << letterG << '\n'; // IF LIGHT SWITCH IS FALSE, output that  the light switch is off, then output the letter 'G' from letterG, then make a new line using '\n'
	}
	cout << "Manipulating the value of the letter 'G' to be in it's HEXADECIMAL form." << '\n'; // outputting a terminal log message, then creating a new line using '\n'.
	cout << "Hexadecimal value of G: " << (int)'G'; // outputs 71, please refer to the ASCII table "https://www.ascii-code.com/", because we're converting a 'char' value to integer, we will convert it to it's hexadecimal value.
	getch(); // we will require the user to type on the keyboard in order to exit the program.
	
	return 0; // indicates the end of the program, required as main() is an integer
}

void showCalc(std::string text) // we write the implementation of the function here
{
	cout << "If C is the " << text << " of A and B: " << c << '\n'; // using the parameter "text", we will display then display the value of c at the time the function is run.
}

void showLocalC_Calc(std::string text, double C) // we write the implementation of the function here
{
	cout << "If C is the " << text << " of A and B: " << C << '\n'; // using the parameter "text", we will display then display the value given by the function to output the value of C.
}