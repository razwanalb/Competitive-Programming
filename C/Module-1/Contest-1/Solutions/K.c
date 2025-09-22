#include <stdio.h>
int main(){

    int N,bannedNote,totalAmound;
    scanf("%d",&N);
    bannedNote = 2000;
    totalAmound = (N*bannedNote)/500;
    printf("%d\n",totalAmound);
    return 0;
}