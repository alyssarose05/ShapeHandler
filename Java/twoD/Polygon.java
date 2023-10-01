public class Polygon {

    private int numSides;
    private double sideLength;

    public Polygon(int numSides, double sideLength) {
        this.numSides = numSides;
        this.sideLength = sideLength;
    }

    public double perimeter() {
        return numSides * sideLength;
    }
}
