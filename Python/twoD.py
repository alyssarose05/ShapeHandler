import math

class Triangle(object):

	def __init__(self, a, b, c):
		self.a = a
		self.b = b
		self.c = c
	
	def setHeightAndBase(self, base, height):
		self.base = base
		self.height = height

	def perimeter(self):
		return self.a + self.b + self.c

	def area(self):
		if self.base == 0.0 and height == 0.0:
			s = (self.a + self.b + self.c) / 2
			return math.sqrt(s * (s - self.a) * (s - self.b) * (s-c))


class Rectangle(object):
	
	def __init__(self, length, width):
		self.length = length
		self.width = width

	def perimeter(self):
		return 2 * (self.length + self.width)

	def area(self):
		return self.length * self.width

	def diagonal(self):
		return math.sqrt(math.pow(self.width,2.0) + math.pow(self.length,2.0))

class Square(object):
	
	def __init__(self, side):
		self.side = side

	def perimeter(self):
		return 4 * self.side

	def area(self):
		return self.side * self.side

	def diagonal(self):
		return math.sqrt(2.0) * self.side

class Circle(object):
	
	def __init__(self, radius):
		self.radius = radius

	def area(self):
		return math.pi * (self.radius * self.radius)

	def circumference(self):
		return 2 * math.pi * self.radius

	def diameter(self):
		return 2 * self.radius

class Trapezoid(object):

	def __init__(self, a, b, c, d):
		self.a = a
		self.b = b
		self.c = c
		self.d = d

	def setBasesAndHeight(self, base1, base2, height):
		self.base1 = base1
		self.base2 = base2
		self.height = height

	def perimeter(self):
		return self.a + self.b + self.c + self.d

	def area(self):
		return ((self.base1 + self.base2) / 2) * self.height

class Ellipse(object):
	
	def __init__(self, a, b):
		self.a = a
		self.b = b

	def area(self):
		return math.pi * self.a * self.b

	def circumference(self):
		return math.pi * (self.a + self.b) // APPROXIMATION

class Parallelogram(object):

	def __init__(self, base, height):
		self.base = base
		self.height = height

	def perimeter(self):
		return 2 * (self.base + self.height)

	def area(self):
		return self.base * self.height

class Kite(object):
	
	def __init__(self, a, b):
		self.a = a
		self.b = b

	def perimeter(self):
		return (2 * self.a) + (2 * self.b)

	def area(self):
		return (self.a * self.b) / 2

class Polygon(object):
	
	def __init__(self, numSides, sideLength):
		self.numSides = numSides
		self.sideLength = sideLength

	def perimeter(self):
		return self.numSides * self.sideLength
		
