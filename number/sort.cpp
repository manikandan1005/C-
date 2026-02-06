#include <iostream>
using namespace std;

void sort(int num[],int l){
    for(int i=0;i<l;i++) cout<<num[i]<<' ';
    int temp;


for (int i=0; i<l;i++){
    for(int j=0;j<l;j++){
        if(i<=j) continue;
        
        else{
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }
}
cout<<"after sort \n";

    for(int i=0;i<l;i++) cout<<num[i]<<' ';
   } 


int main(){
    int arr[]={1,3,5,2,7,9,6,7,8,4,10},l;
    l=sizeof(arr)/sizeof(arr[0]);
    sort(arr,l);
    return 0;
}