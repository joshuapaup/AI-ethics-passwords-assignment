#include <iostream>
using namespace std;

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
    string response;

    cout << "Welcome to your password storage!" << endl;
    cout << "..." << endl;
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