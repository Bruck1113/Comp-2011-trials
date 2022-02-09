#include <iostream>
using namespace std;
  
int main()
{
    /*
        There are 4 errors in total. Can you catch them all? :)
  
        See the expected output section on the lab page to see what is expected from the corrected program.
    */
  
    int number; //first error there was no ";" here to end the statement
    cout << "Welcome to the exciting, fun, and awesome programming world! "
         << "Enter an odd number, and I can tell something about you! " << endl;// second error here there was no << in front of the endl which will cayse error
    cin >> number;
  
    if (number % 2 == 0) //the third error is in here,we are comparing two value,the operand should be "==" instead of "="
        cout << "Hmm... this is not an odd number..." << endl;
    else
    {
        if (number < 0)
            cout << "You seem to be a bit negative... :( Cheer up! " << endl;
        else
            cout << "You must be very excited! Me too! :)" << endl;
  
    return 0;
}
}//the final error is in here,there is no closing } for the main()