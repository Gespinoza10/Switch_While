/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char answer;
    do {
        
    
        cout<<"Would you like to play? Press Y or y if yes, press N or n if not: ";
        cin>>answer;
    
        if (answer == 'Y' || answer=='y'){
            cout<<"You choose to play";
            break;
        }
        else if  (answer== 'N' || answer =='n'){
            cout<<"Goodbye";
            break;
            
        }
    } while (true);
    
    
    return 0;
}