#include <stdio.h>

// 배열 길이 계산
// = C언어는 sizeof() 계산
// 
// ※ C언어 이외 객체지향언어(JAVA, Python, ...)
//      = 배열을 객체로 표현
//      = 기본적으로 배열 이름. lenght → 배열 길이
//      =           len(배열이름)     → 배열 길이


int main() {
    int score[5];
    //sizeof(score)  → 20Byte
    //sizeof(score[0]) → 4Byte
    int count = sizeof(score) / sizeof(score[0]);
    printf("배열길이: %d\n", count);

    for(int i = 0; i < count; i++){
        // 블라블라~
    }

    }