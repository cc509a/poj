#include<iostream>
using namespace std;
const double pi = 3.141592653;
int main()
{
    int num;
    cin>> num;
    double x,y;
    for (int i = 0; i<num; i++)
    {
        cin>>x>>y;
        double are = pi*(x*x+y*y);
        int year = (int)(are/100+1);
        cout<<"Property "<<i+1<<": This property will begin eroding in year "<<year<<'.'<<endl;
    }
 cout<<"END OF OUTPUT."<<endl;
    return 0;
   
}