#include<iostream>
using namespace std;
template<class first,class second>
first sum(first x ,second y)//template of EX number 2
{
return x+y;
}
template<class num1,class num2>//template of EX number 2
num1 bigger(num1 a,num2 b)
{
return(a<b)? b:a;
}
int main()
{
    int w=0;double z=0;
    cout<<"Enter 2 numbers"<<endl;cin>>w>>z;
    cout<<w<<" + "<<z<<" = "<<sum(w,z)<<"\nPRINTED INTEGR & IGNORDE FRACTION PART OG DOUBLE NUMBER ->SOULUTION IS IN BELOW\n"<<endl;// it will return int sum so--------->HOW I CAN PRINT THE SUM DOUBLE
    //SOLUTION 1
    //it will return double sum
    cout<<z<<" + "<<w<<" = "<<sum(z,w)<<"\nPRINTED DOUBLE BY EXCHANGE PARAMETERS OF FUNCTOIN\n"<<endl;
    //but u have to input the first number double------>HOW CAN I SEND ANY NUMBER AND PRINT DOUBLE
    //SOUTION 2 {PREFERED}
    cout<<w<<" + "<<" = "<<sum<double>(w,z)<<"\nBY USING sum<double> & with all freedom to excange between parameters of finctoin\n"<<endl;
    ///////////////ANOTHER EX DEPENDS ON function<dataTypeOne ,dataTypeTwo>\\\\\\\\\\\\\\\\\\\\\//
    cout<<"\n\n//////////////////ANOTHER EX\\\\\\\\\\\\\\\\\\\n\n";
    double j=0;double k=0;
    cout<<"Enter 2 numbers to check the bigger one\n";cin>>j>>k;
    cout<<"THE BIGGER ONE IS = "<<bigger<int,double>(j,k)<<endl;//it will print integer
    return 0;
}