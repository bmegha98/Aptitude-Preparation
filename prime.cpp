/* Time Complexity : O(sqrt(n))
Execution time : 0 sec
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,f=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
  if(f==1)
  cout<<"Number is not prime."<<endl;
  else
  cout<<"Number is prime."<<endl;
    return 0;
}
