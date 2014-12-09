#include <iostream>
#include"cmath"
using namespace std;
const double gold = (sqrt(5.0) + 1)/ 2;
                              

int main()
{
    int a;
    int b;
    
    while (cin >> a >> b)
    {
        if (a > b)
        {
            swap(a,b);
        }
        double k = b - a;
        int bk = k * gold + k;
        if (bk == b)
        {
            
            cout << 0 << endl;
        }
        else
            cout << 1 << endl;
    }

    return 0;
}