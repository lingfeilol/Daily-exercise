bool isPalindrome(char * s){
    int i = 0;
    int len = strlen(s);
    int j = len - 1;

    while (i < j) {
        if ((int)isalnum(s[i]) == 0) {//是不是字母或数字 不是则走一步
            i++;
            continue;
        }
        if ((int)isalnum(s[j]) == 0) {
            j--;
            continue;
        }
        if (tolower(s[i]) != tolower(s[j])) {//转换成小写字母在判断
            return false;
        }
        i++;
        j--;
    }
    return true;
}
