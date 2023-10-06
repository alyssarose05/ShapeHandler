#include <iostream>
#include <cmath>

using namespace std;

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

void tests() {
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

int main()
{
    // tests(); PASSED ALL CHECKS 10/6/23
    return 0;
}