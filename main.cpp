#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   srand (time (NULL));
   int a[7]={1,2,3,4,5,6,7};
   int b[7];
   int c[7];
   cout<<"Vvedite elementi massiva";
   for(int i=0;i<7;i++)
   cin>>b[i];
   for(int i=0;i<7;i++){
   c[i]= rand ()% 56;}
   cout<<"massiv a { ";
   for(int i=0;i<7;i++){
   cout<<a[i]<<", ";}
   cout<<"}";
   cout<<"\n";
   cout<<"massiv b { ";
   for(int i=0;i<7;i++){
   cout<<b[i]<<",";}
   cout<<"}";
   cout<<"\n";
   cout<<"massiv c { ";
   for(int i=0;i<7;i++){
   cout<<c[i]<<",";}
   cout<<"}";


}
