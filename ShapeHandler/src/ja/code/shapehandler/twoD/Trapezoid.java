package ja.code.shapehandler.twoD;

public class Trapezoid {

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
