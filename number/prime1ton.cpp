#include <iostream>
using namespace std;

void prim(int num){
    cout<<"This is for print prim 1 to n "<<endl;

    for(int i =2; i<=num;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                //  cout<<i<<"\t";
                count++;
                 break;
            }
        }
        if(count==0) cout<<i<<"\t";
    }

}

int main(){

    int num;
    cout<<"Enter the range: "<<endl;
    //cin>>num;
    prim(8);
    return 0;
}