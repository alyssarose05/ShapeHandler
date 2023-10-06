#include <stdio.h>
#include "ShapeHandler.h"

void twoD() {
    Triangle a = {5.0, 6.0, 7.0, 5.0, 6.0};
	printf("TRIANGLE PERIMETER: %f", a.perimeter()); // EXPECTED: 18
	printf("\nTRIANGLE AREA: %f", a.area()); // EXPECTED: 15
	
	Rectangle b = {5.0, 6.0};
	printf("\n\nRECTANGLE PERIMETER: %f", b.perimeter()); // EXPECTED: 22
	printf("\nRECTANGLE AREA: %f", b.area()); // EXPECTED: 30
	printf("\nRECTANGLE DIAGONAL: %f", b.diagonal()); // EXPECTED: 7.81
	
	Square c = {5.0};
	printf("\n\nSQUARE PERIMETER: %f", c.perimeter()); // EXPECTED: 20
	printf("\nSQUARE AREA: %f", c.area()); // EXPECTED: 25
	printf("\nSQUARE DIAGONAL: %f", c.diagonal()); // EXPECTED: 7.07
	
	Circle d = {5.0};
	printf("\n\nCIRCLE AREA: %f", d.area()); // EXPECTED: 78.54
	printf("\nCIRCLE CIRCUMFERENCE: %f", d.circumference()); // EXPECTED: 31.42
	printf("\nCIRCLE DIAMETER: %f", d.diameter()); // EXPECTED: 10
	
	Trapezoid e = {5.0, 6.0, 7.0, 8.0, 5.0, 6.0, 7.0};
	printf("\n\nTRAPEZOID PERIMETRER: %f", e.perimeter()); // EXPECTED: 26
	printf("\nTRAPEZOID AREA: %f", e.area()); // EXPECTED: 38.54
	
	Ellipse f = {5.0, 6.0};
	printf("\n\nELLIPSE AREA: %f", f.area()); // EXPECTED: 94.25
	printf("\nELLIPSE CIRCUMFERENCE: %f", f.circumference()); // EXPECTED: 34.56
	
	Parallelogram g = {5.0, 6.0};
	printf("\n\nPARALLELOGRAM PERIMETER: %f", g.perimeter()); // EXPECTED: 22
	printf("\nPARALLELOGRAM AREA: %f", g.area()); // EXPECTED: 30
	
	Kite h = {5.0, 6.0};
	printf("\n\nKITE PERIMETER: %f", h.perimeter()); // EXPECTED: 22
	printf("\nKITE AREA: %f", h.area()); // EXPECTED: 15
	
	Polygon i = {5, 6.0};
	printf("\n\nPOLYGON PERIMETER: %f", i.perimeter()); // EXPECTED: 30
}

void threeD() {
    Cube a = {5.0};
    printf("CUBE VOLUME: %f", a.volume()); // EXPECTED: 125
    printf("\nCUBE SPACE DIAGONAL: %f", a.spaceDiagonal()); // EXPECTED: 8.66
    printf("\nCUBE SURFACE AREA: %f", a.surfaceArea()); // EXPECTED: 150
    
    Cuboid b = {5.0, 6.0, 7.0};
    printf("\n\nCUBOID VOLUME: %f", b.volume()); // EXPECTED: 210
    printf("\nCUBOID SPACE DIAGONAL: %f", b.spaceDiagonal()); // EXPECTED: 10.49
    printf("\nCUBOID SURFACE AREA: %f", b.surfaceArea()); // EXPECTED: 214
    
    Cylinder c = {5.0, 6.0};
    printf("\n\nCYLINDER VOLUME: %f", c.volume()); // EXPECTED: 471.214
    printf("\nCYLINDER SURFACE AREA: %f", c.surfaceArea()); // EXPECTED: 345.58
    printf("\nCYLINDER LATERAL SURFACE AREA: %f", c.lateralSurfaceArea()); // EXPECTED: 188.5
    printf("\nCYLINDER BASE AREA: %f", c.baseArea()); // EXPECTED: 78.54
    
    Pyramid d = {5.0, 6.0, 7.0};
    printf("\n\nPYRAMID VOLUME: %f",d.volume()); // EXPECTED: 70
    printf("\nPYRAMID SURFACE AREA: %f", d.surfaceArea()); // EXPECTED: 112.68
    printf("\nPYRAMID LATERAL SURFACE AREA: %f", d.lateralSurfaceArea()); // EXPECTED: 82.68
    printf("\nPYRAMID BASE AREA: %f", d.baseArea()); // EXPECTED: 30
    
    Sphere e = {5.0};
    printf("\n\nSPHERE VOLUME: %f", e.volume()); // EXPECTED: 523.6
    printf("\nSPHERE DIAMETER: %f", e.diameter()); // EXPECTED: 10
    printf("\nSPHERE SURFACE AREA: %f", e.surfaceArea()); // EXPECTED: 314.16
}

void formulas() {
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
    // twoD(); PASSED ALL CHECKS 10/6/23
    // threeD(); PASSED ALL CHECKS 10/6/23
    // formulas(); PASSED ALL CHECKS 10/6/23

    return 0;
}
