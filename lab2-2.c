#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;

i = 1234; //변수 i의 값을 1234로 초기화

///////////////// 성명, 학번이 출력되도록 수정 /////////////////
printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
//////////////////////////////////////////////////////////////

// 'ptr = &i' 하기 전의 값
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // i의 값 = 1234
printf("address of i == %p\n", &i); // &i = i의 메모리 주소 = 0061FF1C
printf("value of ptr == %p\n", ptr); // 포인터 변수 ptr의 값 = 003AD000  
printf("address of ptr == %p\n", &ptr); // &ptr = ptr의 메모리 주소 = 0061FF18

ptr = &i; /* ptr is now holding the address of i */
// 'ptr = &i' 한 이후의 값
printf("\n[checking values after ptr = &i] \n"); 
printf("value of i == %d\n", i); // i의 값 = 1234
printf("address of i == %p\n", &i); // &i = i의 메모리 주소 = 0061FF1C
printf("value of ptr == %p\n", ptr); // ptr의 값 = i의 메모리 주소 = 0061FF1C
printf("address of ptr == %p\n", &ptr); // &ptr의 메모리 주소 = 0061FF18 (변하지 않음)
printf("value of *ptr == %d\n", *ptr); // *ptr = i의 값 = 1234

dptr = &ptr; /* dptr is now holding the address of ptr */
// 'dptr = &ptr' 한 이후의 값
// dptr은 ptr 주소값을 저장하는 int형 이중포인터
// dptr = &ptr,  *dptr = ptr의 값(&num),  **dptr = *ptr(num)값
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // i의 값 = 1234
printf("address of i == %p\n", &i); // &i = i의 메모리 주소 = 0061FF1C
printf("value of ptr == %p\n", ptr); // ptr의 값 = i의 메모리 주소 = 0061FF1C
printf("address of ptr == %p\n", &ptr); // &ptr의 메모리 주소 = 0061FF18 (변하지 않음)
printf("value of *ptr == %d\n", *ptr); // *ptr = i의 값 = 1234
printf("value of dptr == %p\n", dptr);  // dptr의 값 =  &ptr의 메모리 주소 = 0061FF18
printf("address of ptr == %p\n", &dptr); //&dptr의 메모리 주소 = 0061FF14
printf("value of *dptr == %p\n", *dptr); // *dptr = ptr의 값 = i의 메모리 주소 = 0061FF1C
printf("value of **dptr == %d\n", **dptr); // **dptr = *ptr = i의 값 = 1234

*ptr = 7777; /* changing the value of *ptr */
// '*ptr = 7777' 이후의 값
// i = *ptr = **dptr -> 모든 값 = 7777
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i); // 7777
printf("value of *ptr == %d\n", *ptr); // 7777
printf("value of **dptr == %d\n", **dptr); // 7777

**dptr = 8888; /* changing the value of **dptr */
// '**dptr = 8888' 이후의 값
// i = *ptr = **dptr -> 모든 값 = 8888
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); // 8888
printf("value of *ptr == %d\n", *ptr); // 8888
printf("value of **dptr == %d\n", **dptr); // 8888

return 0;
}
