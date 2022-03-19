#include <stdio.h>
int main()
{
char charType; //문자형 변수
int integerType; //정수형 변수
float floatType; //실수형(float) 변수
double doubleType; //실수형(double) 변수

///////////////// 성명, 학번이 출력되도록 수정 /////////////////
printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
//////////////////////////////////////////////////////////////

printf("Size of char: %ld byte\n",sizeof(charType)); // 'char'형 변수(charType)의 크기 : 8bit = 1byte
printf("Size of int: %ld bytes\n",sizeof(integerType)); // 'int'형 변수(integerType)의 크기 : 32bit = 4byte
printf("Size of float: %ld bytes\n",sizeof(floatType)); // 'float'형 변수(floatType)의 크기 : 32bit = 4byte
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // 'double'형 변수(doubleType)의 크기 : 64bit = 8byte
printf("-----------------------------------------\n");

printf("Size of char: %ld byte\n",sizeof(char)); // 'char' 자료형의 크기 : 8bit = 1byte
printf("Size of int: %ld bytes\n",sizeof(int)); // 'int' 자료형의 크기 : 32bit = 4byte
printf("Size of float: %ld bytes\n",sizeof(float)); // 'float' 자료형 크기 : 32bit = 4byte
printf("Size of double: %ld bytes\n",sizeof(double)); // 'double' 자료형 크기 : 64bit = 8byte
printf("-----------------------------------------\n");

// 포인터(*) 크기는 CPU에 따라 결정됨
// 32bit CPU에서 포인터의 크기는 4byte
printf("Size of char*: %ld byte\n",sizeof(char*)); // 4byte
printf("Size of int*: %ld bytes\n",sizeof(int*)); // 4byte
printf("Size of float*: %ld bytes\n",sizeof(float*)); // 4byte
printf("Size of double*: %ld bytes\n",sizeof(double*)); // 4byte

return 0;
}
