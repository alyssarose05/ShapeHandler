package shapehandler.code.java.twoD;

public class Square {

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
