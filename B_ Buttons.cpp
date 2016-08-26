#include<iostream>
using namespace std;
int main(){

    int n;
    while(cin>>n){
    int sum = 0;
        for(int i=1; i<=n; i++){
                for(int j=i;j<n;j++)
                {
                    sum+=i;
                }
                sum+=1;
        }
        cout<<sum<<endl;

    }
}

