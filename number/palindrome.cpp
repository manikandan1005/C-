#include <iostream>
using namespace std;

void palindrome(int n){

    cout<<"Check the number is palindrome or not \n";
    int result=0,rev,i=1,num=n;
    while(n>0){
        rev=n%10;
        result=10*result+rev;
        n/=10;
    }
    cout<<result<<endl;
    if(num==result) cout<<"this is a palindrome";
    else cout<<"Not a palindrome";

}

int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    if(num<10){
        cout<<"Enter two digite number";
        return 0;
    }
    palindrome(num);
    return 0;
}