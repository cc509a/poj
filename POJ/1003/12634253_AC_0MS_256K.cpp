#include<iostream>
using namespace std;
int   main()
{
  double m;
  while (cin>>m&&m>0.0)
 {
   int  n=0;
   double c=0.0;
  while(c<m)
 {
   ++n;
   c+=1.0/(n+1);
 }
cout<<n<<" card(s)"<<endl;
 }

}