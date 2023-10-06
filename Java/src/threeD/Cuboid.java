package ShapeHandler;

import static java.lang.Math.sqrt;

public class Cuboid {

    private double length, width, height;

    public Cuboid(double length, double width, double height) {
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

    public double surfaceArea() {
        return 2 * ((width * length) + (height * length) + (height * width));
    }
}
