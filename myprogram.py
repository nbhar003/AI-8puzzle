import numpy as np
import queue

#the general search code
goalstate = np.array([[ 1., 2., 3.], [ 4., 5., 6.], [ 7., 8., 0.]])
print(goalstate[0, 0], goalstate[0, 1], goalstate[0, 2])
print(goalstate[1, 0], goalstate[1, 1], goalstate[1, 2])
print(goalstate[2, 0], goalstate[2, 1], goalstate[2, 2])
class gensearch():
    def __init__(initstate, goal, operators):
        self.initstate = initstate
        self.goal = goalstate
        self.operators = operators
        q = queue.Queue()




#user input starts below

def main(): #the uper input function
        #print("in main")
        #print("main line 2")
        print ("Welcome to Bertie Woosters 8-puzzle solver")
        option = input("Type '1' to use a default puzzle, or '2' to enter your own puzzle:\n")
        print("\nYou have choosen option " + option)

        print("Enter your puzzle, use a zero to represent the blank")
        print("\tEnter the first row, use space or tabs between numbers:")
        #row1 = input("\tEnter the first row, use space or tabs between numbers:").split()

        #n=int(input("Enter N for N x N matrix : "))         #3 here
        matrix=[]                                                #use list for storing 2D array

#get the user input and store it in list (here IN : 1 to 9)
        for i in range(3):
            row_list=[]
            row_list = input().split()         #temporary list to store the row
            matrix.append(row_list)                               #add the row to the list
        print(matrix)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

#Display the 2D array
        for i in range(3):
            for j in range(3):
                print(matrix[i][j], end=" ")
            print()                                           #new line


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

#user input ends here
