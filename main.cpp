#include <iostream>
#include <iomanip>
using namespace std;


struct Calculator{
	float numA, numB;
	char Operate;
	char UserInput;
	float result;
	
	void GetNums() {
		cin >> numA;
		cin >> numB;
		cout << "You entered: " << numA << " and " << numB << endl;
		}
	
		/* this is the function im having a problem with,
		 * 
		 * i want it to print a list valid Operators that the user will
		 * choose from, it then stores the users input as a string
		 * called UserInput, it should then check that UserInput is
		 * valid against "'+', '-', '*' and'/'", and then if the string 
		 * is valid it should switch the set Operator to = UserInput,
		 * it then returns Operate's single char operator as its
		 * return value
		 */
	
	void GetOperate() {
		
		while((Operate != '+') && (Operate != '-') && (Operate != '*') && (Operate != '/')) {
			cout << "Please, Enter one (1) of the following operators: '+', '-', '*', '/'" << endl;
			cin >> setw(1) >> UserInput;
		
			if((UserInput == '+') || (UserInput == '-') || (UserInput == '*') || (UserInput == '/')) {
				Operate = UserInput;
			} else {
				cout << "your input didn't match the given inputs, please try again." << endl;
			}
		}
		cout << Operate << endl;
	};
		
	int Calculate() {
		switch(Operate) {
			case '+':
				result = numA + numB;
				break;
			case '-':
				result = numA - numB;
				break;
			case '*':
				result = numA * numB;
				break;
			case '/':
				result = numA / numB;
				break;
		}
		return result;
	};
};


int main() {
	Calculator _Calculator1;
	cout << "Please enter two numbers: " << endl;
	_Calculator1.GetNums();
	_Calculator1.GetOperate();
	
	_Calculator1.Calculate();
	
	cout << "Your equation is: ";
	cout << _Calculator1.numA << _Calculator1.Operate << _Calculator1.numB << "=";
	cout << _Calculator1.result << endl;
	return 0;
	}
