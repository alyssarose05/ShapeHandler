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

// CUBE
typedef struct {
	double side;
} Cube;

double cube_volume(Cube c) { return pow(c.side, 3); }
double cube_spaceDiagonal(Cube c) { return sqrt(3.0) * c.side; }
double cube_surfaceArea(Cube c) { return 6 * pow(c.side, 2); }

// CUBOID
typedef struct {
	double length;
	double width;
	double height;
} Cuboid;

double cuboid_volume(Cuboid c) { return c.length * c.width * c.height; }
double cuboid_spaceDiagonal(Cuboid c) { return sqrt(pow(c.length, 2.0) + pow(c.width, 2.0) + pow(c.height, 2.0)); }
double cuboid_surfaceArea(Cuboid c) { return 2 * (c.length * c.width + c.width * c.height + c.length * c.height); }

// CYLINDER
typedef struct {
	double radius;
	double height;
} Cylinder;

double cylinder_volume(Cylinder c) { return M_PI * pow(c.radius, 2) * c.height; }
double cylinder_surfaceArea(Cylinder c) { return (2 * M_PI * c.radius * c.height) + (2 * M_PI * pow(c.radius, 2)); }
double cylinder_lateralSurfaceArea(Cylinder c) { return 2 * M_PI * c.radius * c.height; }
double cylinder_baseArea(Cylinder c) { return M_PI * pow(c.radius, 2); }

// PYRAMID
typedef struct {
	double length;
	double width;
	double height;
} Pyramid;

double pyramid_volume(Pyramid p) { return (p.length * p.width * p.height) / 3; }
double pyramid_surfaceArea(Pyramid p) { return p.length * p.width + p.length * sqrt(pow(p.width/2,2.0) + pow(p.height,2.0)) + p.width * sqrt(pow(p.length/2,2.0) + pow(p.height,2.0)); }
double pyramid_lateralSurfaceArea(Pyramid p) { return (p.length * sqrt(pow(p.width/2,2.0) + pow(p.height,2.0))) + (p.width * sqrt(pow(p.length/2,2.0) + pow(p.height,2.0))); }
double pyramid_baseArea(Pyramid p) { return p.length * p.width; }

// SPHERE
typedef struct {
	double radius;
} Sphere;

double sphere_volume(Sphere s) { return 1.333333 * M_PI * pow(s.radius,3); } // rough estimate
double sphere_diameter(Sphere s) { return 2 * s.radius; }
double sphere_surfaceArea(Sphere s) { return 4 * M_PI * pow(s.radius, 2); }

// TEMPERATURES

double convertToCelsius(double temp) {
	return (temp - 32) * 0.5555555; // rough estimate
}

double convertToFahrenheit(double temp) {
	return (temp * 1.8) + 32;
}

// QUADRATIC FORMULA

double quadraticPlus(double a, double b, double c) {
	return (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
}

double quadraticMinus(double a, double b, double c) {
	return (-b - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
}

// POINT
typedef struct Point {
	double x;
	double y;
} Point;

void point_toString(Point p) {
	printf("(%f,%f)", p.x, p.y);
}

double distance(Point p1, Point p2) {
	return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
}

void midpoint(Point p1, Point p2) {
	Point result = {(p1.x + p2.x) / 2, (p1.y + p2.y) / 2};
	point_toString(result);
}

double slopeIntercept(Point p, double yIntercept) {
	return (p.y - yIntercept) / p.x;
}

double slope(Point p1, Point p2) {
	return (p2.y - p1.y) / (p2.x - p1.x);
}

// PYTHAGOREAN THEOREM

double pythagoreanTheorem(double a, double b) {
	return sqrt(pow(a,2) + pow(b,2));
}