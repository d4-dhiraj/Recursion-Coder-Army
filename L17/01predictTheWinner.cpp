#include <bits/stdc++.h>

using namespace std;

int winner(vector<bool>&person,int n, int index, int personLeft, int k){
    if(personLeft == 1){
        for(int i = 0; i < person.size();i++){
            if(person[i] == 0){
                return i;
            }
        }
    }
    //find the position where kill
    int kill = (k - 1) % personLeft;
    //go to the index where we have to kill
    while(kill--){
        index = (index+1) % n;
        //if person alredy killed then skip
        while(person[index] == 1){
            index = (index + 1) % n;
        }
    }
    //kill the person
    person[index] = 1;

    //find next person
    while(person[index] == 1){
        index = (index+1)%n;
    }
    //recursive case
    return winner(person,n,index,personLeft - 1, k);

    return 0;

}

int main(){
    int n = 5;
    int k = 3;
    vector<bool>person(n,0);
    cout<<winner(person,n,0,n,k)+1;
}