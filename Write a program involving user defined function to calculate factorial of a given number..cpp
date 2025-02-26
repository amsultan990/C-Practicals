#include <iostream>

using namespace std;

int factorial (int n);
int main (){
	int num;
	cout << "FACTORIAL CALCULAROR"<< endl << endl << "Enter the NO: ";
	cin >> num;
	
	if (num < 0 ){
		cout << "Factorial is not possible";
	}else {
		cout << "Factorial of " << num << " is " << factorial(num);
	}
}

factorial (int n){
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n-1);
}
