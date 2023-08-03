package ja.code.shapehandler.twoD;

import static java.lang.Math.PI;

public class Ellipse {

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
