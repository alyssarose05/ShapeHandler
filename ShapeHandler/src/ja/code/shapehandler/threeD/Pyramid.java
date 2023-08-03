package ja.code.shapehandler.threeD;

import static java.lang.Math.sqrt;

public class Pyramid {

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
        return ((length * width) + length * sqrt(Math.pow(width / 2, 2) + Math.pow(height, 2))) + (width * sqrt(Math.pow(length / 2, 2) + Math.pow(height, 2)));
    }

    public double lateralSurfaceArea() {
        return (length * sqrt(Math.pow(width / 2, 2) + Math.pow(height, 2))) + (width * sqrt(Math.pow(length / 2, 2) + Math.pow(height, 2)));
    }

    public double baseArea() {
        return length * width;
    }
}
