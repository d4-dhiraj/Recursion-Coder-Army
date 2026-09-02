#include<bits/stdc++.h>
using namespace std;

bool valid(int i, int j, int n){
    return i >= 0 && j >= 0 && i < n && j < n;
}

void ratInMaze(vector<vector<int>>&maze, vector<vector<bool>>&visited, int i, int j, int n, string temp, vector<string>&ans){
    //base case
    if(i == n-1 && j == n-1){
        ans.push_back(temp);
        return;
    }
    vector<int>rows = {-1, 1, 0, 0};
    vector<int>cols = {0, 0, -1, 1};
    string str = "UDLR";
    visited[i][j] = 1;
    for(int k = 0; k < 4; k++){
        if (valid(i + rows[k], j + cols[k], n) && maze[i + rows[k]][j + cols[k]] && !visited[i + rows[k]][j + cols[k]]){
            temp.push_back(str[k]);
            ratInMaze(maze, visited, i + rows[k], j + cols[k], n, temp, ans);
            temp.pop_back();
        }
    }
    visited[i][j] = 0;

}

int main(){
    vector<vector<int>> maze = {
        {1, 1, 1, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 1, 1, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 1, 1}};

    int n = maze.size();
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    int i = 0, j = 0;
    vector<string>ans;
    string temp;
    ratInMaze(maze, visited, i, j, n, temp, ans);
    for(string s: ans){
        cout<<s<<endl;
    }
}