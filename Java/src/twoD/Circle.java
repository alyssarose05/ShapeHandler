package ShapeHandler;

import static java.lang.Math.PI;

public class Circle {

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
