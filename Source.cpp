#include <iostream>
#include <vector>
using namespace std;
void ForLoop();
int main()
{

  cout << endl << "LoopspooL: Visualize Better, Work Smarter" << endl;
  cout << endl << "Let's Get Started with LoopspooL" << endl;
  int menuChoice;
  cout << endl << "What loop would you like to learn about today"<<endl;
    cout << endl << "1. For Loop" << endl;
    cout << "2. While Loop" << endl;
    cout << "3. Do - while Loop" << endl;
    cout << "4. Infinite Loop" << endl;
    cout << endl << "Press #5 key to Exit" << endl;
    cout << endl << "I would like to choose: ";
    cin >> menuChoice;

            switch (menuChoice)
            {
              case 1:
                cout << endl <<"Entering For Loop Session"<< endl;
                   ForLoop();
                break;
              case 2:
                cout << "While Loops -Coming Soon-";
                break;
              case 3:
                cout << "Do - While Loops -Coming Soon-";
                break;
              case 4:
                cout << "infinite Loop example -Coming Soon-";
                  break;
              case 5:
                cout << "Exiting...";
                cout << "...";
                cout << "..................";
                break;
              default:
                cout << "Invalid Choice";
                break;
            }

            return 0;
}

void ForLoop()
{

  cout << endl << "For Loop:" << endl;
  cout << endl << "A for loop is a repetition control structure which allows you to write a loop that is executed a specific number of times." << endl;
  cout << "A for loop simplifies the writing of a counter-controlled while loop." << endl;
  cout << "A for loop is a \"pretest\" loop, the loop condition is evaluated before executing the body of the loop." << endl;
  cout << endl << "The word \"for\" in a for loop is a reserved word.," << endl << "the syntax for a for loop is: " << endl << endl << " for (initialize statement; loop condition; update statement)" << endl << "\t{" << endl << endl << "\tstatement / body of for loop" << endl << endl << "\t}" << endl;

  cout << endl << "A for loop can express multiplication as a loop of addition, lets see this in action."<<endl;

  vector <int> integer_Input(3,0);
  cout << endl << "Choose two whole numbers you would like to multiply." << endl;
  cout << "Enter First number: ";
  cin >> integer_Input[0];
  cout << "Enter second number: ";
  cin >> integer_Input[1];

  int product = (integer_Input[0] * integer_Input[1]);

  cout << endl << product;

  cin >> integer_Input[2];
}