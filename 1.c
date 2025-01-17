// #include<stdio.h>
// int main(){
//     double n;
//     scanf("%lf", &n);

//     double mile=0;
//     mile = n/1.609344;
//     printf("%.2f", mile);
//     return 0;
// }

//2
// #include<stdio.h>
// int main(){
//     int month, day;
//     scanf("%d %d", &month, &day);

//     switch(month){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             printf("31 ");
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             printf("30 ");
//             break;
//         case 2:
//             printf("28 ");
//             break;
//     }

//     if(day%3==0)
//         printf("Yes");
//     else
//         printf("No");

//     return 0;
// }

// //3
// #include<stdio.h>
// int main(){
//     int a, b;
//     int min=0, max=0;
    
//     scanf("%d %d", &a, &b);
//     if(a==0||b==0){
//         printf("-1");
//         return 0;
//     }

//     if(a>b){
//         min = b;
//         max = a;
//     }
//     else{
//         min = a;
//         max = b;
//     }

//     printf("%d", (max/min)+(max%min));
//     return 0;

// }

//4
// #include<stdio.h>
// int main(){
//     int n;
//     int cycle=0;
//     scanf("%d", &n);

//     while(n>0){
//         if(n%2==0){
//             n = n / 2;
//             printf("%d ", n);
//             cycle++;
//         }
//         else{
//             n = (2 * n) - 2;
//             printf("%d ", n);
//             cycle++;
//         }
//     }
//     printf("\ncycle : %d", cycle);
//     return 0;

// }
// // 5
// #include<stdio.h>
// void matrixAdd(int mx[3][3], int a[3][3], int b[3][3]){
//     int i, j;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             mx[i][j] = a[i][j] + b[i][j];
//         }
//     }
// }
// int main(){
//     int i, j;
//     int mx[3][3] = { };
//     int my[3][3] = { };

//      // mx 와 my 행렬을 입력 받음
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &mx[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &my[i][j]);
//         }
//     }

//     // 행렬 합 계산
//     matrixAdd(mx, mx, my);

//     // 행렬 합 결과 출력
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", mx[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }

//6
#include<stdio.h>
float count(char str[]){
    int chars=0;
    while(str[chars]!=0){
        chars++;        
    }
    return (float)chars; 
}
unsigned int copy(char str[], unsigned int arr[]){
    int i=0;
    while(str[i]!=0){
        arr[i] = str[i];
        i++;
    }
    return i;
} 
void print_unsigned_int(unsigned int arr[], unsigned int arr_size){
    int i;
    
    for(i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void print_char(unsigned int arr[], unsigned int arr_size){
    int i;
    
    for(i=0; i<arr_size; i++){
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
	char str[256];
	unsigned int arr[256];
	unsigned int arr_size;
	scanf("%s", str);
	printf("%s\n", str);
	printf("char의 수를 float으로 출력: %f\n", count(str));
	arr_size = copy(str, arr); //char의 수 반환
	print_unsigned_int(arr, arr_size); //10진수로 출력
	print_char(arr, arr_size); //char로 출력
	return 0;
}