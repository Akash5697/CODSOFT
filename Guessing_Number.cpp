// TASK- 1
// Gussing Number Game
/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include<bits/stdc++.h>
#include<cstdlib> //include <cstdlib> header file to creat random Numbers
using namespace std;
int main(){
    string Name;
    char input;
    int Number;
    cout<<"Enter your Name"<<endl;
    getline(cin,Name);
    /*getline allows accepting and reading single and multiple line 
    strings  from the input stream*/
    cout<<endl;
    cout<<"......................................."<<endl;
    
    do
    {
        srand(time(0)); //Statement used to change the random Number
       char Num= rand()%10+1;// random Number Generation
       cout<<"Enter any number in between range of 1 to 10"<<endl; //Enter the range 
       cin>>Number;
       cout<<endl;
       if(Number < Num) //if user input Number is less than Random Number
       {
        cout<<"The Number is too low"<<endl;//print this statement
       }
       else if( Number> Num) //if user input Number is greater than than Random Number
       {
        cout<<"The Numer is too high"<<endl;//print this statement
       }
       else{
        cout<< Name <<" You guesses the correct Number"<<endl;//print this statement
       }
       cout<<"Would you like to try again press Y or press N"<<endl;//print this statement
       cin>>input;
       cout<<endl;
       
    } while (input!='N');// if user Enter N Game become over
    cout<<"Game End"<<endl;
    
}