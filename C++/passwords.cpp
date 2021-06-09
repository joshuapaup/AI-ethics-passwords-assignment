#include <iostream>
#include <cctype>
using namespace std;

// Privacy rights and Internet privacy rights
// Cybersecurity and data breaches

// https://random-ize.com/how-long-to-hack-pass/?
//
// https://haveibeenpwned.com/

void checkPasswordStrength(string current_password) {
    cout << "..." << endl;
    int satisfaction_counter = 0;
    if (current_password.size() > 12) {
        satisfaction_counter++;
    }
    for (int i = 0; i < current_password.size(); i++) {
        if (islower(current_password[i])) {
            satisfaction_counter++;
            break;
        }
    }
    for (int i = 0; i < current_password.size(); i++) {
        if (isupper(current_password[i])) {
            satisfaction_counter++;
            break;
        }
    }
    for (int i = 0; i < current_password.size(); i++) {
        if (isdigit(current_password[i])) {
            satisfaction_counter++;
            break;
        }
    }
    for (int i = 0; i < current_password.size(); i++) {
        if (current_password[i] == ("!" || "@" || "#" || "$" || "%" || "^" || "&" || "*" || "(" || ")" || "_" || "-" || "+" || "=" || "?" || "/")) {
            satisfaction_counter++;
            break;
        }
    }
    cout << "Your password '" << current_password << "' has a satisfaction score = " << satisfaction_counter << endl;
    
    
    if (satisfaction_counter == 0 || satisfaction_counter == 1) {
        cout << "Your password is WEAK in strength." << endl;
        cout << "..." << endl;
    }
    else if (satisfaction_counter == 2 || satisfaction_counter == 3) {
        cout << "Password is MEDIUM in strength." << endl;
        cout << "..." << endl;
    }
    else if (satisfaction_counter >= 4) {
        cout << "Password is STRONG in strength." << endl;
        cout << "..." << endl;
    }
}

string changePassword(string current_password) {
    cout << "..." << endl;
    string new_password = current_password;
    string verify = current_password;
    cout << "Please input your new password: ";
    while (new_password == current_password) {
        cin >> new_password;
        if (new_password == current_password) {
            cout << "Your new password cannot match your previous password..." << endl;
            cout << "..." << endl;
            cout << "Please input your new password: ";
        }
        else {
            checkPasswordStrength(new_password);
            cout << "Your new password is '" << new_password << "'" << endl;
            cout << "..." << endl;
        }
    }
    return new_password;
}

void updateOldPasswords(string previous_passwords[5], string old_password) {
    for (int i = 0; i < 4; i++) {
        previous_passwords[i] = previous_passwords[i+1];
    }
    previous_passwords[4] = old_password;
}

void reviewOldPasswords(string passwords[5]) {
    cout << "............" << endl;
    cout << "...Oldest..." << endl;
    for (int i = 0; i < 5; i++) {
        cout << passwords[i] << endl;
    }
    cout << "...Newest..." << endl;
    cout << "............" << endl;
}

int main() {
    string previous_passwords[5] = {"", "", "", "", ""};
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
            cout << "You have " << allowed_attempts << " attempt(s) remaining..." << endl;
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
        cout << "4. Check password strength." << endl;
        cout << "5. To end your program." << endl;
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
                        updateOldPasswords(previous_passwords, current_password); 
                        current_password = changePassword(current_password);
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
                checkPasswordStrength(current_password);
                break;    
            case 5:
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
