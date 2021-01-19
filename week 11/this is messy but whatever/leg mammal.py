class leggedMammal:
    def __init__(self,name, legs, fur, tail):
        self.name = name
        self.legs = legs
        self.fur = fur
        self.tail = tail

    def getMammal(name, legs, fur, tail):
        print(f"Animal Name: {name}")
        print(f"No. of legs: {legs}")
        print(f"Type of Fur: {fur}")
        print(f"Has Tail: {tail}")

class Dog(leggedMammal):
    def __init__(self, breed, size, registered):
        self.breed = breed
        self.size = size
        self.registered = registered
    
    def getDogName():
        return leggedMammal.__name__
    def getDogLegs():
        return leggedMammal.legs
    def getDogFur():
        return leggedMammal.fur
    def getDogTail():
        return leggedMammal.tail

    def getDogInfo(breed, size, registered):
        print(f"Breed: {breed}")
        print(f"Size: {size}")
        print(f"is Registered: {registered}")

d = Dog

d.getMammal("Yama","4", "fluffly","Yes")
d.getDogInfo("Japanese Spitz", "big", "No")




    
    




    
