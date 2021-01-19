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

class Student(Person):
    def __init__(self, program, year, university):
        self.program = program
        self.year = year
        self.university = university
    
    def getStudentName():
        return Person.__name__
    def getStudentAddress():
        return Person.address
    def getStudentGender():
        return Person.gender
    def getStudentOccupation():
        return Person.occupation

    def getStudentInfo(program, year, university):
        print(f"Program: {program}")
        print(f"Year in college: {year}")
        print(f"University Enrolled: {university}")

s = Student

s.getPerson("Alezandro Intal", "Abu Dhabi, UAE", "Male", "Student")
s.getStudentInfo("BSIT", "1", "AMA University")
