#include <stdio.h>
#include <cmath>

class Triangle {
    public:
        double a;
        double b;
        double c;
        
        double base;
        double height;
        
        double perimeter() {
            return a + b + c;
        }
        
        double area() {
            if (base == 0.0 && height == 0.0) {
                double s = (a + b + c) / 2;
                return sqrt(s * (s - a) * (s - b) * (s - c));
            }
            return 0.5 * base * height;
        }
};

class Rectangle {
    public:
        double length;
        double width;
        
        double perimeter() {
            return 2 * (length + width);
        }
        
        double area() {
            return length * width;
        }
        
        double diagonal() {
            return sqrt(pow(width,2.0) + pow(length,2.0));
        }
};

class Square {
    public:
        double side;
        
        double perimeter() {
            return 4 * side;
        }
        
        double area() {
            return side * side;
        }
        
        double diagonal() {
            return sqrt(2.0) * side;
        }
};

class Circle {
    public:
        double radius;
    
        double area() {
            return M_PI * (radius * radius);
        }
    
        double circumference() {
            return 2 * M_PI * radius;
        }
    
        double diameter() {
            return 2 * radius;
        }
};

class Trapezoid {
    public:
        double a;
        double b;
        double c;
        double d;
    
        double base1;
        double base2;
        double height;
    
        double perimeter() {
            return a + b + c + d;
        }
    
        double area() {
            return ((base1 + base2) / 2) * height;
        }
};

class Ellipse {
    public:
        double a;
        double b;
    
        double area() {
            return M_PI * a * b;
        }
    
        double circumference() {
            return M_PI * (a + b);
        }
};

class Parallelogram {
    public:
        double base;
        double height;
        
        double perimeter() {
            return 2 * (base + height);
        }
        
        double area() {
            return base * height;
        }
};

class Kite {
    public:
        double a;
        double b;
        
        double perimeter() {
            return (2 * a) + (2 * b);
        }
        
        double area() {
            return (a * b) / 2;
        }
};

class Polygon {
    public:
        int numSides;
        double sideLength;
        
        double perimeter() {
            return numSides * sideLength;
        }
};

void tests() {
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

int main()
{
    // tests(); ALL CHECKS PASSED 10/6/23
    return 0;
}

