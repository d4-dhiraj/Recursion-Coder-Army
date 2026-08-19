#include<iostream>
using namespace std;
void print(int n){
    if(n == 1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
void printeven(int n){
    if(n == 2){
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    printeven(n-2);
}
int main(){
    //Print n to 2
    //iterative approach
    int n = 5;
    // for(int i = n; i >0; i--){
    //     cout<<i<<endl;
    // }
    print(n);
    printeven(10);
}