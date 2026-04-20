#include <stdio.h>

int main() {
    int n;
    char s[1001]; // 문자열을 저장할 수 있는 넉넉한 공간

    // 입력 받기
    scanf("%d", &n);
    scanf("%s", s);

    int max_a = 0; // 소문자 최대 연속 개수
    int max_d = 0; // 숫자 최대 연속 개수

    int cur_a = 0; // 지금 연속 중인 소문자 개수
    int cur_d = 0; // 지금 연속 중인 숫자 개수

    //  반복문을 돌며 한 글자씩 확인하기
    for (int i = 0; i < n; i++) {
        // 현재 글자가 'a'와 'z' 사이라면 소문자라면
        if (s[i] >= 'a' && s[i] <= 'z') {
            cur_a = cur_a + 1; // 소문자 카운트 증가
            cur_d = 0;              // 숫자는 끊겼으므로 0으로 초기화
            
            // 현재 카운트가 현재 최고 기록보다 크다면 갱신
            if (cur_a > max_a) {
                max_a = cur_a;
            }
        }
        // 현재 글자가 '0'과 '9' 사이라면 , 숫자라면
        else if (s[i] >= '0' && s[i] <= '9') {
            cur_d = cur_d + 1; // 숫자 카운트 증가
            cur_a = 0;              // 소문자는 끊겼으므로 0으로 초기화
            
            // 현재 카운트가 역대 최고 기록보다 크다면 갱신
            if (cur_d > max_d) {
                max_d = cur_d;
            }
        }
    }

    //  결과 출력
    printf("%d\n", max_a);
    printf("%d\n", max_d);

    return 0;
}
