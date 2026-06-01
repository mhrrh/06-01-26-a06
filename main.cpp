// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  const int COIN_END = 0;
  const int NICKEL = 5;
  const int DIME = 10;
  const int QUARTER = 25;
  const int ITEM_COST = 25;

  int coin = 0;
  int balance = 0;
  int quantity = 0;
  int totalCost = 0;
  int change = 0;

  char choice = ' ';
  bool keepGoing = true;

  cout << fixed << setprecision(2);
  cout << "Welcome to my Coffee/Tea Vending Machine!" << endl << endl;
  while (keepGoing) {
    coin = -1;
    do {
      cout << "Enter coins - 5, 10, or 25 only: ";
      cin >> coin;

      while (cin.fail() ||
            (coin != COIN_END && coin != NICKEL && coin != DIME && coin != QUARTER)){
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Invalid coin! Please enter 5, 10, or 25 only." << endl;
              cout << "Enter coins - 5, 10, or 25 only: ";
              cin >> coin;
            }
            if (coin != COIN_END){
              balance = balance + coin;
            }
    } while (coin != COIN_END);

    cout << end;
    cout << "Your balance is $" << balance / 100.0 << endl << endl;

    cout << "Please pick an option ($0.25 each):" << endl;
    cout << "     C/c: Coffee" << endl;
    cout << "     T/t: Tea" << endl;
    cout << "     Q/q: Quit" << endl;
    cout << ">> ";
    cin >> choice;

    while (choice != 'C' && choice != 'c' && choice != 'T' && choice != 't' && choice != 'Q' && choice != 'q'){
      cout << "Invalid option! Please choose a valid option!" << endl;
      cout << ">> ";
      cin >> choice;
    }
    if (choice == 'Q' || choice == 'q'){
      totalCost = 0;               
      change = balance;
      cout << endl;
      cout << "Your total is $" << totalCost / 100.0 << endl;
      cout << "Your balance is $" << change / 100.0 << endl << endl;

      keepGoing = false;
    }
    else {
      cout << endl;
      cout << "How many would you like?" << endl;
      cout << ">> ";
      cin >> quantity;

      while (cin.fail() || quantity <= 0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid option!" << endl;
        cout << "How many items would you like?" << endl;
        cout << ">> ";
        cin >> quantity;
      }
      totalCost = ITEM_COST * quantity;

      cout << endl;
      cout << "Your total is $" << totalCost / 100.0 << endl;

      if (balance >= totalCost){
        change = balance - totalCost;
        cout << "Your balance is $" << change / 100.0 << endl << endl;
        keepGoing = false;
      }
      else {
        cout << "Your balance is $" << change / 100.0 << endl;
        cout << "Not enough change! Please add more coins." << endl << endl;
      }
     }
  }
  cout << "Thank you for using my Vending Machine Program!" << endl;


  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/*              
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
