	

//先根据模式串构建状态自动机
//在与文本串开始匹配
int strStr(char * haystack, char * needle){
    if(needle==NULL||needle[0]=='\0')
        return 0;
    if(haystack==NULL)
        return -1;
    int N=strlen(haystack);
    int M=strlen(needle);
    int dp[M][256];
    int x=0;
    int j=0;
    for(j=0;j<256;j++)   //先初始化状态
        dp[0][j]=0;
    dp[0][needle[0]]=1; //确定状态1
    int i=0;
    for(i=1;i<M;i++)
    {
        for(int ch=0;ch<256;ch++)
        {
            if(ch==needle[i])
                dp[i][needle[i]]=i+1;  //满足匹配条件的 ，状态推进
            else
                dp[i][ch]=dp[x][ch];   //否则，状态回退到之前保存的影子状态 具有相同公共前缀
        }
        x=dp[x][needle[i]];  //每走一步，就保留一次影子状态
    }
    //状态机构造完成，开始匹配
    i=0;
    for( j=0;j<N;j++)
    {   
        i=dp[i][haystack[j]];   //状态机匹配
        if(i==M)
            return j-M+1;
    }
    return -1;


}
//题解
// public class KMP {
//     private int[][] dp;
//     private String pat;

//     public KMP(String pat) {
//         this.pat = pat;
//         int M = pat.length();
//         // dp[状态][字符] = 下个状态
//         dp = new int[M][256];
//         // base case
//         dp[0][pat.charAt(0)] = 1;
//         // 影子状态 X 初始为 0
//         int X = 0;
//         // 构建状态转移图（稍改的更紧凑了）
//         for (int j = 1; j < M; j++) {
//             for (int c = 0; c < 256; c++) {
//                 dp[j][c] = dp[X][c];
//             dp[j][pat.charAt(j)] = j + 1;
//             // 更新影子状态
//             X = dp[X][pat.charAt(j)];
//         }
//     }

//     public int search(String txt) {
//         int M = pat.length();
//         int N = txt.length();
//         // pat 的初始态为 0
//         int j = 0;
//         for (int i = 0; i < N; i++) {
//             // 计算 pat 的下一个状态
//             j = dp[j][txt.charAt(i)];
//             // 到达终止态，返回结果
//             if (j == M) return i - M + 1;
//         }
//         // 没到达终止态，匹配失败
//         return -1;
//     }
// }