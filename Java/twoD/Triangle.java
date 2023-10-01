public class Triangle {
    private double a, b, c;
    private double base, height;


    public Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    public double perimeter() {
        return a + b + c;
    }

    public double area() {
        if (base == 0.0 && height == 0.0) {
            double s = (a + b + c) / 2;
            return Math.sqrt(s * (s - a) * (s - b) * (s - c));
        }
        return 0.5 * base * height;
    }
}
