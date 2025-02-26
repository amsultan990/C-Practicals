#include <iostream>

using namespace std;

int main (){
	int h;
	
	cout << "let make pramid, ENTER THE HIGHT OF PRAMID: ";
	cin >> h;
	
	for (int i = 1; i <= h; i ++){
		for (int k = 1; k < i; k++){
			cout << "*";
		}
		cout << endl;
	}
}
