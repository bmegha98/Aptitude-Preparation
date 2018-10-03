/* Time Complexity : O(sqrt(n))
Execution time : 0 sec
*/

/*
Objective : To determine whether a given number is prime or not.
Input     : A Natural number n
Output    : Print Yes for prime number and No for non-prime number.

*/

#include <iostream>
#include <math.h>
using namespace std;

//Function that returns true if number is prime and false otherwise.
bool isPrime(int n)
{
     int flag=0;                        // To check condition
     if(n%2==0)
        return false;
     for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
  if(flag==1)
        return false;
  return true;
}
     
int main()
{
    int number;                         // Number to be checked
    cout<<" Enter the number : ";
    cin>>number;
    if(number<0)                        //Error is generated if invalid number is provided
    {
     cout<<" ERROR!!! Enter natural number .."<<endl;
     exit(0);
     }
   if(isPrime(number))                     //if (isPrime(number)==true)
        cout<<" Number "<<number<<" is prime."<<endl;
   else                                    // if(isPrime(number)==false)
        cout<<" Number "<<number<<" is not prime."<<endl;
  
    return 0;
}
