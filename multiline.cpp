#include<iostream>
using namespace std;
#define printsum(a,b)\
cout<<"SUM OF "<<a<<" AND "<<b<<" IS "<<(a+b)<<endl;
int main()
{
    int a,b;
    cout<<"ENTER THE VALUE OF a "<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF b "<<endl;
    cin>>b;
    printsum(a,b);
    return 0;
}
