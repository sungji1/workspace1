#include <stdio.h>
#include <string.h> // 문자열 관련 코드 모음

int main() {
    char name[4] = "abc";
    // char(4 Byte) → name2(16 Byte)
    //    ㄴ 메모리 주소: 100번지 시작 100번지~ 115번(name2)
    //    ㄴ name2 호풀하면 100번지 주소(배열의 시작번지 주소)를 가져다 줌줌
    char name2[4];
    // 변수는 주소값
    // 예를 들어 name2는 100번지 주소를 의미
    // 대입연산자의 좌측항은 상수 불가!
    // name2 = name; // 사용 불가가
    strcpy(name2, name);
    printf("%s", name2);
}