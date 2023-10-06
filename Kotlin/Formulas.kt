import kotlin.math.pow
import kotlin.math.sqrt

fun convertToCelsius(temp: Double): Double {
    return (temp - 32) * 0.5555555 // rough estimate
}

fun convertToFahrenheit(temp: Double): Double {
    return (temp * 1.8) + 32
}

fun quadraticPlus(a: Double, b: Double, c: Double): Double {
    return (-b + sqrt(b.pow(2) - (4 * a * c))) / (2 * a)
}

fun quadraticMinus(a: Double, b: Double, c: Double): Double {
    return (-b - sqrt(b.pow(2) - (4 * a * c))) / (2 * a)
}


class Point (var x: Double, var y: Double) {
    override fun toString(): String {
        return "($x, $y)"
    }
}

fun distance(p1: Point, p2: Point): Double {
    return sqrt((p2.x - p1.x).pow(2) + (p2.y - p1.y).pow(2))
}

fun midpoint(p1: Point, p2: Point): Point {
    return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2)
}

fun slopeIntercept(p: Point, yIntercept: Double): Double {
    return (p.y - yIntercept) / p.x
}

fun slope(p1: Point, p2: Point): Double {
    return (p2.y - p1.y) / (p2.x - p1.x)
}

fun pythagoreanTheorem(a: Double, b: Double): Double {
    return sqrt(a.pow(2) + b.pow(2))
}



