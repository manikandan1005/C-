#include <iostream>
#include <string>
using namespace std;


void fun(string world){
    cout<<"print the string "<<world<<endl;
    for(int i=0;i<world.length();i++){
        cout<<world[i]<<endl;
    }
}
main(){

    string str;
    cout<<"Enter the string : "<<endl;
    cin>>str;
    fun(str);
    return 0;
}