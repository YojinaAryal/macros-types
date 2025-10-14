#include<iostream>
using namespace std;
#define debug
#ifdef debug
#define log(x) \
cout<<"debug:: "<<x<<endl;
#else 
#define log(x)
#endif 
int main(){
log("PROGRAM STARTED");}