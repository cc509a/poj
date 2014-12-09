//
//  main.cpp
//  poj
//
//  Created by 李如刚 on 2014/3/17.
//  Copyright (c) 2014年 李如刚. All rights reserved.
//

#include<iostream>
using namespace std;
const int Max =1500;
int  Min( int a2, int a3 ,int a5 )
{
    int min = (a2 < a3) ? a2 : a3;
    min = (a5 < min) ? a5 : min;
    return min;
  
}
int GetUglyNumber( int index)
{
    int *ugly = new int[ Max];
    ugly[ 0 ] = 1;
    int i = 1;
    int *a2 = ugly;
    int *a3 = ugly;
    int *a5 = ugly;
    
    while (i < index) {
        int min = Min( *a2 * 2, *a3 * 3, *a5 *5);
        ugly[i]  = min;
        while ( *a2 * 2 <= ugly[i] ) {
            ++a2;
        }
        while ( *a3 * 3 <= ugly[i] ) {
            ++a3;
        }
        while ( *a5 * 5 <= ugly[i] ) {
            ++a5;
        }
        
        ++i;
    }
    int unm = ugly[ index - 1 ];
    delete[] ugly;
    
       return unm;
}
int main()
{
    int i =0;
    int map [1500];
    while (cin>>map[ i ])
    {
       
        if( map [ i ] == 0 || i> 1500)
            break;
        else
        {
            ++i;
        }
    }
        for(int j = 0; j < i ; j++)
    {
        cout << GetUglyNumber( map[j] ) << endl;
    }
    
    return 0;
}