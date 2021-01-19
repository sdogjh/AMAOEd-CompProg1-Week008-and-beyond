class Polygon:
    def __init__(self,name, sides, color):
        self.name = name
        self.sides = sides
        self.color = color


    def getPolygon(name, sides, color):
        print(f"Name: {name}")
        print(f"Number of sides: {sides}")
        print(f"Color: {color}")

Polygon.getPolygon("Square","4","Red")