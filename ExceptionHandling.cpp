//
// Created by Ankit Sahu on 3/19/24.
//

// C++ program to demonstate the use of try,catch and throw
// in exception handling.

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // Some code
    cout << "Before try \n";

    // try block
    try {
        throw 'a';
        cout << "Inside try \n";
        if (x < 0) {
            // throwing an exception
            throw x;
            cout << "After throw (Never executed) \n";
        }
    }

        // catch block
    catch (int x) {
        cout << "Exception Caught \n";
    }

    catch (...){
        cout<<"All exception\n";
    }
    cout << "After catch (Will be executed) \n";
    return 0;
}