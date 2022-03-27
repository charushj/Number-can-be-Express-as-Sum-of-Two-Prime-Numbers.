#include<iostream>

using namespace std;


bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int t;
    cin>>t;
    while (t--){
        int n,f=0,n1,n2;
        cin>>n;
        for ( int i=1;i<n;i++){
            if(!checkPrime(i)){
                continue;
                }
            for(int j=i+1;j<n;j++){
                if(checkPrime(j)){
                    if(n== i+j){
                        cout<<i<<"+"<<j<<"="<<n<<endl;
                        f=1;
                    }
                }
            }
        }
        if(!f){
            cout<<"No pair found !!"<<endl;
        }
    }
    return 0;
}
