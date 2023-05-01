

/*Write a program that reads an unspecified number of strings and displays them in the reverse order
they were entered. Your program should follow an outline similar to the following:
1. Inform the user that the program will read strings until “STOP” is entered
2. Loop
a. Prompt the user for a string
b. If the string is “STOP” break the loop, otherwise store it in an appropriate data
structure
3. Inform the user that the data they will now be displayed in reverse
4. Display all the strings in reverse.
5. Free the space used by the data structure to store the strings 
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> strings;

    // Inform the user that the program will read strings until "STOP" is entered
    cout << "Enter strings. Enter 'STOP' to end input." << endl;

    // Loop to read strings
    while (true) {
        string input;

        // Prompt the user for a string
        cout << "> ";
        getline(cin, input);

        // If the string is "STOP", break the loop
        if (input == "STOP") {
            break;
        }

        // Store the string in the vector
        strings.push_back(input);
    }

    // Inform the user that the data will now be displayed in reverse
    cout << "Here are the strings in reverse order:" << endl;

    // Display the strings in reverse
    for (int i = strings.size() - 1; i >= 0; i--) {
        cout << strings[i] << endl;
    }

    // Free the space used by the vector
    strings.clear();

    return 0;
}
