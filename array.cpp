#include <iostream>
#include <string>
using namespace std;

void arr(int num[],int length){
    cout<<"hello"<<endl;
    cout<<"length of the array "<<length<<endl<<"array elements: ";
    // int count=0;
    for(int i=0;i<length;i++){
        cout<<num[i]<<"\t";
    }
    // for(i<length)
    for(int i=0;i<length;i++){
        int count=0;
        for(int j=0;j<length;j++){
            if(num[i]==num[j])
            count++;
        }
        if(count==1){
            cout<<"\n"<<"Not duplicate number: "<<num[i]<<endl;
            break;
        }
    }
}

int main(){
    int newDt[]={2,2,4,1,4,5,6,6,4,7};
    int size=sizeof(newDt)/sizeof(newDt[0]);
    arr(newDt,size);
    //cout<<"Hello "<<endl;
    return 0;
}