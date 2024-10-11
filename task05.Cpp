#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    string result = (num%2==0)?"Even":"Odd";
    cout<<"The result is  "<<result<<endl;
}