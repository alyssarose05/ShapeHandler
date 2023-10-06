#include <stdio.h>
#include "ShapeHandler.h"

void twoD() {
    Triangle a = {5.0, 6.0, 7.0, 5.0, 6.0};
	printf("TRIANGLE PERIMETER: %f", triangle_perimeter(a)); // EXPECTED: 18
	printf("\nTRIANGLE AREA: %f", triangle_area(a)); // EXPECTED: 15

	Rectangle b = {5.0, 6.0};
	printf("\n\nRECTANGLE PERIMETER: %f", rectangle_perimeter(b)); // EXPECTED: 22
	printf("\nRECTANGLE AREA: %f", rectangle_area(b)); // EXPECTED: 30
	printf("\nRECTANGLE DIAGONAL: %f", rectangle_diagonal(b)); // EXPECTED: 7.81

	Square c = {5.0};
	printf("\n\nSQUARE PERIMETER: %f", square_perimeter(c)); // EXPECTED: 20
	printf("\nSQUARE AREA: %f", square_area(c)); // EXPECTED: 25
	printf("\nSQUARE DIAGONAL: %f", square_diagonal(c)); // EXPECTED: 7.07

	Circle d = {5.0};
	printf("\n\nCIRCLE AREA: %f", circle_area(d)); // EXPECTED: 78.54
	printf("\nCIRCLE CIRCUMFERENCE: %f", circle_circumference(d)); // EXPECTED: 31.42
	printf("\nCIRCLE DIAMETER: %f", circle_diameter(d)); // EXPECTED: 10

	Trapezoid e = {5.0, 6.0, 7.0, 8.0, 5.0, 6.0, 7.0};
	printf("\n\nTRAPEZOID PERIMETRER: %f", trapezoid_perimeter(e)); // EXPECTED: 26
	printf("\nTRAPEZOID AREA: %f", trapezoid_area(e)); // EXPECTED: 38.54
	
	Ellipse f = {5.0, 6.0};
	printf("\n\nELLIPSE AREA: %f", ellipse_area(f)); // EXPECTED: 94.25
	printf("\nELLIPSE CIRCUMFERENCE: %f", ellipse_circumference(f)); // EXPECTED: 34.56
	
	Parallelogram g = {5.0, 6.0};
	printf("\n\nPARALLELOGRAM PERIMETER: %f", paralellogram_perimeter(g)); // EXPECTED: 22
	printf("\nPARALLELOGRAM AREA: %f", parallelogram_area(g)); // EXPECTED: 30
	
	Kite h = {5.0, 6.0};
	printf("\n\nKITE PERIMETER: %f", kite_perimeter(h)); // EXPECTED: 22
	printf("\nKITE AREA: %f", kite_area(h)); // EXPECTED: 15
	
	Polygon i = {5, 6.0};
	printf("\n\nPOLYGON PERIMETER: %f", polygon_perimeter(i)); // EXPECTED: 30
}

void threeD() {
    Cube a = {5.0};
    printf("CUBE VOLUME: %f", cube_volume(a)); // EXPECTED: 125
    printf("\nCUBE SPACE DIAGONAL: %f", cube_spaceDiagonal(a)); // EXPECTED: 8.66
    printf("\nCUBE SURFACE AREA: %f", cube_surfaceArea(a)); // EXPECTED: 150
    
    Cuboid b = {5.0, 6.0, 7.0};
    printf("\n\nCUBOID VOLUME: %f", cuboid_volume(b)); // EXPECTED: 210
    printf("\nCUBOID SPACE DIAGONAL: %f", cuboid_spaceDiagonal(b)); // EXPECTED: 10.49
    printf("\nCUBOID SURFACE AREA: %f", cuboid_surfaceArea(b)); // EXPECTED: 214
    
    Cylinder c = {5.0, 6.0};
    printf("\n\nCYLINDER VOLUME: %f", cylinder_volume(c)); // EXPECTED: 471.239
    printf("\nCYLINDER SURFACE AREA: %f", cylinder_surfaceArea(c)); // EXPECTED: 345.58
    printf("\nCYLINDER LATERAL SURFACE AREA: %f", cylinder_lateralSurfaceArea(c)); // EXPECTED: 188.5
    printf("\nCYLINDER BASE AREA: %f", cylinder_baseArea(c)); // EXPECTED: 78.54
    
    Pyramid d = {5.0, 6.0, 7.0};
    printf("\n\nPYRAMID VOLUME: %f", pyramid_volume(d)); // EXPECTED: 70
    printf("\nPYRAMID SURFACE AREA: %f", pyramid_surfaceArea(d)); // EXPECTED: 112.68
    printf("\nPYRAMID LATERAL SURFACE AREA: %f", pyramid_lateralSurfaceArea(d)); // EXPECTED: 82.68
    printf("\nPYRAMID BASE AREA: %f", pyramid_baseArea(d)); // EXPECTED: 30
    
    Sphere e = {5.0};
    printf("\n\nSPHERE VOLUME: %f", sphere_volume(e)); // EXPECTED: 523.6
    printf("\nSPHERE DIAMETER: %f", sphere_diameter(e)); // EXPECTED: 10
    printf("\nSPHERE SURFACE AREA: %f", sphere_surfaceArea(e)); // EXPECTED: 314.int16_t
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
