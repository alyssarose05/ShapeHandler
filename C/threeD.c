#include <stdio.h>
#include <math.h>

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

void tests() {
    Cube a = {5.0};
    printf("CUBE VOLUME: %f", cube_volume(a)); // EXPECTED: 125
    printf("\nCUBE SPACE DIAGONAL: %f", cube_spaceDiagonal(a)); // EXPECTED: 8.66
    printf("\nCUBE SURFACE AREA: %f", cube_surfaceArea(a)); // EXPECTED: 150
    
    Cuboid b = {5.0, 6.0, 7.0};
    printf("\n\nCUBOID VOLUME: %f", cuboid_volume(b)); // EXPECTED: 210
    printf("\nCUBOID SPACE DIAGONAL: %f", cuboid_spaceDiagonal(b)); // EXPECTED: 10.49
    printf("\nCUBOID SURFACE AREA: %f", cuboid_surfaceArea(b)); // EXPECTED: 214
    
    Cylinder c = {5.0, 6.0};
    printf("\n\nCYLINDER VOLUME: %f", cylinder_volume(c)); // EXPECTED: 471.214
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

int main(int argc, char **argv) {
	// tests(); PASSED ALL CHECKS 10/5/23
	return 0;
}


