#include <iostream>
#include <string>

using namespace std;

struct User {
    string fullName;
    int pin;
    double balance;
};

void registerUser(User users[], int& numUsers);
bool loginUser(User users[], int numUsers, User*& currentUser);
void displayWelcomeMessage(User* currentUser);
double withdrawMoney(User* currentUser);
bool performAnotherWithdrawal();

int main() {
    const int MAX_USERS = 10;
    User users[MAX_USERS];
    int numUsers = 0;
    User* currentUser = nullptr;

    while (true) {
        cout << "Welcome to the ATM System\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser(users, numUsers);
                break;
            case 2:
                if (loginUser(users, numUsers, currentUser)) {
                    displayWelcomeMessage(currentUser);
                    do {
                        double withdrawalAmount = withdrawMoney(currentUser);
                        currentUser->balance -= withdrawalAmount;
                    } while (performAnotherWithdrawal());
                }
                break;
            case 3:
                cout << "Thank you for using the ATM. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

void registerUser(User users[], int& numUsers) {
    if (numUsers >= 10) {
        cout << "Cannot register more users. Maximum limit reached.\n";
        return;
    }

    User newUser;
    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, newUser.fullName);
    cout << "Enter PIN: ";
    cin >> newUser.pin;
    cout << "Enter initial deposit amount: ";
    cin >> newUser.balance;

    users[numUsers++] = newUser;
    cout << "User registered successfully.\n";
}

bool loginUser(User users[], int numUsers, User*& currentUser) {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    for (int i = 0; i < numUsers; ++i) {
        if (users[i].pin == pin) {
            currentUser = &users[i];
            return true;
        }
    }
    cout << "Invalid PIN. Please try again.\n";
    return false;
}

void displayWelcomeMessage(User* currentUser) {
    cout << "Welcome, " << currentUser->fullName << "!\n";
}

double withdrawMoney(User* currentUser) {
    double withdrawalAmount;
    cout << "Your current balance is $" << currentUser->balance << endl;
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > currentUser->balance) {
        cout << "Insufficient balance.\n";
        return 0;
    }

    return withdrawalAmount;
}

bool performAnotherWithdrawal() {
    char choice;
    cout << "Do you want to perform another withdrawal? (Y/N): ";
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}





//LET GO THROUGH THE CODE STEP BY STEP
//created by Jonathan Bright Obi

//STEP 1. Header Inclusions:
// #include <iostream>
// #include <string>
// These lines include the necessary header files for input/output operations (iostream) and string manipulation (string).

//STEP 2: Namespace Declaration:
//using namespace std;
//This line allows us to use objects and functions from the std namespace without prefixing them with std::.


//STEP 3: User Structure:
//   struct User {
//     string fullName;
//     int pin;
//     double balance;
//    };

//This defines a structure User to hold information about each user of the ATM. Each user has a full name (fullName), 
//a PIN (pin), and a balance (balance).


//STEP 4: Function Prototypes:
//void registerUser(User users[], int& numUsers);
//bool loginUser(User users[], int numUsers, User*& currentUser);
//void displayWelcomeMessage(User* currentUser);
//double withdrawMoney(User* currentUser);
//bool performAnotherWithdrawal();

//These lines declare the prototypes of functions used in the program.


//STEP 5: int main() {
         // Declarations
//       }
//This is the entry point of the program where execution begins. It contains the main logic of the ATM system.


// STEP 6: Main Function Body:
//const int MAX_USERS = 10;
//User users[MAX_USERS];
//int numUsers = 0;
//User* currentUser = nullptr;

//Here, we declare and initialize variables. MAX_USERS defines the maximum number of users the system can handle. 
//We then declare an array users to store user information.
//numUsers keeps track of the current number of registered users, 
//and currentUser points to the currently logged-in u


//STEP 7: Menu Loop:
// while (true) {
    // Display menu options
//  }

//This loop repeatedly displays the menu options and waits for user input until the user chooses to quit (case 3).


//STEP 8: Menu Options:
// switch (choice) {
//     case 1:
//         // Register a new user
//         break;
//     case 2:
//         // Login
//         break;
//     case 3:
//         // Quit
//         return 0;
//     default:
//         // Invalid choice
// }

//The switch statement handles user input and calls corresponding functions based on the selected option.

//STEP 9: Register User Function:
// void registerUser(User users[], int& numUsers) {
    // Implementation
//  }

//This function allows a new user to register by entering their full name, PIN, and initial deposit amount.


//STEP 10: Login User Function:
//bool loginUser(User users[], int numUsers, User*& currentUser) {
    // Implementation
//  }

//This function prompts the user to enter their PIN and verifies it against the stored PINs to log in.


//STEP 11: Display Welcome Message Function:
//  void displayWelcomeMessage(User* currentUser) {
    // Implementation
//  }

//This function displays a welcome message to the logged-in user.



//STEP 12: Withdraw Money Function:
//  double withdrawMoney(User* currentUser) {
    // Implementation
//  }

//This function facilitates money withdrawal for the logged-in user.


//STEP 13: Perform Another Withdrawal Function: 

//  bool performAnotherWithdrawal() {
    // Implementation
//  }

//This function asks the user if they want to perform another withdrawal and returns true if the user chooses to continue.


//< ******************************************************* > //
//This covers the overall structure and functionality of the provided ATM system code. 
//Each function serves a specific purpose in the ATM operation, 
//from user registration to money withdrawal and interaction handling.

 





