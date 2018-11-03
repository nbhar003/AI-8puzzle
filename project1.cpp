#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int puzzlesize = 9; // var can be changed to accomodate any puzzle size

struct puzzlenodes {
public:
    int puzzlelayout[9]; //making a array of 9 vals
};
//add priority funtion to tell whats the max

//function which tells you if it is goal state or not


// bool isGoalState(puzzlenodes currstate) {
//     puzzlenodes goalstate = {1, 2, 3, 4, 5, 6, 7, 8, 0};
//
//     for (int i = 0; i < puzzlesize; i++) {
//       if (goalstate[i] != currstate[i]) {
//           return false;
//       }
//     }
//     return true;
// }


// function to find the blank in the array
// int findblank(puzzlenodes currstate) {
//   int blank = 0;
//   for (int i = 0 ; i < puzzlesize; i++) {
//       if (currstate[i] == 0)
//         return i;
//   }
//   return 0;
// }

int main() {

    cout << "Welcome to Neesha Bhardwaj's 8-puzzle solver" << endl;
    cout << "Type '1' to use a default puzzle, or '2' to enter your own puzzle" << endl;
    int input;
    cin >> input;
    cout << endl;
    cout << "\tYou have choosen option: " << input << endl << endl;

    vector<vector<int> > userpuzzle ;
    //setting the size of the matrix
    userpuzzle.resize(3);
    userpuzzle[0].resize(3);
    userpuzzle[1].resize(3);
    userpuzzle[2].resize(3);
    puzzlenodes puzzle; //making a new puzzle


    //means they have choosen for a default puzzle
    //[[3,2,8],[4,5,6],[7,1,0]]
    if (input == 1) {
      puzzlenodes puzzle = {1, 2, 3, 4, 5, 6, 7, 8, 0};

      userpuzzle[0][0] = 1;
      userpuzzle[0][1] = 2;
      userpuzzle[0][2] = 3;
      userpuzzle[1][0] = 4;
      userpuzzle[1][1] = 5;
      userpuzzle[1][2] = 6;
      userpuzzle[2][0] = 7;
      userpuzzle[2][1] = 8;
      userpuzzle[2][2] = 0;

      //for testing purposes
      for (int i = 0 ; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          cout << userpuzzle[i][j] << " ";
        }
      }
    } //end of input 1

    //they have choosen for a self made puzzle
    else if (input == 2) {
          string num;
          cout << "Enter your puzzle, user a zero to represent the blank" << endl;
          cout << "Enter the first row, use space or tabs between numbers:";

          //getting first row of user input
          cin.ignore(); //solving problem of no user input being asked
          getline(cin, num);
          //cout << "string entered for row 1:" << num << endl;

          //getting the user value for the first row and saving it into the puzzle
          int k = 0;
          for (int i = 0; i < num.length(); i++) {
            cout << "i val: " << i << endl;
              while (num[i] == ' ' || num[i] == '\t'){
                  i++;
              }
            //  cout << "num val at index " << k << " : "  << num[i] - 48 << " ";
              puzzle.puzzlelayout[k] = num[i] - 48;
              //cout <<  "puzzle val: " << puzzle.puzzlelayout[k] << " " << endl;
              k++;
          }

          //getting line 2 of user input
          cout << endl << "Please enter the second row: ";
          getline(cin, num);
          //cout << "string entered for row 2:" << num << endl;
          //getting the user value for the second row and saving it into the puzzle
          k = 3;
          for (int i = 0; i < num.length(); i++) {
              while (num[i] == ' ' || num[i] == '\t'){
                  i++;
              }
              puzzle.puzzlelayout[k] = num[i] - '0';
            //  cout << "num val: " << num[i] - '0' ;
              //cout <<  "puzzle val: " << puzzle.puzzlelayout[k] << " " << endl;
                k++;

          }

          //getting line 3 of user inputted
          //getting line 2 of user input
          cout << endl << "Please enter the third row: ";
          getline(cin, num);
          //cout << "string entered for row 3:" << num << endl;
          //getting the user value for the second row and saving it into the puzzle
          k = 6;
          for (int i = 0; i < num.length(); i++) {
              while (num[i] == ' ' || num[i] == '\t'){
                  i++;
              }
              //  cout << "num val: " << num[i] - 48 << " ";
              puzzle.puzzlelayout[k] = num[i] - '0';
              //cout <<  "puzzle val: " << puzzle.puzzlelayout[k] << endl;
              k++;
          }
          cout << endl;
          //cout << "\n\nfinal puzzle: " << endl;
          // for (int i = 0; i < puzzlesize; i++) {
          //   cout << puzzle.puzzlelayout[i] << " ";
          // }
          //converting to 2d;
          int count  = 0;
            for (int i = 0; i < 3 ; i++) {
              for (int j = 0; j < 3; j++) {
                userpuzzle[i][j] = puzzle.puzzlelayout[count];
                count++;
                cout << "user puzzle 2d: " << userpuzzle[i][j] << endl;
              }
            }

      } //end of option 2 else if
      else { // entering something incorrect
        cout <<"not an option" << endl;
    }



      cout << "Enter your choice of algorithm:" << endl;
      cout << "\t1. Uniform Cost Search \n\t2. A* with the Misplaced Tile heuristic.\n\t3. A* with the Manhattan distance heuristic.\n" << endl;
      int algochoice = 0;
      cin >> algochoice;
      if (algochoice == 1) {
        cout << "You choose UCS" << endl;
      }
      else if (algochoice == 2) {
        cout << "You choose Misplaced Tile" << endl;
      }
      else if (algochoice == 3) {
        cout << "You choose Manhattan" << endl;
      }
      else {
        cout << "incorrect option" << endl;
      }

  return 0;
}
