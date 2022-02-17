/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Gerardo Espinoza
//In class assignment feb 16,2022

#include <iostream>

using namespace std;

int main()
{
    int dayOftheWeek;
    
    cout<<"Enter a number 1-7 for the day of the week: ";
    cin>>dayOftheWeek;
    
    switch (dayOftheWeek)
    {
        case 1: cout<<"Weekday";
                break;
        case 2: cout<<"Weekday";
                break;
        case 3: cout<<"Weekday";
                break;
        case 4: cout<<"Weekday";
                break;
        case 5: cout<<"Weekday";
                break;
        case 6: cout<<"Weekend";
                break;
        case 7: cout<<"Weekend";
                break;
        default: cout<<"You Entered a number that isn't 1-7!";
        
    }

    return 0;
}
