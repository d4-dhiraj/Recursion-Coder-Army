#include<iostream>
using namespace std;

int sumn(int n, int sum){
    if(n == 0)return sum;
    sum += n;
    return sumn(n-1, sum);
}

int sumn2(int n){
    if(n == 1) return 1;
    return n + sumn2(n-1);
}
int main(){
    int n = 5;
    cout<<sumn(n,0)<<endl;
    cout<<sumn2(n);
}