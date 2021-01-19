class leggedMammal:
    def __init__(self,name, legs, fur, tail):
        self.name = name
        self.legs = legs
        self.fur = fur
        self.tail = tail

    def getMammal(name, legs, fur, tail):
        print(f"Animal Name:{name}")
        print(f"No. of legs:{legs}")
        print(f"Type of Fur:{fur}")
        print(f"Has Tail:{tail}")

leggedMammal.getMammal("cat","4","fluffy", "yes")