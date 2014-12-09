#include<iostream>
#include<algorithm>
const int Max = 100;
using namespace std;
int m;

int side;
bool cmp(int a,int b) {return a>b;}

bool dfs(int *length,bool * vist,int bs,int len, int begin)
{
    if (bs == 3)
    {
        return true;
    }
    for (int i = begin; i < m; i++)
    {
        if (vist[i])
            continue;
        vist[i] = true;
        if (len + length[i] < side)
        {
            if(dfs(length, vist, bs, len + length[i], i))
                return true;
        }
        if(length[i] + len == side)
        {
            if (dfs(length, vist,bs+1,0,0))
                return true;
        }
        vist[i] = false;
    }
    return false;
}


int main()
{
    int n;
    cin>>n;
    for (int j = 0; j < n; ++j)
    {
        cin>>m;
        int *length = new int [Max];
        bool *vist = new bool [Max];
        int sum =0;
        for(int i = 0; i < m; ++i)
        {
            cin>>length[i];
            sum += length[i];
            vist[i] = false;
        }
        if (sum % 4 != 0 )
        {
            cout<<"no"<<endl;
            continue;
        }
        side = sum/4;
        sort(length , length + n , cmp);
        if (side < length[0])
        {
            cout<<"no"<<endl;
            continue;
        }
        if (dfs(length, vist,0, 0, 0))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        delete length;
        delete vist;
    }
    return 0;
}