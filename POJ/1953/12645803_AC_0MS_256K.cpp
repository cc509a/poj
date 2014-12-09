#include<iostream>
using namespace std;
const int Max =45;
 long long GetUglyNumber( int index)
{
    long long fnumOne = 0;
    long long fnumTwo = 1;
    long long fibnum = 0;
    for (unsigned int i = 0 ; i <= index ; ++i )
    {
        fibnum = fnumOne + fnumTwo;
        fnumOne = fnumTwo;
        fnumTwo = fibnum;
    }
    
    return fibnum;
}
int main()
{
    int  i;
    cin >> i;
    int *q =new int [Max];
    for (int a = 0; a < i ; ++a)
    {
        cin >> q[a];
        
    }
   for(int j = 0; j < i ; j++)
    {
        cout << "Scenario #" << j+1 <<":"<< endl <<GetUglyNumber( q[j] ) << endl << endl;
        //cout << q[j];
    }
   
 
    return 0;
}