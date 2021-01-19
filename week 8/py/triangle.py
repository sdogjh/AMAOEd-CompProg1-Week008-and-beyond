characters = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J"]
num = int(input('Enter a height: '))

for i in characters:
    if i < num:
        i += 1
        for j in characters:
            if j < n - i - 1:
                j += 1
                print (end="  ")
                for z in characters:
                    if z < (i*2) + 1:
                        z += 1
                print (characters[i])

