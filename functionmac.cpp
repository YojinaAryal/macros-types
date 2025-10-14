#include<iostream>
using namespace std;
#define square(x) ((x)*(x))
#define greater(a,b)(a>b?a:b)
int main()
{
    int a,b;
    cout<<"ENTER THE VALUE OF FIRST NUMBER "<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF SECOND NUMBER"<<endl;
    cin>>b;
    cout<<"GREATER AMONG FIRST AND SECOND is "<<greater(a,b)<<endl;
    int result= square(a+b);

    cout<<"SQUARE OF FIRST + SECOND NUMBER IS  "<<result<<endl;
    return 0;

}