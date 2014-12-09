#include<iostream>
using namespace std;

const int Max =100;
int map [ Max ][ Max ];
int value [ Max ][ Max ] = {0};
int r;
int c;


int dp(int i,int j )
{
    int m = 0;
    if (value[ i ][ j ] !=0 )
    return value[ i ][ j ];
   
   if( j > 0 && map[ i ][ j ] > map[ i ][ j - 1]  && m < dp( i , j - 1) )
        m = dp( i , j - 1);

  if( j < c-1 && map[ i ][ j ] > map[ i ][ j + 1] && m < dp( i , j + 1) )
        m = dp( i , j + 1);

  if( i > 0 && map[ i ][ j ] > map[ i-1 ][ j ] && m < dp( i-1 , j ) )
        m = dp( i -1, j );

  if(  i < r- 1 && map[ i ][ j ] > map[ i + 1 ][ j]  && m < dp( i + 1 , j ) )
        m = dp( i + 1 , j );

    value[ i ][ j ] = m+1;

  return value[ i ][ j ];

}


int main()
{
int max=0;
   cin>>r>>c;
/*while(r <= 1 || r >= 100 || c <= 1 || c >= 100 )  
{
 cin>>r>>c;
}
*/
    for(int i=0; i < r; i++)
     for(int j=0; j<c;j++)
      cin>>map[ i ][ j ];

  for(int i=0; i < r; i++)
    for(int j=0; j<c;j++)
      dp( i , j );
    
  
   for(int i=0; i < r; i++)
    for(int j=0; j<c ; j++)
     if(max < value[ i ][ j ])
         max = value[ i ][ j ]; 
    
cout<< max <<endl;
return 0;

}