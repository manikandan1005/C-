#include <iostream>
using namespace std;

void rightStar(int l){
   // char n='*',j='';
    string str="";
    
    for(int i=0;i<l;i++){
        // for(int j=0;j<l;j++){ }
        str+="*";
        cout<<str<<endl;
    }

}
void leftStar(int l){
    for(int i=0;i<=l;i++){
        for(int j=i;j<l;j++){
            cout<<"*";
        }
        cout<<" "<<endl;
    }
}
void newstr(){
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            cout<<"*";
        }
        cout<<" *\n";
    }
}

int main(){
    int count;
    // cout<<"Enter the count \n";
    // cin>>count;
    // rightStar(5);
    // leftStar(5);
    newstr();
    return 0;
}