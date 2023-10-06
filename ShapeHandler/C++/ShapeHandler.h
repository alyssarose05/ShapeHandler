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

class Cube {
    public:
        double side;
        
        double volume() {
            return pow(side,3);
        }
        
        double spaceDiagonal() {
            return sqrt(3.0) * side;
        }
        
        double surfaceArea() {
            return 6 * pow(side, 2);
        }
};

class Cuboid {
    public:
        double length;
        double width;
        double height;
        
        double volume() {
            return length * width * height;
        }
        
        double spaceDiagonal() {
            return sqrt(pow(length, 2.0) + pow(width, 2.0) + pow(height, 2.0));
        }
        
        double surfaceArea() {
            return 2 * (length * width + width * height + length * height);
        }
};

class Cylinder {
    public:
        double radius;
        double height;
        
        double volume() {
            return M_PI * pow(radius, 2) * height;
        }
        
        double surfaceArea() {
            return (2 * M_PI *radius * height) + (2 * M_PI * pow(radius, 2));
        }
        
        double lateralSurfaceArea() {
            return 2 * M_PI * radius * height;
        }
        
        double baseArea() {
            return M_PI * pow(radius, 2);
        }
};

class Pyramid {
    public:
        double length;
        double width;
        double height;
        
        double volume() {
            return (length * width * height) / 3;
        }
        
        double surfaceArea() {
            return length * width + length * sqrt(pow(width/2,2.0) + pow(height,2.0)) + width * sqrt(pow(length/2,2.0) + pow(height,2.0));
        }
        
        double lateralSurfaceArea() {
            return (length * sqrt(pow(width/2,2.0) + pow(height,2.0))) + (width * sqrt(pow(length/2,2.0) + pow(height,2.0)));
        }
        
        double baseArea() {
            return length * width;
        }
};

class Sphere {
    public:
        double radius;
        
        double volume() {
            return 1.333333 * M_PI * pow(radius, 3); // rough estimate
        }
        
        double diameter() {
            return 2 * radius;
        }
        
        double surfaceArea() {
            return 4 * M_PI * pow(radius, 2);
        }
};

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

// PYTHAGOREAN THEOREM

double pythagoreanTheorem(double a, double b) {
	return sqrt(pow(a,2) + pow(b,2));
}