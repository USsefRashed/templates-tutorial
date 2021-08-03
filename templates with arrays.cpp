#include<iostream>
using namespace std;
template<class type,class btype>
int find(type * array,type value,btype size)
{
    for(int i=0;i<=size;i++)
    {
       if(array[i]==value)return i;
    }
    return -1;
}
int main()
{
char arrch[]={1,2,8,9,7,5};char ch=7; 
int arrin[]={1,2,8,9,7,5};int in=1;
double arrdo[]={1,2,8,9,7,5};double Do=200;
long arrlo[]={1,2,8,9,7,5};long lo=9;
cout<<ch<<" position is in arrch[] ="<<find(arrch,ch,6)<<endl;
cout<<in<<" position is in arrch[] ="<<find(arrin,in,5)<<endl;
cout<<Do<<" position is in arrch[] ="<<find(arrdo,Do,5)<<endl;
cout<<lo<<" position is in arrch[] ="<<find(arrlo,lo,5)<<endl;
}