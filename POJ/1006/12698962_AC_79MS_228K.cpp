#include<iostream>
using namespace std;


int main()
{
    int p,e,i,d,date;
    int cas = 0;
    while (cin>>p>>e>>i>>d )
    {
        if(p == -1 && e == -1 && i == -1 && d == -1 )
            break;
         date = d;
         ++d;
        while ((d - p) % 23 != 0)
        {
            ++d;
        }
        while ((d - e) % 28 != 0 || (d - i)%33 != 0)
        {
            d += 23;
        }
        cout<<"Case "<<++cas<<": the next triple peak occurs in "<<d - date<<" days."<<endl;
        
    }
    return 0;
    
}