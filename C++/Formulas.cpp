#include <iostream>
#include <cmath>

using namespace std;

double convertToCelsius(double temp) {
	return (temp - 32) * 0.5555555; // rough estimate
}

double convertToFahrenheit(double temp) {
	return (temp * 1.8) + 32;
}

double quadraticPlus(double a, double b, double c) {
	return (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
}

double quadraticMinus(double a, double b, double c) {
	return (-b - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
}

class Point {
    public:
        double x;
        double y;
        
        void toString() {
            printf("(%f, %f)", x, y);
        }
};

double distance(Point p1, Point p2) {
    return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
}
        
void midpoint(Point p1, Point p2) {
    Point result = {(p1.x + p2.x) / 2, (p1.y + p2.y) / 2};
    result.toString();
}
        
double slopeIntercept(Point p, double yIntercept) {
	return (p.y - yIntercept) / p.x;
}
        
double slope(Point p1, Point p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

double pythagoreanTheorem(double a, double b) {
	return sqrt(pow(a,2) + pow(b,2));
}

void tests() {
    printf("TO CELSIUS: %f", convertToCelsius(45.0)); // EXPECTED: 7.22222
    printf("\nTO FAHRENHEIT: %f", convertToFahrenheit(45.0)); // EXPECTED: 113
    
    // x^2 + 3x - 4 = 0
    printf("\n\nQUADRATIC PLUS: %f", quadraticPlus(1.0, 3.0, -4.0)); // EXPECTED: 1
    printf("\nQUADRATIC MINUS: %f", quadraticMinus(1.0, 3.0, -4.0)); // EXPECTED: -4
    
    Point p1 = {1.0, 2.0};
    Point p2 = {3.0, 4.0};
    printf("\n\nDISTANCE: %f\nMIDPOINT: ", distance(p1,p2)); // EXPECTED: 2.8284271247462
    midpoint(p1,p2); // EXPECTED: (2,3)
    printf("\nSLOPE INTERCEPT: %f", slopeIntercept(p1, 3.0)); // EXPECTED: -1
    printf("\nSLOPE: %f", slope(p1, p2)); // EXPECTED: 1
    
    printf("\n\nPYTHAGOREAN THEOREM: %f", pythagoreanTheorem(1.0, 2.0)); // EXPECTED: 2.2360679775
}

int main()
{
    // tests(); PASSED ALL TESTS 10/6/23
    return 0;
}
