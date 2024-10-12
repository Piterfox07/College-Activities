// Some of the texts were translated with Google Translate from Brazilian Portuguese to English.

#include <iostream>
using namespace std;

int main() {
    
    int exercises;

    cout << "What's the exercise number that you want to use: ";
    cin >> exercises;

    switch (exercises) {

    case 1: {
        // Write a program that asks the user for an integer and displays it on the screen.
        // If the number is negative, before being displayed, it must be transformed into the positive equivalent.
        
        int intNumber1;

        cout << "Enter an integer: ";
        cin >> intNumber1;

        if (intNumber1 >= 0) {
            cout << intNumber1;
        } else {
            cout << intNumber1 * -1;
        }
        break;
    }
    
    case 2: {
        // Write a program that prompts the user for an integer value and displays a message stating
        // whether the number is even or odd. Outputs:
        // User prompt = "Enter an integer:";
        // If true = “The number is even.”;
        // If false = “The number is odd.”.

        int intNumber2;

        cout << "Enter an integer: ";
        cin >> intNumber2;

        if (intNumber2 % 2 == 0) {
            cout << "The number is even.";
        } else { 
            cout << "The number is odd.";
        }
        break;
    }

    case 3: {
        // Write a program that asks the user for a letter and checks if it is a vowel or not,
        // displaying a corresponding message. Outputs:
        // User prompt = "Enter a letter:";
        // If true = “It is a vowel.”;
        // If false = “It is not a vowel.”.

        char letter;

        cout << "Enter a letter: ";
        cin >> letter;
        
        if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || 
            letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || 
            letter == 'U' || letter == 'u') {
            cout << "It is a vowel.";
        } else {
            cout << "It is not a vowel.";
        }
        break;
    }

    case 4: {
        // Write a program that asks for a person's date of birth and current date and displays the
        // age of this person in years (The date must be stored in 3 integer variables for year,
        // month and day).

        int CDay, CMonth, CYear;
        int BDay, BMonth, BYear;

        cout << "Enter your date of birth (DD MM YYYY): ";
        cin >> BDay >> BMonth >> BYear;

        cout << "Enter the current date (DD MM YYYY): ";
        cin >> CDay >> CMonth >> CYear;

        if (BMonth < CMonth || (BMonth == CMonth && BDay <= CDay)) {
            cout << "You are " << CYear - BYear << " years old.";
        } else {
            cout << "You are " << CYear - BYear - 1 << " years old.";
        }
        break;
    }

    case 5: {
        // Write a program that prompts the user for two integers. The first is the value of
        // hours and the second of minutes. Check if the time is valid and display a message
        // corresponding (consider the time 24:00 as invalid). Outputs:
        // Request for hours = "Enter a number for the hours: ";
        // Request for minutes = "Enter a number for minutes:";
        // If true = “The time is valid.”;
        // If false = ”The time is invalid.”.

        int hours;
        int minutes;

        cout << "Enter a number for the hours: ";
        cin >> hours;

        cout << "Enter a number for minutes: ";
        cin >> minutes;

        if ((hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60)) {
            cout << "The time is valid.";
        } else {
            cout << "The time is invalid.";
        }
        break;
    }

    case 6: {
        // Write a program that displays the largest of two real numbers entered by the user. 
        // If they are the same, display a corresponding message. Outputs:
        // User prompt = "Enter two real numbers:";
        // If they are equal = “They are equal.”.
        // If they are different, only display the desired number.

        float realNumber1, realNumber2;

        cout << "Enter two real numbers: ";
        cin >> realNumber1 >> realNumber2;

        if (realNumber1 > realNumber2) {
            cout << realNumber1;
        } else if (realNumber1 < realNumber2) {
            cout << realNumber2;
        } else { 
            cout << "They are equal.";
        }
        break;
    }

    case 7: {
        // Write a program that asks the user for three real numbers and displays only the smallest one.
        
        float realNumber3, realNumber4, realNumber5;

        cout << "Enter three real numbers: ";
        cin >> realNumber3 >> realNumber4 >> realNumber5;

        if (realNumber3 <= realNumber4 && realNumber3 <= realNumber5) {
            cout << realNumber3;
        } else if (realNumber4 <= realNumber3 && realNumber4 <= realNumber5) {
            cout << realNumber4;
        } else {
            cout << realNumber5;
        }
        break;
    }

    case 8: {
        // Write a program that asks the user for their name and grades for three tests. 
        // Calculate the average arithmetic and inform whether the student passed or failed (the student 
        // is considered approved with an average equal to or greater than 6). Outputs:
        // User prompt = "Enter your three grades:";
        // If a score greater than 6 = “You are approved.”;
        // If a score lower than 6 = ”You failed.”.

        float grade1, grade2, grade3;

        cout << "Enter your three grades: ";
        cin >> grade1 >> grade2 >> grade3;

        float average = (grade1 + grade2 + grade3) / 3;

        if (average >= 6) {
            cout << "You are approved.";
        } else {
            cout << "You failed.";
        }
        break;
    }

    case 9: {
        // Write a program that prompts the user for three values corresponding to the sides of a triangle.
        // State whether the triangle is equilateral (has 3 equal sides), isosceles (has two equal sides) 
        // or scalene (does not have equal sides). Outputs:
        // Request to user = "Enter three integers: ";
        // If equilateral = “The triangle is equilateral.”;
        // If isosceles = ”The triangle is isosceles.”;
        // If scalene = “The triangle is scalene.”.

        int intNumber3, intNumber4, intNumber5;

        cout << "Enter three integers: ";
        cin >> intNumber3 >> intNumber4 >> intNumber5;

        if (intNumber3 == intNumber4 && intNumber4 == intNumber5) {
            cout << "The triangle is equilateral.";
        } else if (intNumber3 == intNumber4 || intNumber3 == intNumber5 || intNumber4 == intNumber5) {
            cout << "The triangle is isosceles.";
        } else {
            cout << "The triangle is scalene.";
        }
        break;
    }
    
    default:
        cout << "There is no exercise that matches this number.";
    }
    return 0;
}
