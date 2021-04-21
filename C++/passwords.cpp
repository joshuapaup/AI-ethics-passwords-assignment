#include <iostream>
using namespace std;

// Privacy rights and Internet privacy rights
// Cybersecurity and data breaches

// https://random-ize.com/how-long-to-hack-pass/?
//
// https://haveibeenpwned.com/

// bool isCompatible(string current_password) {
//     1. Want to have passwords be a certain length (conditional on length of i)
//     2. Want to have passwords satisfy containing certain characters
//        i. At least one uppercase and one lowercase letter, two special characters
//        ii. Probably have a requirement_counter > 4
//
//     for (int i = 0; i < current_password.size(); i++) {
//         if (current_password[i] == ASCII value for lower case letters) {}
//         else if (current_password[i] == ASCII value for upper case letters) {}
//         else if (current_password[i] == ASCII value for special character)
//     }
//     return 0;
// }

void changePassword(string current_password) {
    // 1. Want to verify new password != current password
    //    i. Probably set a temp = current_password, compare new_password with temp
    // 2. Want to verify new password != previous_passwords[5]
    //    i. Want to update previous_passwords[5] with recent password
    //    ii. Pop the previous_passwords[0], shift values to left, and update 
    //    previous_passwords[4] with temp
    // 3. Want to verify the new_password is "compatible"
    //    i. Use the isCompatible() function
    // 
    cout << "Called the changePassword() function" << endl;
    cout << "..." << endl;
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
                cout << "You have no more attempts. Try again later. Goodbye!" << endl;
                exit(0);
            }
            cout << "Incorrect password..." << endl;
            cout << "Please input your password: "; 
        }
    }
    cout << "Your current password is: " + current_password << endl;
    cout << "..." << endl;

    while (user_choice != 5) {
        // Preferably need more menu options...
        
        cout << "PASSWORD MENU PROGRAM:" << endl;
        cout << "1. Change current password." << endl;
        cout << "2. Review old passwords." << endl;
        cout << "3. Review current password." << endl;
        cout << "4. To end your program." << endl;
        cout << "..." << endl;
        cout << "Select from one of the following: ";
        cin >> user_choice;
        switch(user_choice) {
            case 1:
                cout << "..." << endl;
                cout << "1. Change current password." << endl;
                cout << "Are you sure you want to change your current password? Y/N? ";
                cin >> response;
                while (response != "Y" || response != "N") {
                    if (response == "Y") {
                        cout << "..." << endl;
                        changePassword(current_password);
                        break;
                    }
                    else if (response == "N") {
                        cout << "..." << endl;
                        cout << "Returning you to main menu..." << endl;
                        cout << "..." << endl;
                        break;
                    }
                    else {
                        cout << "..." << endl;
                        cout << "I didn't quite catch that." << endl;
                        cout << "..." << endl;
                        cout << "Are you sure you want to change your current password? Y/N? ";
                        cin >> response;
                    }
                }
                break;
            case 2:
                cout << "..." << endl;
                cout << "Your previous passwords are:" << endl;
                reviewOldPasswords(previous_passwords);
                break;
            case 3:
                cout << "..." << endl;
                cout << "Your current password is: " + current_password << endl;
                cout << "..." << endl;
                break;
            case 4:
                cout << "..." << endl;
                cout << "Thank you for checking in. Goodbye!" << endl;
                cout << "..." << endl;
                exit(0);
            default:
                cout << "..." << endl;
                cout << "I didn't quite catch that. Please try again." << endl;
                cout << "..." << endl;
                break;
        }
    }
}
