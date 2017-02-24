/*computes a factorial of an integer using recursion*/
#include<iostream>
#include<cstdlib>
using namespace std;
using std::cout;
using std::cerr;

int my_factorial(int itr){
if(itr==0)
return 1;
else
return itr*my_factorial(itr-1);
}

int main(){
int n;
cout<<"please enter n"<<"\n";
cin>>n;
if(n<0)
cerr<<"Must be a positive integere"<<"\n";
else
cout<<"factorial of "<<n<<"	is: "<<my_factorial(n)<<"\n";
return 0;
}
