#include<iostream>
#include<algorithm>
const int Max = 64;
using namespace std;
int n;
bool cmp(int a,int b) {return a>b;}

bool dfs(int *length ,bool *vist, int len, int mlen, int start, int num)
{
    if (num == n)
    {
        return true;
    }
    int sample=-1;
    for(int i = start; i < n; ++i)
    {
        if(vist[i] || length [i] == sample )
            continue;
        vist[i] = true;
        if(len +length[i] < mlen)
        {
            if (dfs(length,vist,len + length[i], mlen, i, num+1))
            {
                return true;
            }
            else
                sample = length[i];
        }
        else if(len + length[i] == mlen)
        {
            if(dfs(length,vist,0, mlen, 0, num+1))
                return true;
            else
                sample  = length[i];
        }
        vist [i] = false;
        if (len == 0)
        {
            break;
        }
    }
    return false;
    
}



int main()
{
    while (cin>>n && n != 0)
    {
        int *length = new int [Max];
        bool *vist = new bool [Max];
        int max = 0;
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            cin>>length[i];
            sum += length[i];
            vist[i] = false;
            if(max < length[i])
            {
                max = length[i];
            }
        }
        sort(length , length + n , cmp);
        max = length[0];
        bool f = false;
        for (int mlen = max; mlen <= sum - mlen; mlen ++)
        {
            if(!(sum % mlen) && dfs(length,vist,0, mlen, 0, 0))
            {
                cout<<mlen<<endl;
                f = true;
                break;
            }
        }
        if(!f)
            cout<<sum<<endl;
        delete length;
        delete vist;
    }
    
    return 0;
}