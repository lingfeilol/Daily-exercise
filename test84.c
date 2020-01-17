bool isLongPressedName(char * name, char * typed){
    if(typed==NULL) return false;
    int j=0;
    for(int i=0;i<strlen(typed);i++)
    {
        if(name[j]==typed[i])
            j++;           //直接判断name在typed中每个字符出现的个数  
    }
    if(j==strlen(name))
        return true;
    return false;
}