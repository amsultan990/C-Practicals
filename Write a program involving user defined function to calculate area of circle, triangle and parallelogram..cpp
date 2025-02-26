#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes with double return type
double areaofcircle(double r1); 
double areaoftriangle(double h, double b); 
double areaofparallelogram(double h1, double b1);

int main (){
    double circleArea = areaofcircle(4);
    double triangleArea = areaoftriangle(3, 5);
    double parallelogramArea = areaofparallelogram(5, 3);

    // Display the returned areas
    cout << "Area of circle: " << circleArea;
    cout << endl << "Area of triangle: " << triangleArea;
    cout << endl << "Area of parallelogram: " << parallelogramArea;

    return 0;
}

// Function definitions with double return type
double areaofcircle(double r1) {
    return M_PI * r1 * r1;  // Return the area of the circle
}

double areaoftriangle(double h, double b) {
    return 0.5 * h * b;  // Return the area of the triangle
}

double areaofparallelogram(double h1, double b1) {
    return h1 * b1;  // Return the area of the parallelogram
}

