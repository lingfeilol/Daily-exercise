class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size() == 0) return false;
        for (int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if (dfs(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string& word, int i,int j,int length){
        if(i>=board.size()||j>=board[0].size()||i<0||j<0||length>=word.size()||word[length]!=board[i][j]){   //不满足的条件
            return false; 
        }
        if(length==word.size()-1&&word[length]==board[i][j]){  //结束条件
            return true;
        }
        char temp=board[i][j];
        board[i][j]='/';  //标记走过，不能再走
        bool flag=dfs(board,word,i,j+1,length+1)||dfs(board,word,i,j-1,length+1)||dfs(board,word,i+1,j,length+1)||dfs(board,word,i-1,j,length+1); //上下左右选择
        board[i][j]=temp;  //回溯
        return flag;
    }
};