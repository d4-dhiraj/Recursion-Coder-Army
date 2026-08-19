#include<iostream>
using namespace std;

void print1tonEven(int n){
    if(n == 0) return;
    print1tonEven(n-1);
    if(n % 2 == 0){
        cout<<n<<" ";
    }
}

void print1tonEven2(int num, int n){
    if(num == n) return;
    if(num % 2 == 0){
        cout<<num<<" ";
    }
    print1tonEven2(num+1,n);
}

int main(){
    //iterative approach
    int n = 15;
    // for(int i = 1; i < n; i++){
    //     if(i % 2 == 0){
    //         cout<<i<<" ";
    //     }
    // }
    //recursive approach
    // print1tonEven(n);
    cout<<endl;
    //2nd approach
    print1tonEven2(1, n);
}