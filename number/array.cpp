#include <iostream>
using namespace std;

int main() {
    int arr[]={1,1,2,4,2,4,5,3,5,7},l;
    l=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<l;i++){
        int count=0;
        for(int j=0;j<l;j++){
            if(arr[i]==arr[j]){
                count+=1;
                // break;
            }
        }
        if(count==1) {
            cout<<arr[i];
            return 0;
        }
    }

    return 0;
}