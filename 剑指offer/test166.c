int numTeams(int* rating, int ratingSize){
    int i=0,j=0,k=0;
    int count=0;
    for(i=0;i<ratingSize-2;i++)
    {
        for(j=i+1;j<ratingSize-1;j++)
        {
            for(k=j+1;k<ratingSize;k++)
            {
                if( ((rating[i]<rating[j])&&(rating[j]<rating[k]))
                || ((rating[i]>rating[j])&&(rating[j]>rating[k]))   )
                    count++;
            }
        }
    }
    return count;
}