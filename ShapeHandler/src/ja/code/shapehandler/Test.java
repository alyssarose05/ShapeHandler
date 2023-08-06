package ja.code.shapehandler;

import ja.code.shapehandler.formulas.*;
import ja.code.shapehandler.threeD.*;
import ja.code.shapehandler.twoD.*;

public class Test {

    public static void shapeTest() {

        Triangle a = new Triangle(5, 6, 7);
        System.out.println("TRIANGLE PERIMETER: " + a.perimeter()); // EXPECTED: 18

        Triangle a1 = new Triangle(5, 6);
        System.out.println("TRIANGLE AREA: " + a.area()); // EXPECTED: 15

        Rectangle b = new Rectangle(5, 6);
        System.out.println("\nRECTANGLE PERIMETER: " + b.perimeter()); // EXPECTED: 22
        System.out.println("RECTANGLE AREA: " + b.area()); // EXPECTED: 30
        System.out.println("RECTANGLE DIAGONAL: " + b.diagonal()); // EXPECTED: 7.81

        Square c = new Square(5);
        System.out.println("\nSQUARE PERIMETER: " + c.perimeter()); // EXPECTED: 20
        System.out.println("SQUARE AREA: " + c.area()); // EXPECTED: 25
        System.out.println("SQUARE DIAGONAL: " + c.diagonal()); // EXPECTED: 7.07

        Circle d = new Circle(5);
        System.out.println("\nCIRCLE AREA: " + d.area()); // EXPECTED: 78.54
        System.out.println("CIRCLE CIRCUMFERENCE: " + d.circumference()); // EXPECTED: 31.42
        System.out.println("CIRCLE DIAMETER: " + d.diameter()); // EXPECTED: 10

        Trapezoid e = new Trapezoid(5, 6, 7, 8);
        System.out.println("\nTRAPEZOID PERIMETER: " + e.perimeter()); // EXPECTED: 26

        Trapezoid f = new Trapezoid(5, 6, 7);
        System.out.println("\nTRAPEZOID AREA: " + f.area()); // EXPECTED: 38.5

        Ellipse g = new Ellipse(5, 6);
        System.out.println("\nELLIPSE AREA: " + g.area()); // EXPECTED: 94.25
        System.out.println("ELLIPSE CIRCUMFERENCE: " + g.circumference()); // EXPECTED: 34.56

        Parallelogram h = new Parallelogram(5, 6);
        System.out.println("\nPARALLELOGRAM PERIMETER: " + h.perimeter()); // EXPECTED: 22
        System.out.println("PARALLELOGARM AREA: " + h.area()); // EXPECTED: 30

        Kite i = new Kite(5, 6);
        System.out.println("\nKITE PERIMETER: " + i.perimeter()); // EXPECTED: 22
        System.out.println("KITE AREA: " + i.area()); // EXPECTED: 15

        Polygon j = new Polygon(5, 6);
        System.out.println("\nPOLYGON PERIMETER: " + j.perimeter()); // EXPECTED: 30


    }

    public static void dTest() {
        Cube a = new Cube(5); // THEN EDIT IN KOTLIN
        System.out.println("CUBE VOLUME: " + a.volume()); // EXPECTED: 125
        System.out.println("CUBE SPACE DIAGONAL: " + a.spaceDiagonal()); // EXPECTED: 8.66
        System.out.println("CUBE SURFACE AREA: " + a.surfaceArea()); // EXPECTED: 150

        Cuboid b = new Cuboid(5, 6, 7); // THEN EDIT IN KOTLIN
        System.out.println("\nCUBOID VOLUME: " + b.volume()); // EXPECTED: 210
        System.out.println("CUBOID SPACE DIAGONAL: " + b.spaceDiagonal()); // EXPECTED: 10.49
        System.out.println("CUBOID SURFACE AREA: " + b.surfaceArea()); // EXPECTED: 214

        Cylinder d = new Cylinder(5, 6);
        System.out.println("\nCYLINDER VOLUME: " + d.volume()); // EXPECTED: 471.24
        System.out.println("CYLINDER SURFACE AREA: " + d.surfaceArea()); // EXPECTED: 345.58
        System.out.println("CYLINDER LAT:" + d.lateralSurfaceArea()); // EXPECTED: 188.5
        System.out.println("CYLINDER BASE AREA: " + d.baseArea()); // EXPECTED: 78.54

        Pyramid e = new Pyramid(5, 6, 7);
        System.out.println("\nPYRAMID VOLUME: " + e.volume()); // EXPECTED: 70
        System.out.println("PYRAMID SURFACE AREA: " + e.surfaceArea()); // EXPECTED: 112.68
        System.out.println("PYRAMID LAT: " + e.lateralSurfaceArea()); // EXPECTED: 82.68
        System.out.println("PYRAMID BASE AREA: " + e.baseArea()); // EXPECTED: 30

        Sphere f = new Sphere(5);
        System.out.println("\nSPHERE VOLUME: " + f.volume()); // EXPECTED: 523.6
        System.out.println("SPHERE DIAMETER: " + f.diameter()); // EXPECTED: 10
        System.out.println("SPHERE SURFACE AREA: " + f.surfaceArea()); // EXPECTED: 314.16

    }

    public static void formulas() {
        System.out.println("TO CELSIUS: " + Formulas.convertToCelsius(45.0)); // EXPECTED: 7.22222
        System.out.println("TO FAHRENHEIT: " + Formulas.convertToFahrenheit(45.0)); // EXPECTED: 113

        // x^2 + 3x - 4 = 0
        System.out.println("\nQUADRATIC PLUS: " + Formulas.quadraticPlus(1.0, 3.0, -4.0)); // EXPECTED: 1
        System.out.println("QUADRATIC MINUS: " + Formulas.quadraticMinus(1.0, 3.0, -4.0)); // EXPECTED: -4

        System.out.println("\nDISTANCE: " + Formulas.distance(new Point(1.0, 2.0), new Point(3.0, 4.0))); // EXPECTED: 2.8284271247462
        System.out.println("MIDPOINT: " + Formulas.midpoint(new Point(1.0, 2.0), new Point(3.0, 4.0))); // EXPECTED: (2,3)
        System.out.println("SLOPE INTERCEPT: " + Formulas.slopeIntercept(new Point(1.0, 2.0), 3.0)); // EXPECTED: -1
        System.out.println("SLOPE: " + Formulas.slope(new Point(1.0, 2.0), new Point(3.0, 4.0))); // EXPECTED: 1

        System.out.println("\nPYTHAGOREAN THEOREM: " + Formulas.pythagoreanTheorem(1.0, 2.0)); // EXPECTED: 2.2360679775
    }

    public static void main(String[] args) {
        // shapeTest(); PASSED ALL CHECKS 8/2/23

        // dTest(); PASSED ALL CHECKS 8/2/23

        // formulas(); PASSED ALL CHECKS 8/6/23

    }
}
