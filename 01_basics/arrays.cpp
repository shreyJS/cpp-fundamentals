#include<iostream>
using namespace std;
int main(){
    //07: Arrays
    // array size is optional c++ compiler automatically calculates it, best practice is to specify explicitly
    // declaring array without elements is allowed. you can add them later.
    // traverse using for-each(C++ version 11 and up) or for loop
    
    // for-each loop
    // string arr[3] = {"vk","rs","kl"};
    // for(string s : arr){
    //     cout << s << endl;
    // }

    // omit array size on declaration
    // To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
    // string arr[] = {"vk","rs","kl"};
    // for(int i=0; i< sizeof(arr)/sizeof(string); i++){
    //     cout << arr[i];
    // }
    // omit elements on declaration
    // string cars[3];
    // cars[0]="audi";
    // cars[1]="bmw";
    // cout << "1" << cars[0] << endl;
    // cout << "2" << cars[2] << endl; // prints nothing as nothing is added

    // Multi-Dimensional Array
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    cout << letters[0][2] << endl; 
    letters[0][2] = "X"; 
    cout << letters[0][2] << endl;

    // use same number of for loops as number of dimensions to completely loop over array. Loop from first element to last element everytime. 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    } 
    return 0;
}