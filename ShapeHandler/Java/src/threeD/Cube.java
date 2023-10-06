package ShapeHandler;

import static java.lang.Math.sqrt;

public class Cube {

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

    public double surfaceArea() {
        return 6 * Math.pow(side, 2);
    }
}
