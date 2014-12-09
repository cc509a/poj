#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m,k;
    cin>>m>>n;
    char arg[100][50];
    int  dna[100] = {0};
    int flag[100] = {0};
   for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>arg[i][j];
        }
    
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            for(int k = j+1;k < m; ++k)
                if(arg[i][j] > arg[i][k])
                {
                    dna[i]++;
                }
        }
    }
       for(int i = 0;i < n; ++i)
    {
        int min = 9999;
        
        for(int j = 0; j < n;++j)
        {
            if((min > dna[j]) && (flag[j] == 0) )
            {
                min = dna [j];
                k=j;
            }
        }
        flag[k] = 1;
        for (int j = 0; j < m; ++j)
        {
            cout<< arg[k][j];
        }
        cout<<endl;
    }

    return 0;
}