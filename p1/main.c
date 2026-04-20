#include <stdio.h>

int main(void){
    int a; 
    int b;  
    int c = 0;  
    
    scanf("%d", &a);
    
    do{
        c+=1;
        scanf("%d", &b);
        if(b>a){
            printf("%d>?\n", b);
                }
        else if(b<a){
            printf("%d<?\n", b);
        }
        else{
            printf("%d==?\n", b);
            } 
    }while(a != b);

    printf("%d\n", c);
    return 0;
}
