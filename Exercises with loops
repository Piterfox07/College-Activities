// Some of the texts were translated with Google Translate from Brazilian Portuguese to English.

#include <iostream>
using namespace std;

int main() {
    
    int exercises;

    cout << "What's the exercise number that you want to use: ";
    cin >> exercises;

    switch (exercises) {

    case 1: {
        // Write a program that displays the message “I won’t cheat on the test” 30 times on the screen
        
        int counter1 = 1;

        while (counter1 <= 30){
            cout << "I won’t cheat on the test." << endl;
            counter1++;
        }
        break;
    }
    
    case 2: {
        // Write a program that displays the multiplication table for the number 5 in the following format: 
        // 5 x 1 = 5; 5 x 2 = 10; 5 x 3 = 15; ... ; 5 x 10 = 50.

        int multiplier1, result1;

        for (multiplier1 = 1, result1 = 0; multiplier1 <= 10; multiplier1++){
            result1 = multiplier1 * 5;
            cout << "5x" << multiplier1 << " = " << result1 << endl;
        }
        break;
    }

    case 3: {
        // Write a program that displays integers from 100 to 1 on the screen.

        int counter2;

        for (counter2 = 100; counter2 >= 1; counter2--){
            cout << counter2 << endl;
        }
        break;
    }

    case 4: {
        // Write a program that displays integers from 50 to 200 on the screen.

        int counter3 = 50;
        
        while (counter3 <= 200){
            cout << counter3 << endl;
            counter3++;
        }
        break;
    }

    case 5: {
        // Write a program that displays the sum of the integers in the range [100, 200]. 
        // Example: sum = 100 + 101 + 102 + ... + 200.

        int number1 = 100, sum1 = 0;
        
        while (number1 <= 200){
            sum1 += number1;
            number1++;
        } cout << sum1 << endl;
        break;
    }

    case 6: {
        // Write a program that asks the user for two positive integer values that will be the base and the exponent. 
        // The program must use a loop to calculate and display the result of the base raised to the exponent (power).

        int number2, number3, result2 = 1;
        
        cout << "Enter two positive integers: " << endl;
        cin >> number2 >> number3;
        
        for (int multiplier2 = 1; multiplier2 <= number3; multiplier2++){
            result2 *= number2;
        } 
        cout << result2 << endl;
        break;
    }

    case 7: {
        // Write a program that prompts the user for an indeterminate number of integers. 
        // The program must calculate and display the arithmetic mean of only the even numbers. 
        // Data entry should terminate when the number 0 (ZERO) is entered.
        
        int number4, result3 = 0, average1 = 0;

        cout << "(The program will terminate when receiving 0)" << endl << "Enter an integer: ";
        
        do {
            cin >> number4;
            
            if (number4 % 2 == 0 and number4 != 0){
                result3 += number4;
                average1++;
            }
        } while (number4 != 0);
        
        int result4 = result3 / average1;
        
        cout << "The arithmetic mean of the even numbers is: " << result4;
        break;
    }

    case 8: {
        // Write a program that asks the user for a positive real number. 
        // Check if the number is really positive, and if not, ask the user to enter it again.
        // Outputs:
        // User prompt = "Enter a positive real number";
        // If valid number = "The number entered is valid";
        // If invalid number = "Invalid number, please try again."

        float number5 = -1;

        cout << "Please enter a positive real number: ";
        
        while (number5 <= 0){
            cin >> number5;
            if (number5 < 0){
                cout << "Invalid number. Please try again: ";
            } else {
                cout << "The number entered is valid.";
            }
        }
        break;
    }

    case 9: {
        // Create a program for a simple calculator that prompts the user for two operands as input,
        // selects one of the options from the list (1- addition, 2- multiplication, 3- division, 4- exponentiation), and displays the result.
        // The algorithm should run repeatedly until the two operands provided are both zero.
        // Use a real variable to display the result.
        
        float number6, number7, result4;
        int operations;

        do {
            cout << "Enter two numbers you want to use for calculations (entering 0 and 0 will exit the program): ";
            cin >> number6 >> number7;

            if (number6 != 0 || number7 != 0) {
                cout << "Enter the number representing the operation you want (1-Addition, 2-Multiplication, 3-Division, 4-Power): ";
                cin >> operations;

                switch (operations) {
                    case 1:
                        result4 = number6 + number7;
                        break;
                    case 2:
                        result4 = number6 * number7;
                        break;
                    case 3:
                        if (number7 != 0) {
                            result4 = number6 / number7;
                        } else {
                            cout << "Error: Division by zero." << endl;
                        }
                        break;
                    case 4:
                        result4 = number6;
                        if (number7 == 0) {
                            result4 = 1;
                        } else {
                            for (int counter4 = 1; counter4 < number7; counter4++) {
                                result4 = number6 * result4;
                            }
                        }
                        break;
                }
                cout << "Result = " << result4 << endl << endl;
            } 
        } while (number6 != 0 || number7 != 0);
    } 
        break;

    case 10: {
        // Create a program that generates and displays the first 20 terms of the Fibonacci series
        
        int number8 = 0, number9 = 1;
    
        cout << "Fibonacci series: " << endl;
        for (int counter5 = 1; counter5 <= 20; counter5++) {
            cout << number8 << endl;
            int next = number8 + number9; 
            number8 = number9; 
            number9 = next;
        }
    }
        break;

    case 11: {
        // Create a program that asks the user for the value of N and calculates the value of S in the series S = 1/1 + 1/2 + 1/3 + ... + 1/N.
        // At the end, display the resulting real number of the series.
        int N;
        float sum2 = 0;
    
        cout << "What is the value of N to calculate the value of S in the series S = 1/1 + 1/2 + 1/3 + ... + 1/N?: ";
        cin >> N;
    
        for (int counter6 = 1; counter6 <= N; ++counter6){
            sum2 += 1.0/counter6;
        }
        cout << sum2;
    }
        break;

    case 12: {
        // Create a program that asks for the ages of 10 people and displays the number of people who are 18 years old or older.
        
        int civil_majority = 0;
    
        cout << "Enter the age of 10 people: ";
    
        for (int counter7 = 1; counter7 <= 10; counter7++){
            int people = 0;
            cin >> people;
            if (people >= 18){
                civil_majority++;
            }
        } 
        cout << "The amount of people with more than 18 years old is: " << civil_majority;
    }
        break;

    case 13: {
        // Create an algorithm that reads a set of 20 integers and indicates, at the end, what the smallest value entered was.
        
        long int lower_number = 0, number10;

        cout << "Enter 20 integers: ";

        cin >> number10;
    
        for (long int counter8 = 1; counter8 < 20; counter8++){
            cin >> lower_number;
            if (lower_number < number10){
                number10 = lower_number;
            }
        } 
        cout << "The lowest number is: " << number10;
    }
        break;

    case 14: {
        // Create a program that asks for the weights of 25 people and displays which is the heaviest and which is the lightest among the entries.
        
        float number11, highest, lowest;

        for(int counter9 = 1; counter9 <= 25; counter9++){
            cout << "Enter the " << counter9 << " weight: ";
            cin >> number11;
            if (counter9 == 1){
                highest = number11;
                lowest = number11;
            }
            if (number11 > highest){
                highest = number11;
            }
            if (number11 < lowest){
                lowest = number11;
            }
        }
        cout << "The highest weight was: " << highest << ", and the lowest weight was: " << lowest;
    }
        break;

    case 15: {
        // Create a program that asks for 20 integer values and displays how many are even and how many are odd.
        
        int number12, even = 0, odd = 0;

        for(int counter10 = 1; counter10 <= 20; counter10++){
            cout << "Enter the " << counter10 << " integer: ";
            cin >> number12;
        
            if (number12 % 2 == 0){
                even++;
            }
            if (number12 % 2 != 0){
                odd++;
            }
        }
        cout << "The amount of even nummbers was: " << even << ", and amount of odd numbers was: " << odd;
    }
        break;

    case 16: {
        // Ask the user to enter an integer, calculate, and display the factorial of that number.
        
        long int number13, factorial;

        cout << "Enter a number: ";
        cin >> number13;

        for(factorial = 1; number13 > 1; number13--){
            factorial = factorial * number13;
        }
        cout << "The factorial of the number entered is: " << factorial;
    }
        break;
    
    default:
        cout << "There is no exercise that matches this number.";
    }
    return 0;
}
