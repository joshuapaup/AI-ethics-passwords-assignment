#include <iostream>
using namespace std;

// Privacy rights and Internet privacy rights
// Cybersecurity and data breaches

// https://random-ize.com/how-long-to-hack-pass/?
//
// https://haveibeenpwned.com/

// bool isCompatible(string current_password) {
//     for (int i = 0; i < current_password.size(); i++) {
//         if (current_password[i] == ASCII value for lower case letters) {}
//         else if (current_password[i] == ASCII value for upper case letters) {}
//         else if (current_password[i] == ASCII value for special character)
//     }
//     return 0;
// }

string changePassword(string current_password, string previous_passwords[5]) {
    return 0;
}

void reviewOldPasswords(string passwords[5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Former password " + to_string(5 - i) + ": " + passwords[i] << endl;
    }
    cout << "" << endl;
}

int main() {
    string previous_passwords[5] = {"filler1", "filler2", "filler3", "filler4", "filler5"};
    int user_choice;
    string current_password = "password";
    int allowed_attempts = 3;
    string user_input;
    string response;

    cout << "Welcome to your password storage!" << endl;
    cout << "..." << endl;
    cout << "Please input your password: ";
    while (user_input != current_password) {
        // Pursue changing user_input into asterisks in the future
        cin >> user_input;
        if (user_input == current_password) {
            cout << "Logging you in..." << endl;
            cout << "..." << endl;
            break;
        }
        else {
            allowed_attempts--;
            cout << "You have " + to_string(allowed_attempts) + " attempt(s) remaining..." << endl;
            if (allowed_attempts == 0) {
                cout << "You have no more attempts. Goodbye!" << endl;
                exit(0);
            }
            cout << "Incorrect password..." << endl;
            cout << "Please input your password: "; 
        }
    }
    cout << "Your current password is: " + current_password << endl;
    cout << "..." << endl;

    while (user_choice != 5) {
        cout << "PASSWORD MENU PROGRAM:" << endl;
        cout << "1. Change current password." << endl;
        cout << "2. Review old passwords." << endl;
        cout << "3. Review current password." << endl;
        cout << "4. For Choice 5" << endl;
        cout << "5. To end your program." << endl;
        cout << "..." << endl;
        cout << "Select from one of the following: ";
        cin >> user_choice;
        switch(user_choice) {
            case 1:
                cout << "..." << endl;
                cout << "1. Change current password." << endl;
                cin >> response;
                while (response != "Y" || response != "N") {
                    cout << "Are you sure you want to change your current password? Y/N?";
                    if (response == "Y") {
                        cout << "Response = yes" << endl;
                        break;
                    }
                    else if (response == "N") {
                        cout << "Response = no" << endl;
                        break;
                    }
                    else {
                        cout << "I didn't quite catch that." << endl;
                        cin >> response;
                    }
                }
                break;
            case 2:
                cout << "..." << endl;
                cout << "2. Review old passwords." << endl;
                reviewOldPasswords(previous_passwords);
                break;
            case 3:
                cout << "..." << endl;
                cout << "3. Review current password." << endl;
                cout << "Your current password is: " + current_password << endl;
                cout << "" << endl;
                break;
            case 4:
                cout << "..." << endl;
                cout << "Choice 4" << endl;
                break;
            case 5:
                cout << "..." << endl;
                cout << "Thank you for checking in. Goodbye!" << endl;
                break;
            default:
                cout << "..." << endl;
                cout << "I didn't quite catch that. Please try again." << endl;
                break;
        }
    }
}

void reviewOldPasswords(string passwords[5]);
