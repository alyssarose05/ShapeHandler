package shapehandler.code.kotlin

import kotlin.math.PI
import kotlin.math.pow
import kotlin.math.sqrt

class Cube(var side: Double) {
    fun volume(): Double {
        return side.pow(3)
    }

    fun spaceDiagonal(): Double {
        return sqrt(3.0) * side
    }

    fun surfaceArea(): Double {
        return 6 * side.pow(2)
    }
}

class Cuboid(var length: Double, var width: Double, var height: Double) {
    fun volume(): Double {
        return length * width * height
    }

    fun spaceDiagonal(): Double {
        return sqrt(length.pow(2.0) + width.pow(2.0) + height.pow(2.0))
    }

    fun surfaceArea(): Double {
        return 2 * (length * width + width * height + length * height)
    }
}

class Cylinder(var radius: Double, var height: Double) {
    fun volume(): Double {
        return PI * radius.pow(2) * height
    }

    fun surfaceArea(): Double {
        return (2 * PI * radius * height) + (2 * PI * radius.pow(2))
    }

    fun lateralSurfaceArea(): Double {
        return 2 * PI * radius * height
    }

    fun baseArea(): Double {
        return PI * radius.pow(2);
    }
}

class Pyramid(var length: Double, var width: Double, var height: Double) {
    fun volume(): Double {
        return (length * width * height) / 3
    }

    fun surfaceArea(): Double {
        return length * width + length * sqrt((width / 2).pow(2.0) + height.pow(2.0)) + width * sqrt(
            (length / 2).pow(
                2.0
            ) + height.pow(2.0)
        )
    }

    fun lateralSurfaceArea(): Double {
        return (length * sqrt((width / 2).pow(2.0) + height.pow(2.0))) +
                (width * sqrt((length / 2).pow(2.0) + height.pow(2.0)))
    }

    fun baseArea(): Double {
        return length * width
    }
}

class Sphere(var radius: Double) {
    fun volume(): Double {
        return 1.333333 * PI * radius.pow(3) // rough estimate
    }

    fun diameter(): Double {
        return 2 * radius
    }

    fun surfaceArea(): Double {
        return 4 * PI * radius.pow(2)
    }
}