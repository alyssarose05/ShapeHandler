# ShapeHandler

Let's be real: <b>coding could have been so much easier to learn.</b> I always found myself wondering why I could never find any helpful functions or libraries that could have saved me and countless other programmers hours of Googling different (and often complex) formulas and figuring out how to implement them through all the errors, only to use them in just one or two lines of code!

That is why I created the <i>ShapeHandler</i> project. Being made for both Java and Kotlin, there are classes of 2D and 3D shapes that you can put into your own projects to quickly calculate the perimeter, area, etc. of a shape given specific parameters. Here are the currently available shapes and operations:

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

## Installation
Go to the <b>Releases</b> page in this repository. There are two zipped files: one for Java, and one for Kotlin. Download the zipped file corresponding to the language that you will be using, and extract it. 
You will then see a package containing two files: 2DShapes and 3DShapes. You will have to import it into your project to use it. But luckily, this is simple enough.

For Kotlin:
``` kt
import kt.code.shapehandler.*
```


And for Java:
``` java
import ja.code.shapehandler.twoD.*;
import ja.code.shapehandler.threeD.*;
```

And that's it! You're ready to <i>shape up</i> your code!
 Have fun!
