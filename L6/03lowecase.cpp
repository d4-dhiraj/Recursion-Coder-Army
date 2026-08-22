#include <iostream>
#include <algorithm>

using namespace std;
void lowerCase(string &str, int index)
{
    if (index < 0){
        cout << str;
        return;
    }
    if(str[index] >= 'A' && str[index] <= 'Z'){
        str[index] = str[index]-'A'+'a';
        lowerCase(str, index - 1);
    }else{
        lowerCase(str, index - 1);
    }
    
}
int main()
{
    string str = "Akash";
    int index = str.length() - 1;
    lowerCase(str, index);

}