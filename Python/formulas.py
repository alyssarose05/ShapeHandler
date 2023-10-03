import math

def convertToCelsius(temp):
	return (temp - 32) * 0.5555555 # rough estimate

def convertToFahrenheit(temp):
	return (temp * 1.8) + 32

def quadraticPlus(a, b, c):
	return (-b + math.sqrt(math.pow(b,2) - (4 * a * c))) / (2 * a)

def quadraticMinus(a, b, c):
	return (-b - math.sqrt(math.pow(b,2) - (4 * a * c))) / (2 * a)

class Point(object):

	def __init__(self, x, y):
		self.x = x
		self.y = y

	def __str__(self):
		return "(" + str(self.x) + ", " + str(self.y) + ")"

def distance(p1, p2):
	return math.sqrt(math.pow((p2.x - p1.x),2) + math.pow((p2.y - p1.y),2))

def midpoint(p1, p2):
	return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2)

def slopeIntercept(p, yIntercept):
	return (p.y - yIntercept) / p.x

def slope(p1, p2):
	return (p2.y - p1.y) / (p2.x - p1.x)

def pythagoreanTheorem(a, b):
	return math.sqrt(math.pow(a,2) + math.pow(b,2))
