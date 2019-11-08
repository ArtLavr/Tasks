#include <iostream>
using namespace std;
int main()
  {
    int n=0;
    cout << "vvedite chislo"<< endl;
    cin>>n;
    int i;
    int Fib1=1;
    int Fib2=1;
    int Fib3;
    cout<<"1"<<endl;
    cout<<"1"<<endl;
    do
      { 
        Fib3=Fib1 + Fib2;
        cout<<Fib3<<endl;
        Fib1=Fib2;
        Fib2=Fib3;
    } while (Fib3<=n);
}