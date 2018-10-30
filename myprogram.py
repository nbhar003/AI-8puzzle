import numpy as np
import queue

#the general search code
#goalstate = [1,2,3,4,5,6,7,8,0]
goalstate = [[1,2,3],[4,5,6],[7,8,0]]
#print(goalstate[0, 0], goalstate[0, 1], goalstate[0, 2])
#print(goalstate[1, 0], goalstate[1, 1], goalstate[1, 2])
#print(goalstate[2, 0], goalstate[2, 1], goalstate[2, 2])

class gensearch():
    def __init__(initstate, goal, operators):
        self.initstate = matrix #setting the inital state to what user inputted
        self.goal = goalstate
        self.operators = operators
        q = queue.PriorityQueue()
        q.put(initstate)
        print (q.get())

def search(puzzle, heuristic):
    print("in search function")

    #check where blank is. if blank is not on the outer edge, you can move stuff around
    #make a set where you add and check if its not inside

#user input starts below

def main(): #the uper input function
        print ("Welcome to Bertie Woosters 8-puzzle solver")
        puzzle = [[1,4,5],[6,7,8],[0,2,3]]
        option = input("Type '1' to use a default puzzle, or '2' to enter your own puzzle:\n")
        print("\nYou have choosen option " + option)

        print("Enter your puzzle, use a zero to represent the blank")
        print("\tEnter the first row, use space or tabs between numbers:")
        #row1 = input("\tEnter the first row, use space or tabs between numbers:").split()
        if (option == '1'):
            print("default puzzle")
            print(puzzle)
        elif (option == '2'):
            puzzle=[]
            for i in range(3):
                row_list=[]
                row_list = input().split()
                puzzle.append(row_list)
            print(puzzle)
        else:
            print("wrong input")
            #Displaying the array for testing purpses
            # for i in range(3):
            #     for j in range(3):
            #         print(matrix[i][j], end=" ")
            #     print()                                           #new line

        print("\nEnter your choice of algorithm:")
        algochoice = int(input("\t1. Uniform Cost Search \n\t2. A* with the Misplaced Tile heuristic.\n\t3. A* with the Manhattan distance heuristic.\n"))

        if (algochoice == 1):
            print("you choose 1")
            search(puzzle, 0)
        elif (algochoice == 2):
            print("you choose 2")
            heuristic = 0;
            for i in range(3):
                for j in range(3):
                    if (puzzle[i][j] != goalstate[i][j]):
                        heuristic += 1
            heuristic -= 1
            print(heuristic)
            search(puzzle,heuristic)
        elif (algochoice == 3):
            print("you choose 3")
            search(puzzle,)
        else:
            print("invalid input")

if __name__ == '__main__':
   main()

#user input ends here
