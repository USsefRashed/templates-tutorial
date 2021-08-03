#include<iostream>
using namespace std;
template<class type>
class numbers
    {
    private:
    type first,second;
    public:
    numbers(type a,type b)
    {
        first=a;
        second=b;
    }
    type max();
    };
template<class type>
type numbers<type>::max()
{
return (first>second? first:second);
}
int main()
{
    numbers <int> ob(10,12);cout<<ob.max();
}
