    #include <iostream>
    using namespace std;

    void prime(int num){
        
        for(int i=2;i<num;i++){
            if(num%i==0){
                cout<<"This is not a prime\t"<<endl;
                return ;
            }

        }
        cout<<"This is a prime\t";
        return ;
    }

    int main(){

        int n1;
        cout<<"Enter your number: "<<endl;
        cin>>n1;
        if(n1<=1){
            cout<<"\n this in not a prime";
            return 0;
        }
        prime(n1);
        // return 0;
    }