import numpy

#print("Nice to meet you " + name + "!")
#age = input("Your age? ")
#print("So, you are already " + age + " years old, " + name)
#def main():
#    print("in main")
#    print("main line 2")

print ("Welcome to Bertie Woosters 8-puzzle solver")
option = input("Type '1' to use a default puzzle, or '2' to enter your own puzzle:\n")
print("\nYou have choosen option " + option)

print("Enter your puzzle, use a zero to represent the blank")
print("Enter the first row, use space or tabs between numbers 1 2 3")
print("Enter the second row, use space or tabs between numbers 4 8 0")
print("Enter the third row, use space or tabs between numbers\n")
print("\nEnter your choice of algorithm:")
algochoice = int(input("\t1. Uniform Cost Search \n\t2. A* with the Misplaced Tile heuristic.\n\t3. A* with the Manhattan distance heuristic.\n"))

if (algochoice == 1):
    print("you choose 1")

elif (algochoice == 2):
    print("you choose 2")
else:
    print("you choose 3")

if __name__ == '__main__':
        main()
