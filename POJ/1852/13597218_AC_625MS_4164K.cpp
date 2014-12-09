#include<iostream>
using namespace std;

const int maxn = 1000000;
inline int maxv(int a,int b)
{
    return a>b? a:b;
}

inline int minv(int a,int b)
{
    return a<b? a:b;
}
int main(int argc , const char * argv[])
{

    int time,n,length,a[maxn];
    int *minT = new int[maxn];
    int *maxT = new int[maxn];
    cin>>time;
    for (int j =0; j<time; j++)
    {
        cin>>length>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         minT[j] = 0;
        for (int i =0; i < n; i++)
        {
            minT[j] = maxv(minT[j], minv(a[i], length-a[i]));
        }
         maxT[j] = 0;
        for (int i = 0; i < n; i++)
        {
            maxT[j] = maxv(maxT[j], maxv(a[i], length-a[i]));
        }
    }
    for (int j = 0; j < time; j++)
    {
        cout<<minT[j]<<" "<<maxT[j]<<endl;
    }
    
    delete []minT;
    delete []maxT;
    return 0;
}