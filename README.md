# Passwords Assignment - AI Ethics Education

## I. Introduction
The Passwords Assignment is an introductory computing assignment meant to reinforce topics in 'arrays' and 'strings', while also helping students consider ethical concepts in passwords and password management programs.

As of Sunday, 13 June 2021, the assignment has students implement five functions:
* `main()` - hosts a login system (the default password is 'password') that allows you three tries to get right and hosts the password menu program within a switch statement that executes other functions. 
* `checkPasswordStrength()` - returns how long it would take for a computer to brute force its way to crack your password. 
* `changePassword()` - change your current password and update your previous passwords.
* `updateOldPasswords()` - updates an array that tracks your five most recent passwords.
* `reviewOldPasswords()` - prints your five most recent passwords.

## II. Prior Knowledge
This assignment assumes students have a knowledge in the following areas before starting this assignment: 

* Data types and writing functions
* Conditionals - `if()`, `else if()`, `else`, `switch()`
* Operators
    * Relational operators (`>`, `>=`, `<`, `<=`, `==`, `!=`)
    * Logical operators (`&&`, `||`, `!`)
* Loops - `for`, `while`, `do while`

## III. Objectives
### a. 'Arrays' and 'Strings'
For this assignment, we hope to accomplish several things to help reinforce topics in 'arrays' and 'strings':
* Use loops to access and traverse through arrays.
    * Access an array of previous passwords and compare with current/new passwords.
* Use loops to access individual characters within a string variable.
    * Determine whether current/new password is strong by analyzing diversity of individual characters and variable length.
* User operators to compare strings (or characters)
    * Want to verify if new password is similar to previous password(s).
* Reinforce prior knowledge as shared above.

### b. Ethical Considerations

## IV. Resources
* [How long to hack my current password?](https://random-ize.com/how-long-to-hack-pass/?)
* [Have I Been Pwned?](https://haveibeenpwned.com/)
* [Wikipedia - Password cracking](https://en.wikipedia.org/wiki/Password_cracking)
* [(TEDxCMU) Lorrie Faith Cranor: What's wrong with your pa$$word?](https://www.youtube.com/watch?v=0SkdP36wiAU)

## V. Suggested Augmentations
For this assignment, we don't cover every concept but want to leave that up to the discretion of any professor who wishes to use this assignment. Below includes a few of our own augmentation suggestions:
* Integrate I/O concepts with this assignment.
* Implement a new way of checking password strength.
* Make new password not equal to any of the previous passwords instead of most recent password.
* Pursue how to change log-in password from characters to asterisks.
* Menu option to store passwords from multiple programs/sites.
* Implementation to have a specific threshold you would like to have your passwords be (in relation to a `bruteForceChecker()` or `satisfaction_counter`)

## VI. Demo
To demo, either download the .zip folder or run in your Terminal `git clone https://github.com/joshuapaup/AI-ethics-passwords-assignment.git` to a directory of your choice. 

From there, open the 'Passwords Assignment` folder where you will be presented with two folders: 'C++' or 'Python'.

### C++ Version
* Open your Terminal and navigate to the 'C++' folder. 
* You will have two files: `passwords` and `passwords.cpp`
    * `passwords.cpp` is where students will write their code in.
    * `passwords` is a driver file that will execute your code in the Terminal. 
* Run `g++ -std=c++11 passwords.cpp -o passwords` in Terminal to compile.
* Run `./passwords` in Terminal to execute.
* From there, you will be able to interact with the assignment in your Terminal.

### Python Version
* Open Anaconda Navigator (or other software that hosts Jupyter Notebooks) and open select 'Launch' for Jupyter Notebooks.
* Once your `localhost` opens in your browser, navigate to your Python director and open `password_Assignments.ipynb`. 
* From there, run each of the cells above the driver cell at the bottom of the notebook to compile your Python code.
* When you're ready, run the driver cell and you will be able to interact with the assignment.