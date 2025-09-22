#include <stdio.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int stamina = A - B;
    if (stamina >= 0)
    {
        printf("%d\n",stamina);
    }
    
    

    return 0;
}