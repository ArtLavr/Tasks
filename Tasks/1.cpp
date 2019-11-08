#include <iostream>
using namespace std;
 int main()
  {
    int i,n;
    cout << "vvedite chislo"<< endl;
    cin>>n;
    int x1=2;
    do
      {
         for (i=2; i<=x1; i++)
         if (!(x1 % i))
         break;
         if (i==x1)
         cout<< x1 <<endl;
         x1++;
    } while (x1<=n);
}