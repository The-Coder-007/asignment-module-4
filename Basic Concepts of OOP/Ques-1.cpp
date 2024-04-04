/*
WAP to create simple calculator using class
*/

# include <iostream>

using namespace std;

class Calc{
	public:
		float sum(float num1, float num2){
			return num1 + num2;
		}
		
		float sub(float num1, float num2){
			return num1 - num2;
		}
		
		float mult(float num1 , float num2){
			return num1 * num2;
		}
		float div(float num1, float num2){
			return num1 / num2;
		}
};

int main(){
	Calc calcObj;
	
	float num1, num2;
	char op;
	
	cout << "Enter num1 : " << endl;
	cin >> num1;
	
	cout << "Enter the operator (+, -, * , /) : " << endl;
	cin >> op;
	
	cout << "Enter num2 : " << endl;
	cin >> num2;
	
	switch(op){
		case '+':
			cout << "Result : " << calcObj.sum(num1, num2) << endl;
			break;
		case '-':
			cout << "Result : " << calcObj.sub(num1, num2) << endl;
			break;
		case '*':
			cout << "Result : " << calcObj.mult(num1, num2) << endl;
			break;
		case '/':
			cout << "Result : " << calcObj.div(num1, num2);
			break;
		default:
			cout << "Invalid Operator ! ";
	}
	
}
