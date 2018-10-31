#include <iostream>
#include <string>

using namespace std;

struct puzzlenodes {
public:
    int puzzlelayout[9]; //making a array of 9 vals
};

int main() {
    cout << "Welcome to Neesha Bhardwaj's 8-puzzle solver" << endl;
    cout << "Type '1' to use a default puzzle, or '2' to enter your own puzzle" << endl;
    int input;
    cin >> input;
    cout << endl;
    cout << "\tYou have choosen option: " << input << endl << endl;
    puzzlenodes puzzle; //making a new puzzle

    //means they have choosen for a default puzzle
    //[[3,2,8],[4,5,6],[7,1,0]]
    if (input == 1) {
      puzzlenodes puzzle = {1, 2, 3, 4, 5, 6, 7, 8, 0};
      // puzzle.puzzlelayout = {{1}, {2}, {3}};
      // defaultpuzzle.puzzle[0] = 3;
      // defaultpuzzle.puzzle[1] = 2;
      // defaultpuzzle.puzzle[2] = 8;
      // defaultpuzzle.puzzle[3] = 4;
      // defaultpuzzle.puzzle[4] = 5;
      // defaultpuzzle.puzzle[5] = 6;
      // defaultpuzzle.puzzle[6] = 7;
      // defaultpuzzle.puzzle[7] = 1;
      // defaultpuzzle.puzzle[8] = 0;
    }
    //they have choosen for a self made puzzle
    else if (input == 2) {
      string num;
      cout << "Enter your puzzle, user a zero to represent the blank" << endl;
      cout << "Enter the first row, use space or tabs between numbers:";

      //getting first row of user input
      cin.ignore(); //solving problem of no user input being asked
      getline(cin, num);
      cout << "string entered for row 1:" << num << endl;

      //getting the user value for the first row and saving it into the puzzle
      int k = 0;
      for (int i = 0; i < num.length(); i++) {
        cout << "i val: " << i << endl;
          while (num[i] == ' ' || num[i] == '\t'){
              i++;
          }
          cout << "num val at index " << k << " : "  << num[i] - 48 << " ";
          puzzle.puzzlelayout[k] = num[i] - 48;
          cout <<  "puzzle val: " << puzzle.puzzlelayout[k] << " " << endl;
          k++;
      }

      //getting line 2 of user input
      cout << endl << "Please enter the second row: ";
      getline(cin, num);
      cout << "string entered for row 2:" << num << endl;
      //getting the user value for the second row and saving it into the puzzle
      k = 3;
      for (int i = 0; i < num.length(); i++) {
          while (num[i] == ' ' || num[i] == '\t'){
              i++;
          }
          puzzle.puzzlelayout[k] = num[i] - '0';
          cout << "num val: " << num[i] - '0' ;
          cout <<  "puzzle val: " << puzzle.puzzlelayout[k] << " " << endl;
            k++;

      }

      //getting line 3 of user inputted
      //getting line 2 of user input
      cout << endl << "Please enter the third row: ";
      getline(cin, num);
      cout << "string entered for row 3:" << num << endl;
      //getting the user value for the second row and saving it into the puzzle
      k = 6;
      for (int i = 0; i < num.length(); i++) {
          while (num[i] == ' ' || num[i] == '\t'){
              i++;
          }
            cout << "num val: " << num[i] - 48 << " ";
          puzzle.puzzlelayout[k] = num[i] - '0';
          cout <<  "puzzle val: " << puzzle.puzzlelayout[k] << endl;
          k++;
      }

      cout << "\n\nfinal puzzle: " << endl;
      for (int i = 0; i < 9; i++) {
        cout << puzzle.puzzlelayout[i] << " ";
      }

    }

    else {
      cout <<"not an option" << endl;
    }
  return 0;
}
