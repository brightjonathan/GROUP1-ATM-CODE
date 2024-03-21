<h1> Automated Teller Machine using c++ </h1>


<h3>LET GO THROUGH THE CODE STEP BY STEP<h3></h3>
<h4> created by Jonathan Bright Obi </h4>

STEP 1. Header Inclusions:
#include <iostream>
#include <string>
These lines include the necessary header files for input/output operations (iostream) and string manipulation (string).

STEP 2: Namespace Declaration:
using namespace std;
This line allows us to use objects and functions from the std namespace without prefixing them with std::.


STEP 3: User Structure:
   struct User {
     string fullName;
    int pin;
     double balance;
    };

This defines a structure User to hold information about each user of the ATM. Each user has a full name (fullName), 
a PIN (pin), and a balance (balance).


STEP 4: Function Prototypes:
void registerUser(User users[], int& numUsers);
bool loginUser(User users[], int numUsers, User*& currentUser);
void displayWelcomeMessage(User* currentUser);
double withdrawMoney(User* currentUser);
bool performAnotherWithdrawal();

These lines declare the prototypes of functions used in the program.


STEP 5: int main() {
         // Declarations
       }
This is the entry point of the program where execution begins. It contains the main logic of the ATM system.


 STEP 6: Main Function Body:
const int MAX_USERS = 10;
User users[MAX_USERS];
int numUsers = 0;
User* currentUser = nullptr;

Here, we declare and initialize variables. MAX_USERS defines the maximum number of users the system can handle. 
We then declare an array users to store user information.
numUsers keeps track of the current number of registered users, 
and currentUser points to the currently logged-in u


STEP 7: Menu Loop:
 while (true) {
   Display menu options
  }

This loop repeatedly displays the menu options and waits for user input until the user chooses to quit (case 3).


STEP 8: Menu Options:
 switch (choice) {
     case 1:
         // Register a new user
         break;
     case 2:
         // Login
         break;
     case 3:
         // Quit
         return 0;
     default:
         // Invalid choice
 }

The switch statement handles user input and calls corresponding functions based on the selected option.

STEP 9: Register User Function:
 void registerUser(User users[], int& numUsers) {
    // Implementation

}

This function allows a new user to register by entering their full name, PIN, and initial deposit amount.


STEP 10: Login User Function:
bool loginUser(User users[], int numUsers, User*& currentUser) {
    // Implementation
  }

This function prompts the user to enter their PIN and verifies it against the stored PINs to log in.


STEP 11: Display Welcome Message Function:
  void displayWelcomeMessage(User* currentUser) {
    // Implementation
  }

This function displays a welcome message to the logged-in user.



STEP 12: Withdraw Money Function:
 double withdrawMoney(User* currentUser) {
    // Implementation
  }

This function facilitates money withdrawal for the logged-in user.


STEP 13: Perform Another Withdrawal Function: 

  bool performAnotherWithdrawal() {
    // Implementation
  }

This function asks the user if they want to perform another withdrawal and returns true if the user chooses to continue.


< ******************************************************* > 
This covers the overall structure and functionality of the provided ATM system code. 
Each function serves a specific purpose in the ATM operation, 
from user registration to money withdrawal and interaction handling.

