#include<iostream>
using namespace std;

int findgcd(int a, int b)
{
    if(b==0)
     return a;
    return findgcd(b,a%b);
}

int findlcm(int a,int b)
{
    return (a*b)/findgcd(a,b);
}
int main()
{
    int num1 ,num2 ;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    int gcd = findgcd(num1,num2);
    int lcm = findlcm(num1,num2);

    cout<<"GCD is : "<<gcd<<endl;
    cout<<"LCM is : "<<lcm<<endl;

    return 0;
}