#include<iostream>
using namespace std;
void birthday(int n){
    if(n == 0){
        cout<<"Happy Birthday\n";
        return;
    }else{
        cout<<n<<" days left for birthday\n";
        birthday(n-1);
    }
}
int main(){
    int n = 5;

    //using iterative Approach

    // for(int i = n ; i > 0; i--){
    //     cout<<i<<" days left for birthday\n";
    // }
    // cout<<"Happy Birthday\n";

    //Using Recursion
    birthday(n);
}