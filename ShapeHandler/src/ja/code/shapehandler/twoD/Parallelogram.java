package ja.code.shapehandler.twoD;

public class Parallelogram {

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
