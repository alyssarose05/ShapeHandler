package shapehandler.code.java;

import static java.lang.Math.PI;

class Triangle {

    private double a, b, c;
    private double base, height;


    public Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    public double perimeter() {
        return a + b + c;
    }

    public double area() {
        if (base == 0.0 && height == 0.0) {
            double s = (a + b + c) / 2;
            return Math.sqrt(s * (s - a) * (s - b) * (s - c));
        }
        return 0.5 * base * height;
    }
}

class Rectangle {

    private double length, width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double perimeter() {
        return 2 * (length + width);
    }

    public double area() {
        return length * width;
    }

    public double diagonal() {
        return Math.sqrt(Math.pow(width, 2.0) + Math.pow(length, 2.0));
    }
}

class Square {

    private double side;

    public Square(double side) {
        this.side = side;
    }

    public double perimeter() {
        return 4 * side;
    }

    public double area() {
        return side * side;
    }

    public double diagonal() {
        return Math.sqrt(2) * side;
    }
}

class Circle {

    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double area() {
        return PI * (radius * radius);
    }

    public double circumference() {
        return 2 * PI * radius;
    }

    public double diameter() {
        return 2 * radius;
    }
}

class Trapezoid {

    private double a, b, c, d;
    private double base1, base2, height;

    public Trapezoid(double a, double b, double c, double d) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }

    public Trapezoid(double base1, double base2, double height) {
        this.base1 = base1;
        this.base2 = base2;
        this.height = height;
    }

    public double perimeter() {
        return a + b + c + d;
    }

    public double area() {
        return ((base1 + base2) / 2) * height;
    }
}

class Ellipse {

    private double a, b;

    public Ellipse(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public double area() {
        return PI * a * b;
    }

    public double circumference() {
        return PI * (a + b);
    }
}

class Parallelogram {

    private double base, height;

    public Parallelogram(double base, double height) {
        this.base = base;
        this.height = height;
    }

    public double perimeter() {
        return 2 * (base + height);
    }

    public double area() {
        return base * height;
    }
}

class Kite {

    private double a, b;

    public Kite(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public double perimeter() {
        return (2 * a) + (2 * b);
    }

    public double area() {
        return (a * b) / 2;
    }
}

class Polygon {

    private int numSides;
    private double sideLength;

    public Polygon(int numSides, double sideLength) {
        this.numSides = numSides;
        this.sideLength = sideLength;
    }

    public double perimeter() {
        return numSides * sideLength;
    }
}
