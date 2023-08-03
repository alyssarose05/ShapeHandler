package kt.code.shapehandler

import kotlin.math.PI
import kotlin.math.pow
import kotlin.math.sqrt

class Triangle(var a: Double, var b: Double, var c: Double) {
    var base: Double = 0.0; var height: Double = 0.0

    fun setHeightAndBase(base: Double, height: Double) {
        this.base = base
        this.height = height
    }

    fun perimeter(): Double {
        return a + b + c
    }

    fun area(): Double {
        if (base == 0.0 && height == 0.0) {
            var s = (a + b + c) / 2
            return sqrt(s * (s - a) * (s - b) * (s - c))
        }
        return 0.5 * base * height
    }
}

class Rectangle(var length: Double, var width: Double) {
    fun perimeter(): Double {
        return 2 * (length + width)
    }

    fun area(): Double {
        return length * width
    }

    fun diagonal(): Double {
        return sqrt(width.pow(2.0) + length.pow(2.0))
    }
}

class Square(var side: Double) {
    fun perimeter(): Double {
        return 4 * side
    }

    fun area(): Double {
        return side * side
    }

    fun diagonal(): Double {
        return sqrt(2.0) * side
    }
}

class Circle(var radius: Double) {
    fun area(): Double {
        return PI * (radius * radius)
    }

    fun circumference(): Double {
        return 2 * PI * radius
    }

    fun diameter(): Double {
        return 2 * radius
    }
}

class Trapezoid(var a: Double, var b: Double, var c: Double, var d: Double) {
    var base1 = 0.0; var base2 = 0.0; var height = 0.0

    fun setBasesAndHeight(base1: Double, base2: Double, height: Double) {
        this.base1 = base1
        this.base2 = base2
        this.height = height
    }

    fun perimeter(): Double {
        return a + b + c + d
    }

    fun area(): Double {
        return ((base1 + base2) / 2) * height
    }
}

class Ellipse(var a: Double, var b: Double) {
    fun area(): Double {
        return PI * a * b
    }

    fun circumference(): Double {
        return PI * (a + b) // APPROXIMATION
    }
}

class Parallelogram(var base: Double, var height: Double) {
    fun perimeter(): Double {
        return 2 * (base + height)
    }

    fun area(): Double {
        return base * height
    }
}

class Kite(var a: Double, var b: Double) {
    fun perimeter(): Double {
        return (2 * a) + (2 * b)
    }

    fun area(): Double {
        return (a * b) / 2
    }
}

class Polygon(var numSides: Int, var sideLength: Double) {
    fun perimeter(): Double {
        return numSides * sideLength
    }
}