#include<iostream>
#include<algorithm>

using namespace std;
bool palindrome(string str,int start, int end){
    if(start >= end) return true;
    if(str[start] == str[end]){
        return palindrome(str, start+1, end-1);
    }
         return false;
    
}
int main(){
    string str = "nayan";
    int size = str.size();
    int start = 0, end = size - 1;
    cout<<palindrome(str,start,end);
}