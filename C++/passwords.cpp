#include <iostream>
#include <cctype>
#include <math.h>
using namespace std;

// Privacy rights and Internet privacy rights
// Cybersecurity and data breaches

// https://random-ize.com/how-long-to-hack-pass/?
//
// https://haveibeenpwned.com/

void checkPasswordStrength(string current_password) {
    cout << "..." << endl;
    int character_counter = 0;
    // These four boolean variables will help us count each conditional in later for-loop
    // only once. 
    bool is_upper = false;
    bool is_lower = false;
    bool is_digit = false;
    bool is_other = false;

    // Most recent record for a computer was 100 billion passwords/sec.
    // https://theconversation.com/a-computer-can-guess-more-than-100-000-000-000-passwords-per-second-still-think-yours-is-secure-144418
    long cracking_rate = 100000000000;

    // Using a for loop, we want to traverse the characters of current_password
    // If we run into any instance where current_password[i] is uppercase, lowercase,
    // is a digit, or a special character, we want to update character_counter.
    // * character_counter += 26 with uppercase and lowercase because a computer checks
    // 26 unique characters each.
    // * character_counter += 10 with digit because there's 10 unique characters.
    // * character_counter += 32 with special because there's 32 unique characters.
    //
    // We only want to update character_counter ONCE for each conditional. 
    for (int i = 0; i < current_password.size(); i++) {
        if (islower(current_password[i]) && is_lower == false) {
            character_counter += 26;
            is_lower = true;
        }
        else if (isupper(current_password[i]) && is_upper == false) {
            character_counter += 26;
            is_upper = true;
        }
        else if (isdigit(current_password[i]) && is_digit == false) {
            character_counter += 10;
            is_digit = true;
        }
        else if ((!isdigit(current_password[i]) && !isupper(current_password[i]) && !islower(current_password[i])) && is_other == false) {
            character_counter += 32;
            is_other = true;
        }
        else {
            continue;
        }
    }

    // Take character_counter and raise it to the current_password.size() power. 
    // A computer will have to check X unique keyboard characters for each Y position.
    // There are other ways to count decimalYears, decimalMonths, etc. That is up to an
    // instructor's discretion as to modify this section.
    float combinations = pow(character_counter, current_password.size());
    float total_seconds = combinations/cracking_rate;

    float decimalYears = total_seconds/(3600*24*365);
    int years = floor(decimalYears);

    float decimalMonths = (decimalYears-years)*12;
    int months = floor(decimalMonths);

    float decimalDays = (decimalMonths-months)*30;
    int days = floor(decimalDays);

    float decimalHours = (decimalDays - days)*24;
    int hours = floor(decimalHours);

    float decimalMinutes = (decimalHours - hours)*60;
    int minutes = floor(decimalMinutes);

    float decimalSeconds = (decimalMinutes - minutes)*60;
    int seconds = floor(decimalSeconds);

    cout << "It would take approximately..." << endl;
    cout << years << " years, " << months << " months, " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    cout << "To brute force your current password." << endl;
    cout << "..." << endl;

    // Designate the students to write their own weak-to-strong thresholds and explain
    // in comments or write-up why they chose those thresholds.
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
