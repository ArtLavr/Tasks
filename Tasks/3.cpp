#include <iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,k1,k2,b1,b2;
    cout <<"Vvedite koorditi tochek otrezkov"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if (x1>x2)
    {
        b1=x1;
        x1=x2;
        x2=x3;
    }
    if (x3>x4)
    {
        b2=x3;
        x3=x4;
        x4=b2;
    }
    if (y1==y2)
    k1=0;
    else if (x1=x2)
        k1=0;
    else
    {
        k1=(y2-y1)/(x2-x1);   
    }
    if (y3==y4)
    k2=0;
    else if (x1=x2)
        k2=0;
    else
    {
        k2=(y4-y3)/(x4-x3);
    }
    if ((k1==k2) && (x1==x2) && (y3==y4))
    {
    cout<<"Peresikayutsya"<<endl;
    return 0;}
    else if ((k1==k2) && (x3==x4) &&(y1==y2))
    {
    cout<<"Peresikayutsya"<<endl;
    return 0;
    }
    else if (k1==k2) 
        cout<<"Parallelni";
     else
     {
       if ((x1<=x4) && (x4<=x2)) 
       cout<<"Peresikayutsya";
       if ((x1<=x3) && (x3<=x2))
       cout<<"Peresikayutsya";
     }
}
