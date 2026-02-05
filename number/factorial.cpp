#include <iostream>
using namespace std;

int factorial(int num){

    cout<<"Find the factorial of "<<num<<endl;
    int dt=1;
    if(num==0) return 0;
    for(int i = 1;i<=num;i++){
        dt=dt*i;
        cout<<dt<<endl;
    }
    return dt;
    
}

int main(){

    int num,value;
    cout<<"Enter your number: "<<endl;
    cin>>num;
    value=factorial(num);
    cout<<"value is "<<value;
    return 0;
}