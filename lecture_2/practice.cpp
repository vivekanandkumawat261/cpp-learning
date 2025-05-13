// ✅ Day 1 Practice Problems (Fundamentals)
// 💻 1. Simple Calculator
// Write a program that:

// Asks the user for two numbers.

// Performs addition, subtraction, multiplication, and division.

// Displays the result of each operation.


// #include <iostream>
// using namespace std;

// int main() {
//     double a;
//     double  b;
//     cout << "enter first number :" << endl;
//     cin >> a;
//     cout << "enter second number :" << endl;
//     cin >> b;
    
//     cout << "addition of two number is " << (a+b) << endl;
//     cout << "addition of two number is " << (a-b) << endl;
//     cout << "addition of two number is " << (a*b) << endl;
//     cout << "addition of two number is " << (a/b) << endl;

//     return 0;
// }


// 2. Area & Perimeter
// Ask the user for the length and width of a rectangle, then:

// Calculate and print the area and perimeter.


// #include <iostream>
// using namespace std;

// int main() {
//     double a;
//     double b;
//     cout << "enter the length :" << endl;
//     cin >> a;
//     cout << "enter the width :" << endl;
//     cin >> b;
    
//     double area = a * b;
//     double perimeter = 2 * (a+b);
//     cout << "Area of rectangle is " << area << endl;
//     cout << "Perimeter of rectangle is " << perimeter << endl;

     

//     return 0;

// }




// 💻 3. Swap Two Numbers
// Write a program that:

// Takes two numbers from the user.

// Swaps them using a third variable (and optionally, without a third variable too).
// #include <iostream>
// using namespace std;

// int main() {
//     double a;
//     double b;
//     cout << "enter value of a: "<<endl;
//     cin >> a;
//     cout << "enter value of b: " << endl;
//     cin >> b;
//     cout << "value of a is " << a << "\nvalue of b is " << b << endl;
//     double c = a;
//     a = b;
//     b = c;
//     cout << "after swap value of a is " << a << "\nafter swap value of b is " << b << endl;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout << "after swap value of a is " << a << "\nafter swap value of b is " << b << endl;


//     return 0;
// }


// 4. Character Information
// Ask the user to input a character, then:

// Print its ASCII value.

// #include <iostream>
// using namespace std;

// int main() {
//     char a;
//     cout << "enter the character : " << endl;
//     cin >> a;
//     cout << "ASCII value is " << int(a) << endl;
//     return 0;
// }

// 💻 5. Type Size Viewer
// Create a program that displays the memory size (in bytes) of:

// int, float, double, char, bool

#include <iostream>
using namespace std;

int main(){
     a;
    cout << "enter any size of variable : " << endl;
    cin >> a;
    cout << "size of variable is " << sizeof(a) << endl;
    return 0;

}