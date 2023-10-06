#include <stdio.h>
#include <math.h>


// TRIANGLE
typedef struct {
	double a;
	double b;
	double c;
	double base;
	double height;
} Triangle;

extern Triangle a;

double triangle_perimeter(Triangle t) { return t.a + t.b + t.c; }
double triangle_area(Triangle t) {
	if (t.base == 0.0 && t.height == 0.0) {
            double s = (t.a + t.b + t.c) / 2;
            return sqrt(s * (s - t.a) * (s - t.b) * (s - t.c));
        }
        return 0.5 * t.base * t.height;
}

// RECTANGLE
typedef struct {
	double length;
	double width;
} Rectangle;

double rectangle_perimeter(Rectangle r) { return 2 * (r.length + r.width); }
double rectangle_area(Rectangle r) { return r.length * r.width; }
double rectangle_diagonal(Rectangle r) { return sqrt(pow(r.width,2.0) + pow(r.length,2.0)); }

// SQUARE
typedef struct {
	double side;
} Square;

double square_perimeter(Square s) { return 4 * s.side; }
double square_area(Square s) { return s.side * s.side; }
double square_diagonal(Square s) { return sqrt(2.0) * s.side; }

// CIRCLE
typedef struct {
	double radius;
} Circle;

double circle_area(Circle c) { return M_PI * (c.radius * c.radius); }
double circle_circumference(Circle c) { return 2 * M_PI * c.radius; }
double circle_diameter(Circle c) { return 2 * c.radius; }

// TRAPEZOID
typedef struct {
	double a;
	double b;
	double c;
	double d;

	double base1;
	double base2;
	double height;
} Trapezoid;

// Ellipse
typedef struct {
    double a;
    double b;
} Ellipse;

double ellipse_area(Ellipse e) { return M_PI * e.a * e.b; }
double ellipse_circumference(Ellipse e) { return M_PI * (e.a + e.b); } // APPROXIMATION

double trapezoid_perimeter(Trapezoid t) { return t.a + t.b + t.c + t.d; }
double trapezoid_area(Trapezoid t) { return ((t.base1 + t.base2) / 2) * t.height; }

// PARALLELOGRAM
typedef struct {
	double base;
	double height;
} Parallelogram;

double paralellogram_perimeter(Parallelogram p) { return 2 * (p.base + p.height); }
double parallelogram_area(Parallelogram p) { return p.base * p.height; }

// KITE
typedef struct {
	double a;
	double b;
} Kite;

double kite_perimeter(Kite k) { return (2 * k.a) + (2 * k.b); }
double kite_area(Kite k) { return (k.a * k.b) / 2; }


// POLYGON
typedef struct {
	int numSides;
	double sideLength;
} Polygon;
double polygon_perimeter(Polygon p) {return p.numSides * p.sideLength;}

// END OF FUNCTIONS: BELOW ARE THE TESTS

void tests() {
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

int main(int argc, char **argv) {
	// tests(); PASSED ALL CHECKS 10/5/23
	return 0;
}
