#include<iostream>
using namespace std;

void print1ton(int num, int n){
    if(num > n) return;
    cout<<num<<endl;
    print1ton(num + 1, n);
}
void print1ton2(int n){
    if(n < 1){
        return;
    }
    print1ton2(n-1);
    cout<<n<<endl;
}
int main(){

    int n = 10;

    //iterative approach
    // for(int i = 1; i <= n; i++){
    //     cout<<i<<endl;
    // }

    //recursive approach
    // print1ton(1,n);

    //2nd recursive approach
    print1ton2(n);
}