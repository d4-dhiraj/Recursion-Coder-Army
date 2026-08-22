#include<iostream>
#include<algorithm>

using namespace std;
int countVowel(string str, int index){
    if(index < 0) return 0;
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u'){
        return 1 + countVowel(str, index-1);
    }else{
        return countVowel(str,index - 1);
    }
}
int main(){
    string str = "akash";
    int index = str.length() - 1;
    cout<<countVowel(str,index);
}