#include<iostream>
using namespace std;
int main ()
{
double num[12];
for (int i=0;i<12;i++)
 {
  cin>>num[i];
 }
double  m = 0.0f;
for (int i=0;i<12;i++)
 {
     m+=num[i];
 }
  m = m /12.0;
cout<<"$"<<m;

}