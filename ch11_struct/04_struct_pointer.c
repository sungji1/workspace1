#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];
    int age;
    double height;
    char *intro;
};

int main() {
    struct profile s1;

    strcpy(s1.name, "문지성");
    s1.age = 24;
    s1.height = 178.5;


    // 메모리 동적 할당
    s1.intro = (char *)malloc(80); // 포인터 변수 초기화(반드시)
    printf("자기소개: ");
    fgets(s1.intro,80, stdin);

    printf("이름: %s\n",s1.name);
    printf("나이: %d\n",s1.age);
    printf("신장: %.1lf\n",s1.height);
    printf("자기소개: %s\n",s1.intro);
    free(s1.intro);     // 동적 할당 영역 반환
    fgets(s1.intro,80, stdin);
}