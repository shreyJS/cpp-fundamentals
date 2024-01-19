#include <iostream> // library responsible for input-output tasks
using namespace std;

int main (){
    // 00 : SYNTAX
    /* cout is used to print text and << is insertion operator
    endl is manipulator in ostream used to endline, as cout doesn't insert new line at the end of o/p 
    another way to add newline is escape sequence (backslash n). 
    More escape sequences are (backslash t: for tab (2 spaces) ), (backslash backslash : for backslash ), (backslash double quote: to add double quotes)
    return stmt ends the main function */

    // 01 : DATA TYPES
    /* types: int, double (upto 15 decimal digits), float (upto 6-7 decimal digits), char, string, bool
    identifiers are variable names
    variable declaration is creating a variable ( data type with identifier ) with/without assigning value.
    variable initialisation is assigning initial value to a variable, values can be overrriden
    */

    // char initial = 'v'; // 1 byte
    // bool isBatter = true; // 1 byte
    // int jerseyNumber = 18; // 4 bytes
    // double avg = 95.62; // 8 double
    // float strRate = 211.45; // 4 bytes
    // string str = "virat"; // 32 bytes

    // check size of data type using sizeof() operator which can work with type, object and expression.
    // cout << jerseyNumber << " : " << sizeof(jerseyNumber) << endl;

    // one value can be given to multiple variables and multiple variables of same data type can be declared in single line.
    // string vk, ms, rs;
    // vk = ms = rs = "cricketer";
    // cout << vk << " : " <<ms  << " : " <<rs << endl;
    
    // int a = 10, b = 20, c = 30;
    // cout << a << " : " << b << " : " << c << endl;
    
    // constants can be declared using const keyword and must be initialised with a value immediately.
    // const float PI = 3.141;
    // cout << PI << endl;


    // 02 : IO
    /* cin : used to take user input from keyboard using >> extraction operator.
    cin extracts value and stores in provided variable.
    
    cin used with int : gives 0 for any string, spl symbols, bool and integral part for double.
    cin used with string : gives string for anything
    cin used with char : gives first character be it number, spl symbols or string.
    cin used with double, float : gives 0 for any string, spl symbols and gives complete number value along with decimals
    cout : used to output/print values to the screen using << insertion operator.
    */

   float var;
   cin >> var;
   cout << "You entered int: " << var << endl;
    /* Todo:
    1. Learn more about header files and working
    2. Manipulators in C++ and working
    3. Namespace and working of line (2) */
    
    return 0;
}