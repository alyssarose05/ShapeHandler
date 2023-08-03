package shapehandler.code.java.twoD;

public class Kite {

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
