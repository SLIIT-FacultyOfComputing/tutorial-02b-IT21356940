#include <iostream>
using namespace std;
int main()
{
    int no;
    long fac;

    cout << "enter number :";
    cin >> no ;
    

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

      cout << "factorial of " << no;
      cout << " is :" << fac ;
    
    return 0;
}
