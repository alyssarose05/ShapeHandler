import static java.lang.Math.PI;

public class Sphere {
    private double radius;

    public Sphere(double radius) {
        this.radius = radius;
    }

    public double volume() {
        return 1.333333 * PI * Math.pow(radius, 3); // rough estimate
    }

    public double diameter() {
        return 2 * radius;
    }

    public double surfaceArea() {
        return 4 * PI * Math.pow(radius, 2);
    }
}
