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
            printf("%d>?", b);
                }
        else if(b<a){
            printf("%d<?", b);
        }
        else{
            printf("%d==?", b);
            } 
    }while(a != b);

    printf("\n%d", c);
    return 0;
}
