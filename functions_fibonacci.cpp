#include<iostream>
using namespace std;

void fib(int n){

    int term1=0;
    int term2=1;
    int nexterm;

    for(int i=1; i<=n; i++){

        cout<<term1<<endl;
        nexterm=term1+term2;
        term1=term2;
        term2=nexterm;

    }
    return;
}

int main(){

    int n;
    cin>>n;

    fib(n);
    return 0;
    



}