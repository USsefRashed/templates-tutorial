#include<iostream>
using namespace std;
template<class T>
class A_char
{
public:
A_char(T x)
{cout<<x<<"  is not character\n";}
};
template<>class A_char<char>{
public:
A_char(char x){cout<<x<<"   is a character"<<endl;}
};
int main()
{
    A_char<int>ob1(15);
    A_char<char>ob2('h');
}