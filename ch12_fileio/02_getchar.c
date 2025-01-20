/*
* scanf()와 getchar() 차이점
*  1) scanf()
*   - 형식화 된 입력을 처리하기 위해 사용
*   - 형식 지정자(%d, %lf,...)를 통해 입려 형식 지정
*   - 공백을 무시하며 데티터를 토큰 단위로 읽음
*   - 여러 값을 한 번에 입력 가능
*
*  2) getchar
*   - 사용자 입력한 문자씩 읽음
*   - 공백과 개행문자를 포함한 모든 입력을 받음
*   - 버퍼에서 입력을 한 글자씩 처리하기 때문에
*     간단한 입력 작업에 적함
*   - 많은 데이터를 입력 받는데 부적합
*/

#include <stdio.h>

int main() {
    int ch;

    while(1) {
        ch = getchar();
        // Ctrl + Z → EOF
        if(ch == EOF){
            break;
        }
        putchar(ch);
    }
}