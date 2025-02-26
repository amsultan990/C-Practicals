#include <iostream>
#include <cmath>


using namespace std;

int r, h, l;

int vofsphere(double r);
int vofcylinder(double r, double h);
int vofcube(double l);

int main (){
	vofsphere(r);
	vofcylinder(r, h);
	vofcube(l);
	
	
}

vofsphere(double r){
	cout << "Enter the radius of circle: ";
	cin >> r;
	cout << "Volume of sphere is " <<  M_PI * r * r * r * 4 / 3<< endl;
}
vofcylinder(double r, double h){
	cout << "Enter the radius of cylinder: ";
	cin >> r;
	cout << "Enter the height of cylinder: ";
	cin >> h;
	cout << "Volume of cylinder is " <<  M_PI * r * h << endl;
}
vofcube(double l){
	cout << "Enter the length of cube: ";
	cin >> l;
	cout<< "Volume of Cube is " << l*l*l;
}
