# ShapeHandler

Let's be real: <b>coding could have been so much easier to learn.</b> I always found myself wondering why I could never find any helpful functions or libraries that could have saved me and countless other programmers hours of Googling different (and often complex) formulas and figuring out how to implement them through all the errors, only to use them in just one or two lines of code!

That is why I created the <i>ShapeHandler</i> project. Being made for C, C++, Java, Kotlin, and Python (*Look out for new languages that may be added!*), there are classes of 2D and 3D shapes (and even more types of formulas) that you can put into your own projects to quickly calculate the perimeter, area, etc. of a shape given specific parameters. Here are the currently available shapes and operations:

### 2D Shapes
| Triangle    | Rectangle   | Square      | Circle          | Trapezoid   | Ellipse         | Parallelogram | Kite        | Polygon     |
|-------------|-------------|-------------|-----------------|-------------|-----------------|---------------|-------------|-------------|
| perimeter() | perimeter() | perimeter() | area()          | perimeter() | area()          | perimeter()   | perimeter() | perimeter() |
| area()      | area()      | area()      | circumference() | area()      | circumference() | area()        | area()      |             |
|             | diagonal()  | diagonal()  | diameter()      |             |                 |               |             |             |

### 3D Shapes
| Cube            | Cuboid          | Cylinder             | Pyramid              | Sphere        |
|-----------------|-----------------|----------------------|----------------------|---------------|
| volume()        | volume()        | volume()             | volume()             | volume()      |
| spaceDiagonal() | spaceDiagonal() | surfaceArea()        | surfaceArea()        | diameter()    |
| surfaceArea()   | surfaceArea()   | lateralSurfaceArea() | lateralSurfaceArea() | surfaceArea() |
|                 |                 | baseArea()           | baseArea()           |               |

### FORMULAS FOR THE POINT CLASS (takes any point (x,y))
- Distance: distance(p1, p2)
- Midpoint: midpoint(p1, p2)
- Slope intercept: slopeIntercept(p, yIntercept)
- Slope: slope(p1, p2)

### OTHER FORMULAS
- Quadratic Formula: quadraticPlus(a, b, c) and quadraticMinus(a, b, c)
- Temperature conversion: convertToCelsius(temp) and convertToFahrenheit(temp)
- Pythagorean theorem: pythagoreanTheorem(a, b)

### Installation
You are welcome to install these files in any way you see fit, but there are pre-defined and short ways of installing these functions depending on what language you are using.

**C and C++**: Insert the `ShapeHandler.h` file into the same directory as your project. In the source files that use the file, type `#include "ShapeHandler.h"` at the top.

**Java, Kotlin, and Python:** Insert the `ShapeHandler` package into the same directory as your project. In the source files that use the package, type the command that corresponds to the language you are using at the top:
- Java: `import ShapeHandler.*;`
- Kotlin: `import ShapeHandler.*`
- Python: `import ShapeHandler`

And that's it! You're ready to start *shaping* up your code. Have fun!
