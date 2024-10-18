//============================================================================
// Name        : Module1_Info_display.cpp
// Author      : MS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;  // Use the standard namespace to avoid prefixing std:: before every statement

int main() {
    // Declare variables to store the fictional person's information
    // Variables are containers that store different types of data, such as text or numbers

    string firstName = "Alex";          // Store the first name as a string (text)
    string lastName = "Johnson";            // Store the last name as a string
    string streetAddress = "123 5th Street";  // Store the street address as a string
    string city = "Minneapolis";        // Store the city name as a string
    int zipCode = 55403;                // Store the zip code as an integer (number)

    // Use 'cout' to print each piece of information to the console
    // '<<' is the stream insertion operator that sends output to the console
    cout << "Fictional Person's Information:" << endl;  // Print a heading for the information
    cout << "First Name: " << firstName << endl;        // Print the first name
    cout << "Last Name: " << lastName << endl;          // Print the last name
    cout << "Street Address: " << streetAddress << endl;  // Print the street address
    cout << "City: " << city << endl;                   // Print the city name
    cout << "Zip Code: " << zipCode << endl;            // Print the zip code

    // Return 0 to indicate that the program ran successfully
    return 0;
}
