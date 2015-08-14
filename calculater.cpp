#include <iostream>
using namespace std;

int main(){
	double a;
	double b;
	char op;
	char status = 'z';
	do {
		cout << "Please enter a simple mathematical operation (+|-|*|/) allowed: ";
		cin >> a >> op >> b;
		switch (op){
			case '+':
			cout << a << op << b << " = "<< a+b << endl;
			break;

			case '-':
			cout << a << op << b << " = "<< a-b << endl;
			break;

			case '*':
			cout << a << op << b << " = "<< a*b << endl;
			break;

			case '/':
			if (b != 0){
				cout << a << op << b << " = "<< a/b << endl;
				break;
			}
			if (b == 0) {
				cout << "division by zero not allowed!" << endl;
				break;
			}
			default:
				cout << "operation unknown" << endl;
				break;
			}

	cout << "press r to retry or x to exit: ";
	cin >> status;
	} while (status == 'r');
	cout << endl << "bye" << endl;

	int pause;
	cin >> pause;

	return 0;


}
