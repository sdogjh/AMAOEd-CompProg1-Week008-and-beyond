class Person:
    def __init__(self,name, address, gender, occupation):
        self.name = name
        self.address = address
        self.gender = gender
        self.occupation = occupation

    def getPerson(name, address, gender, occupation):
        print(f"Name: {name}")
        print(f"Address: {address}")
        print(f"Gender: {gender}")
        print(f"Occupation: {occupation}")

Person.getPerson("Jojo Joestar","Liverpool, England","Male", "Adventurer")