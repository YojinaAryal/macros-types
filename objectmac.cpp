#include<iostream>
using namespace std;
#define PI 3.14
#define max_size 5
int main()
{
    int radius;
    cout<<"Enter the radius of the circle : "<<endl;
    cin>>radius;
    double area = PI*radius*radius;
    cout<<"area of the circle is "<<area;
    int arr[max_size];
    for (int i=0;i<max_size;i++)
    {
        arr[i]=i+1;
        cout<<arr[i]<<endl;
    }
    return 0;
}