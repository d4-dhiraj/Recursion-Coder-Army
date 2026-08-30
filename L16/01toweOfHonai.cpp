#include<iostream>
#include<math.h>
using namespace std;


    void towerOfHonai(int n, int from, int help, int to){
        //base case
        if(n == 1){
            cout<<"move disc "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
            return;               
        }
        towerOfHonai(n-1, from, to, help);
        cout << "move disc " << n << " from rod " << from << " to rod " << to<<endl;
        towerOfHonai(n-1,help, from, to);
    }

int main(){

    int n = 3;
    int from = 1, help = 2, to = 3;

    if(n == 0){
        cout<<0;
    }
    else{
        cout<<pow(2,n) -1<<endl;
        towerOfHonai(n, from, help, to);
    }
}