#include<iostream>
using namespace std;
void table(int n, int index){
    if(index >10)return;
    cout<<n<<" X "<<index<<" = "<<n*index<<endl;
    table(n,index+1);
}
int main(){
    int n;
    cin>>n;
    table(n,1);
}