class Solution {
public:
	void replaceSpace(char *str,int length) {
      char *ret=(char*)malloc(sizeof(char)*3*length);
      int i=0;
      int j=0;
      for(i=0,j=0;i<length;i++,j++)
      {
          if(str[i]==' ')
          {
              ret[j]='%';
              ret[++j]='2';
              ret[++j]='0';
          }
          else{
              ret[j]=str[i];
          } 
      }
      for(i=0;i<j;i++)
          str[i]=ret[i];
      free(ret);
    }
};