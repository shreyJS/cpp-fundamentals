// case: wickets = 10 => innings over ; else wicket increase by one, new batsman entered
#include<iostream>
#include<string>
using namespace std;

int main(){
    // unsigned int wicket;
    // cout << "Enter the number of wicket fallen";
    // cin >> wicket;
    
    //06: CONTROL FLOW
    // IF - ELSE IF - ELSE
    // if(wicket == 0){
    //     cout << "Innings started.";
    // }else if(wicket <10){
    //     cout << "New batter entered";
    // }else{
    //     cout << "Innings over.";
    // }

    // TERNARY OPERATOR
    // string result = (wicket==0)? "Innings started": (wicket<10)? "new batter entered" : "Innings over";
    // cout << result;

    // SWITCH CASE
    // int toss;
    // cout << "Enter toss: 1 for heads and 0 for tails";
    // cin >> toss;
    // switch (toss)
    // {
    // case 0:
    //     cout << "Aussies won the toss and elected to field first";
    //     break;
    // case 1:
    //     cout << "Men in Blue chose to bat first";
    //     break;
    // default:
    // cout << "Toss is delayed";
    // }

    // LOOPS
    //1. While loop
    // int ausWickets = 0;
    // while(ausWickets<10){
    //     ausWickets+=1;
    //     cout << "Another blow to Aussies, Bumrah strikes...." << ausWickets << " wicket fell" << endl;
    // }
    // cout << "Aussies all down, another spectacular presentation from Men in Blue";

    //2. Do-while loop
    // int counter = 0;
    // do
    // {
    //     cout << "Counter value : " << counter << endl;
    //     counter++;
    // } while (counter<0);
    
    //3. For loop
    // int counter = 10;
    // int sum = 0;
    // for ( int i = 0; i <= counter; i++)
    // {
    //     sum += i;
    // }
    // cout << "sum: " << sum << endl;

    //4. Nested for loop
    // int size = 3;
    // for (int i = 0; i <= size; i++)
    // {
    //     for (int j = 0; j< i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    //5. For-each loop
    // int players[3] = {1,2,3};
    // for(int i : players){
    //     cout << i << endl;
    // }
    
    //6. Break and continue
    // int counter = 10;
    // for(int i =1; i<= counter; i++){
    //     if(i == 5){
    //         cout<<i<<endl;
    //         break;
    //     }else{
    //         cout<<i<<endl;
    //     }
    // }

    // for(int i =1; i<= counter; i++){
    //     if(i == 5){
    //         cout<<i<<endl;
    //         continue;
    //     }else{
    //         cout<<i<<endl;
    //     }
    // }
    return 0;
}