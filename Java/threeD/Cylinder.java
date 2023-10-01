import static java.lang.Math.PI;

public class Cylinder {

    private double radius, height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    public double volume() {
        return PI * Math.pow(radius, 2) * height;
    }

    public double surfaceArea() {
        return (2 * PI * radius * height) + (2 * PI * Math.pow(radius, 2));
    }

    public double lateralSurfaceArea() {
        return 2 * PI * radius * height;
    }

    public double baseArea() {
        return PI * Math.pow(radius, 2);
    }
}
