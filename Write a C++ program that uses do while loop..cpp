#include <iostream>
using namespace std;

int main (){
	
	int a, b;
	char r;
	cout << "ADDITION CALCULATOR" << endl << endl;
	
	do {
		cout << "Enter the first no: ";
		cin >> a;
		cout << "Enter the second no: ";
		cin >> b;
		cout << "The sum is: " << a + b;
		
		cout << "\n\nPress any key to try again and N to cancel: ";
		cin >> r;
	} while (r != 'N' and r!= 'n');
}
