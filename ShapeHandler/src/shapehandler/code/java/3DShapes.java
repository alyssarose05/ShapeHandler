package shapehandler.code.java;

import static java.lang.Math.PI;
import static java.lang.Math.sqrt;

class Cube {

    private double side;

    public Cube(double side) {
        this.side = side;
    }

    public double volume() {
        return Math.pow(side, 3);
    }

    public double spaceDiagonal() {
        return sqrt(3) * side;
    }

    public double surfaceArea() { return 6 * Math.pow(side, 2); }
}

class Cuboid {

    private double length, width, height;

    public Cuboid (double length, double width, double height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }

    public double volume() {
        return length * width * height;
    }

    public double spaceDiagonal() {
        return sqrt(Math.pow(length, 2) + Math.pow(width, 2) + Math.pow(height, 2));
    }

    public double surfaceArea() { return 2 * ((width * length) + (height * length) + (height * width)); }
}

class Cylinder {

    private double radius, height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    public double volume() {
        return PI * Math.pow(radius, 2) * height;
    }

    public double surfaceArea() {
        return (2 * PI * radius * height) + (2 * PI * Math.pow(radius, 2));
    }

    public double lateralSurfaceArea() {
        return 2 * PI * radius * height;
    }

    public double baseArea() {
        return PI * Math.pow(radius, 2);
    }
}

class Pyramid {

    private double length, width, height;

    public Pyramid(double length, double width, double height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }

    public double volume() {
        return (length * width * height) / 3;
    }

    public double surfaceArea() {
        return ((length * width) + length * sqrt(Math.pow(width/2, 2) + Math.pow(height, 2))) + (width * sqrt(Math.pow(length/2, 2) + Math.pow(height, 2)));
    }

    public double lateralSurfaceArea() {
        return (length * sqrt(Math.pow(width/2, 2) + Math.pow(height, 2))) + (width * sqrt(Math.pow(length/2, 2) + Math.pow(height, 2)));
    }

    public double baseArea() {
        return length * width;
    }
}

class Sphere {

    private double radius;

    public Sphere(double radius) {
        this.radius = radius;
    }

    public double volume() {
        return 1.333333 * PI * Math.pow(radius, 3); // rough estimate
    }

    public double diameter() {
        return 2 * radius;
    }

    public double surfaceArea() {
        return 4 * PI * Math.pow(radius, 2);
    }
}