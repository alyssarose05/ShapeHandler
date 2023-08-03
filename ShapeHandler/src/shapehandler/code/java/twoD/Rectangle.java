package shapehandler.code.java.twoD;

public class Rectangle {

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
