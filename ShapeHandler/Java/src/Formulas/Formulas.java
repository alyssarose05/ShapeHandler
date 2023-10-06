package ShapeHandler;

public class Formulas {

    public static double quadraticPlus(double a, double b, double c) {
        return (-b + Math.sqrt(Math.pow(b,2) - (4 * a * c))) / (2 * a);
    }

    public static double quadraticMinus(double a, double b, double c) {
        return (-b - Math.sqrt(Math.pow(b,2) - (4 * a * c))) / (2 * a);
    }

    public static double convertToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 0.5555555; // rough estimate
    }

    public static double convertToFahrenheit(double celsius) {
        return (celsius * 1.8) + 32;
    }

    public static double distance(Point p1, Point p2) {
        return Math.sqrt(Math.pow(p2.x - p1.x, 2) + Math.pow(p2.y - p1.y, 2));
    }

    public static Point midpoint(Point p1, Point p2) {
        return new Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
    }

    public static double slopeIntercept (Point p, double yIntercept) {
        return (p.y - yIntercept) / p.x;
    }

    public static double slope(Point p1, Point p2) {
        return (p2.y - p1.y) / (p2.x - p1.x);
    }

    public static double pythagoreanTheorem(double a, double b) {
        return Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2));
    }
}
