# Passwords Assignment - AI Ethics Education

## I. Introduction
The Passwords Assignment is an introductory computing assignment meant to reinforce topics in 'arrays' and 'strings', while also helping students consider ethical concepts in passwords, password management programs, and privacy rights.

As of Friday, 30 April 2021, the assignment has students implement five functions:
* `main()` - hosts a login system (the default password is 'password') that allows you three tries to get right and hosts the password menu program within a switch statement that executes other functions. 
* `checkPasswordStrength()` - returns how strong your current password is on the basis that it is 12 characters long, has an upper case letter, a lower case letter, and a special character. 
* `changePassword()` - allows you to change your current password, returns your new password's strength, and verifies if your new password is different from your previous password.
    * *Possible implementation #1* - Compare the inputed `new_password` with the elements of `previous_passwords[5]` to reinforce to not use a previous password.
* `updateOldPasswords()` - updates the array of `previous_passwords[5]` by shifting values one space to the left and updating the final element with the previous `current_password`. 
* `reviewOldPasswords()` - prints your five most recent passwords.

We hope to implement a couple more functions including:
* ~~`updateOldPasswords()` - want to call this function during the `changePassword()` function call to update the array with the previous password.~~ ✅ (4/30/21) 
* `bruteForcePassword()` - would be cool to implement a function that attempts to brute force guess a weak password; would probably want to verify the `satisfaction_score` we receive from the `checkPasswordStrength()` function to prevent `bruteForcePassword()` from attempting to solve a strong, complex password.
* `bruteForceTime()` - alternatively, we could also implement a function that returns how much time it would take to brute force your current password and maybe the old passwords as well. 

### Prior Knowledge
This assignment assumes students have a knowledge in the following areas before starting this assignment: 

* Data types and writing functions
* Conditionals
    * `if()...else if()...else`
    * `switch()`
* Operators
    * Relational operators (>, >=, <, <=, ==, !=)
    * Logical operators (&&, ||, !)
* Loops
    * `for`
    * `while`
    * `do while`

### 'Arrays' and 'Strings'
For this assignment, we hope to accomplish several things to help reinforce topics in 'arrays' and 'strings':
* Use loops to access and traverse through arrays.
    * Access an array of previous passwords and compare with current/new passwords.
* Use loops to access individual characters within a string variable.
    * Determine whether current/new password is strong by analyzing diversity of individual characters and variable length.
* User operators to compare strings (or characters)
    * Want to verify if new password is similar to previous password(s).
* Reinforce prior knowledge as shared above.

### Ethical Considerations

## Resources
* https://random-ize.com/how-long-to-hack-pass/?
* https://haveibeenpwned.com/
* https://en.wikipedia.org/wiki/Password_cracking

### Suggested Augmentations
For this assignment, we don't cover every concept but want to leave that up to the discretion of any professor who wishes to use this assignment. Below includes a few of our own augmentation suggestions:
* Integrate I/O concepts with this assignment.
* Implement a new way of checking password strength.
* Make new password not equal to any of the previous passwords instead of most recent password.
* Pursue how to change log-in password from characters to asterisks.
* Menu option to store passwords across multiple programs/sites.
* Implementation to have a specific threshold you would like to have your passwords be (in relation to a `bruteForceChecker()` or `satisfaction_counter`)

## II. Demo
To demo, either download the .zip folder or run in your Terminal `git clone https://github.com/joshuapaup/AI-ethics-passwords-assignment.git` to a directory of your choice. 

From there, open the 'Passwords Assignment` folder where you will be presented with two folders: 'C++' or 'Python'.

### C++ Version
* Open your Terminal and navigate to the 'C++' folder. 
* You will have two files: `passwords` and `passwords.cpp`
    * `passwords.cpp` is where students will write their code in.
    * `passwords` is a driver file that will execute your code in the Terminal. 
* To compile `passwords.cpp`, run `g++ passwords.cpp -o passwords` in Terminal.
* To execute your code in Terminal, run `./passwords`.
* From there, you will be able to interact with the assignment in your Terminal.

### Python Version
* Open Anaconda Navigator (or other software that hosts Jupyter Notebooks) and open select 'Launch' for Jupyter Notebooks.
* Once your `localhost` opens in your browser, navigate to your Python director and open `password_Assignments.ipynb`. 
* From there, run each of the cells above the driver cell at the bottom of the notebook to compile your Python code.
* When you're ready, run the driver cell and you will be able to interact with the assignment.