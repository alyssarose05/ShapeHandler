package kt.code.shapehandler

class Test {
}

fun main(args: Array<String>) {
    // twoD() PASSED ALL CHECKS 8/2/23

    // threeD() PASSED ALL CHECKS 8/2/23

    // formulas() PASSED ALL CHECKS 8/6/23
}

fun twoD() {
    var a = Triangle(5.0, 6.0, 7.0)
    println("TRIANGLE PERIMETER: ${a.perimeter()}") // EXPECTED: 18

    a.setHeightAndBase(5.0, 6.0)
    println("\nTRIANGLE AREA: ${a.area()}") // EXPECTED: 15

    var b = Rectangle(5.0, 6.0)
    println("\nRECTANGLE PERIMETER: ${b.perimeter()}") // EXPECTED: 22
    println("RECTANGLE AREA: ${b.area()}") // EXPECTED: 30
    println("RECTANGLE DIAGONAL: ${b.diagonal()}") // EXPECTED: 7.81

    var c = Square(5.0)
    println("\nSQUARE PERIMETER: ${c.perimeter()}") // EXPECTED: 20
    println("SQUARE AREA: ${c.area()}") // EXPECTED: 25
    println("SQUARE DIAGONAL: ${c.diagonal()}") // EXPECTED: 7.07

    var d = Circle(5.0)
    println("\nCIRCLE AREA: ${d.area()}") // EXPECTED: 78.54
    println("CIRCLE CIRCUMFERENCE: ${d.circumference()}") // EXPECTED: 31.42
    println("CIRCLE DIAMETER: ${d.diameter()}") // EXPECTED: 10

    var e = Trapezoid(5.0, 6.0, 7.0, 8.0)
    println("\nTRAPEZOID PERIMETER: ${e.perimeter()}") // EXPECTED: 26

    e.setBasesAndHeight(5.0, 6.0, 7.0)
    println("\nTRAPEZOID AREA: ${e.area()}") // EXPECTED: 38.5

    var f = Ellipse(5.0, 6.0)
    println("\nELLIPSE AREA: ${f.area()}") // EXPECTED: 94.25
    println("ELLIPSE CIRCUMFERENCE: ${f.circumference()}") // EXPECTED: 34.56

    var g = Parallelogram(5.0, 6.0)
    println("\nPARALLELOGRAM PERIMETER: ${g.perimeter()}") // EXPECTED: 22
    println("PARALLELOGRAM AREA: ${g.area()}") // EXPECTED: 30

    var h = Kite(5.0, 6.0)
    println("\nKITE PERIMETER: ${h.perimeter()}") // EXPECTED: 22
    println("KITE AREA: ${h.area()}") // EXPECTED: 15

    var i = Polygon(5, 6.0)
    println("\nPOLYGON PERIMETER: ${i.perimeter()}") // EXPECTED: 30

}

fun threeD() {
    var a = Cube(5.0)
    println("\nCUBE VOLUME: ${a.volume()}") // EXPECTED: 125
    println("CUBE SPACE DIAGONAL: ${a.spaceDiagonal()}") // EXPECTED: 8.66
    println("CUBE SURFACE AREA: ${a.surfaceArea()}") // EXPECTED: 150

    var b = Cuboid(5.0, 6.0, 7.0)
    println("\nCUBOID VOLUME: ${b.volume()}") // EXPECTED: 210
    println("CUBOID SPACE DIAGONAL: ${b.spaceDiagonal()}") // EXPECTED: 10.49
    println("CUBOID SURFACE AREA: ${b.surfaceArea()}") // EXPECTED: 214

    var c = Cylinder(5.0, 6.0)
    println("\nCYLINDER VOLUME: ${c.volume()}") // EXPECTED: 471.24
    println("CYLINDER SURFACE AREA: ${c.surfaceArea()}") // EXPECTED: 345.58
    println("CYLINDER LATERAL SURFACE AREA: ${c.lateralSurfaceArea()}") // EXPECTED: 188.5
    println("CYLINDER BASE AREA: ${c.baseArea()}") // EXPECTED: 78.54

    var d = Pyramid(5.0, 6.0, 7.0)
    println("\nPYRAMID VOLUME: ${d.volume()}") // EXPECTED: 70
    println("PYRAMID SURFACE AREA: ${d.surfaceArea()}") // EXPECTED: 112.68
    println("PYRAMID LATERAL SURFACE AREA: ${d.lateralSurfaceArea()}") // EXPECTED: 82.68
    println("PYRAMID BASE AREA: ${d.baseArea()}") // EXPECTED: 30

    var e = Sphere(5.0)
    println("\nSPHERE VOLUME: ${e.volume()}") // EXPECTED: 523.6
    println("SPHERE DIAMETER: ${e.diameter()}") // EXPECTED: 10
    println("SPHERE SURFACE AREA: ${e.surfaceArea()}") // EXPECTED: 314.16

}

fun formulas() {
    println("TO CELSIUS: ${convertToCelsius(45.0)}") // EXPECTED: 7.22222
    println("TO FAHRENHEIT: ${convertToFahrenheit(45.0)}") // EXPECTED: 113

    // x^2 + 3x - 4 = 0
    println("\nQUADRATIC PLUS: ${quadraticPlus(1.0, 3.0, -4.0)}") // EXPECTED: 1
    println("QUADRATIC MINUS: ${quadraticMinus(1.0, 3.0, -4.0)}") // EXPECTED: -4

    println("\nDISTANCE: ${distance(Point(1.0,2.0), Point(3.0,4.0))}") // EXPECTED: 2.8284271247462
    println("MIDPOINT: ${midpoint(Point(1.0, 2.0), Point(3.0, 4.0))}") // EXPECTED: (2,3)
    println("SLOPE INTERCEPT: ${slopeIntercept(Point(1.0,2.0), 3.0)}") // EXPECTED: -1
    println("SLOPE: ${slope(Point(1.0, 2.0), Point(3.0, 4.0))}") // EXPECTED: 1

    println("\nPYTHAGOREAN THEOREM: ${pythagoreanTheorem(1.0, 2.0)}") // EXPECTED: 2.2360679775





}
