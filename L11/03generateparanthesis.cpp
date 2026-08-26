#include<iostream>
#include<vector>
using namespace std;

void generateparanthesis(int n, int left, int right, vector<string>&ans, string &temp){
    if(left + right == 2 * n){
        ans.push_back(temp);
        return;
    }
    if(left < n){
        temp.push_back('(');
        generateparanthesis(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    if(right < left){
        temp.push_back(')');

        generateparanthesis(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

int main(){
    int n = 3;
    int left = 0;
    int right = 0;
    vector<string>ans;
    string temp ="";
    generateparanthesis(n, left, right, ans, temp);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}