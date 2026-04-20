#include <stdio.h>

int main(void){
    int a; // 맞춰야 할 정답
    int b;  // 추측한 입력값
    int c = 0; // 시행 횟수
    
    scanf("%d", &a); // 정답 입력 받음
    
    do{     // 정답 맞출 때까지 반복
        
        scanf("%d", &b); //추측값 입력
        c+=1; // 시도 횟수 1 늘어남
        if(b>a){
            printf("%d>?\n", b); // 입력한 값이 정답보다 큰 경우
                }
        else if(b<a){
            printf("%d<?\n", b); // 입력한 값이 정답보다 작은 경우
        }
        else{
            printf("%d==?\n", b); // 입력한 값이 정답과 일치한 경우
            } 
    }while(a != b); // 입력값이 정답과 다르면 반복

    printf("%d\n", c); // 총 시도 횟수 출력
    return 0;
}
