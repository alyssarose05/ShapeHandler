from twoD import *
from threeD import *
from formulas import *

def twoD():
	a = Triangle(5.0, 6.0, 7.0)
	print(f"TRIANGLE PERIMETER: {a.perimeter()}") # EXPECTED: 18

	a.setHeightAndBase(5.0, 6.0)
	print(f"TRIANGLE AREA: {a.area()}") # EXPECTED: 15

	b = Rectangle(5.0, 6.0)
	print(f"\nRECTANGLE PERIMETER: {b.perimeter()}") # EXPECTED: 22
	print(f"RECTANGLE AREA: {b.area()}") # EXPECTED: 30
	print(f"RECTANGLE DIAGONAL: {b.diagonal()}") # EXPECTED: 7.81

	c = Square(5.0)
	print(f"\nSQUARE PERIMETER: {c.perimeter()}") # EXPECTED: 20
	print(f"SQUARE AREA: {c.area()}") # EXPECTED: 25
	print(f"SQUARE DIAGONAL: {c.diagonal()}") # EXPECTED: 7.07

	d = Circle(5.0)
	print(f"\nCIRCLE AREA: {d.area()}") # EXPECTED: 78.54
	print(f"CIRCLE CIRCUMFERENCE: {d.circumference()}") # EXPECTED: 31.42
	print(f"CIRCLE DIAMETER: {d.diameter()}") # EXPECTED: 10

	e = Trapezoid(5.0, 6.0, 7.0, 8.0)
	print(f"\nTRAPEZOID PERIMETER: {e.perimeter()}") # EXPECTED: 26

	e.setBasesAndHeight(5.0, 6.0, 7.0)
	print(f"\nTRAPEZOID AREA: {e.area()}") # EXPECTED: 38.5

	f = Ellipse(5.0, 6.0)
	print(f"\nELLIPSE AREA: {f.area()}") # EXPECTED: 94.25
	print(f"ELLIPSE CIRCUMFERENCE: {f.circumference()}") # EXPECTED: 34.56

	g = Parallelogram(5.0, 6.0)
	print(f"\nPARALLELOGRAM PERIMETER: {g.perimeter()}") # EXPECTED: 22
	print(f"\nPARALLELOGRAM AREA: {g.area()}") # EXPECTED: 30

	h = Kite(5.0, 6.0)
	print(f"\nKITE PERIMETER: {h.perimeter()}") # EXPECTED: 22
	print(f"\nKITE AREA: {h.area()}") # EXPECTED: 15

	i = Polygon(5, 6.0)
	print(f"\nPOLYGON PERIMETER: {i.perimeter()}") # EXPECTED: 30

def threeD():
	a = Cube(5.0)
	print(f"CUBE VOLUME: {a.volume()}") # EXPECTED: 125
	print(f"CUBE SPACE DIAGONAL: {a.spaceDiagonal()}") # EXPECTED: 8.66
	print(f"CUBE SURFACE AREA: {a.surfaceArea()}") # EXPECTED: 150

	b = Cuboid(5.0, 6.0, 7.0)
	print(f"\nCUBOID VOLUME: {b.volume()}") # EXPECTED: 210
	print(f"CUBOID SPACE DIAGONAL: {b.spaceDiagonal()}") # EXPECTED: 10.49
	print(f"CUBOID SURFACE AREA: {b.surfaceArea()}") # EXPECTED: 214

	c = Cylinder(5.0, 6.0)
	print(f"\nCYLINDER VOLUME: {c.volume()}") # EXPECTED: 471.24
	print(f"CYLINDER SURFACE AREA: {c.surfaceArea()}") # EXPECTED: 345.58
	print(f"CYLINDER LATERAL SURFACE AREA: {c.lateralSurfaceArea()}") # EXPECTED: 188.5
	print(f"CYLINDER BASE AREA: {c.baseArea()}") # EXPECTED: 78.54

	d = Pyramid(5.0, 6.0, 7.0)
	print(f"\nPYRAMID VOLUME: {d.volume()}") # EXPECTED: 70
	print(f"PYRAMID SURFACE AREA: {d.surfaceArea()}") # EXPECTED: 112.68
	print(f"PYRAMID LATERAL SURFACE AREA: {d.lateralSurfaceArea()}") # EXPECTED: 82.68
	print(f"PYRAMID BASE AREA: {d.baseArea()}") # EXPECTED: 314.16

	e = Sphere(5.0)
	print(f"\nSPHERE VOLUME: {e.volume()}") # EXPECTED: 523.6
	print(f"SPHERE DIAMETER: {e.diameter()}") # EXPECTED: 10
	print(f"SPHERE SURFACE AREA: {e.surfaceArea()}") # EXPECTED: 314.16

def formulas():
	print(f"TO CELSIUS: {convertToCelsius(45.0)}") # EXPECTED: 7.22222
	print(f"TO FAHRENHEIT: {convertToFahrenheit(45.0)}") # EXPECTED: 113

	# x^2 + 3x - 4 = 0
	print(f"\nQUADRATIC PLUS: {quadraticPlus(1.0, 3.0, -4.0)}") # EXPECTED: 1
	print(f"QUADRATIC MINUS: {quadraticMinus(1.0, 3.0, -4.0)}") # EXPECTED: -4

	print(f"\nDISTANCE: {distance(Point(1.0,2.0), Point(3.0,4.0))}") # EXPECTED: 2.8284271247462
	print(f"MIDPOINT: {midpoint(Point(1.0, 2.0), Point(3.0, 4.0))}") # EXPECTED: (2,3)
	print(f"SLOPE INTERCEPT: {slopeIntercept(Point(1.0, 2.0), 3.0)}") # EXPECTED: -1
	print(f"SLOPE: {slope(Point(1.0, 2.0), Point(3.0, 4.0))}") # EXPECTED: 1

	print(f"\nPYTHAGOREAN THEOREM: {pythagoreanTheorem(1.0, 2.0)}") # EXPECTED: 2.2360679775
    	


	
# twoD() PASSED ALL CHECKS 10/3/23
# threeD() PASSED ALL CHECKS 10/3/23
# formulas() PASSED ALL CHECKS 10/3/23


