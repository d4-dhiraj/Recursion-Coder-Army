#include<iostream>
#include<vector>
using namespace std;

void subStr(string &str, int index, int n, vector<string>&ans, string &temp){
    if(index == n){
        ans.push_back(temp);
        return;
    }
    //exclude
    subStr(str,index + 1, n, ans, temp);

    //include
    temp.push_back(str[index]);
    subStr(str, index + 1, n, ans, temp);

    temp.pop_back();
}

int main(){
    string str = "abc";
    string temp = "";
    vector<string>ans;
    int index = 0;
    int n = str.length();
    subStr(str,index,n,ans, temp);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}