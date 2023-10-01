import math

class Cube(object):

	def __init__(self, side):
		self.side = side

	def volume(self):
		return math.pow(self.side, 3)

	def spaceDiagonal(self):
		return math.sqrt(3.0) * self.side

	def surfaceArea(self):
		return 6 * math.pow(self.side, 2)

class Cuboid(object):

	def __init__(self, length, width, height):
		self.length = length
		self.width = width
		self.height = height

	def volume(self):
		return self.length * self.width * self.height

	def spaceDiagonal(self):
		return math.sqrt(math.pow(self.length,2.0) + math.pow(self.width,2.0) + math.pow(self.height, 2.0))

	def surfaceArea(self):
		return 2 * (self.length * self.width + self.width * self.height + self.length * self.height)

class Cylinder(object):

	def __init__(self, radius, height):
		self.radius = radius
		self.height = height

	def volume(self):
		return math.pi * math.pow(self.radius,2) * self.height

	def surfaceArea(self):
		return (2 * math.pi * self.radius * self.height) + (2 * math.pi * math.pow(self.radius,2))

	def lateralSurfaceArea(self):
		return 2 * math.pi * self.radius * self.height

	def baseArea(self):
		return math.pi * math.pow(self.radius,2)

class Pyramid(object):

	def __init__(self, length, width, height):
		self.length = length
		self.width = width
		self.height = height

	def volume(self):
		return (self.length * self.width * self.height) / 3

	def surfaceArea(self):
		return self.length * self.width + self.length * math.sqrt(math.pow((width / 2),2.0) + math.pow(self.height,2.0) + self.width * sqrt(
             math.pow(self.length/2, 2.0) + math.pow(self.height, 2.0))
        )

	def baseArea(self):
		return self.length * self.width

class Sphere(object):

	def __init__(self, radius):
		self.radius = radius

	def volume(self):
		return 1.333333 * math.pi * math.pow(radius,3) # rough estimate

	def diameter(self):
		return 2 * self.radius

	def surfaceArea(self):
		return 4 * self.pi * math.pow(radius,2)

