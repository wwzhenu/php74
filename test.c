#include <stdio.h>

struct test
{
    /* data */
    char a;//1
    int b;//4
    long c;//8
    void* d;//8
    int e;//4
    char* f;//8
};// 按照8字节对齐，共占用40字节

struct test2
{
    /* data */
    char a;//1
    struct test b;//40
    int c;//4
};// 共占用56字节

union test1
{
    /* data */
    char a;//1
    int b;//4
    long c;//8
    void* d;//8
    int e;//4
    char* f;//8
};// 占用8字节

int main()
{    
    struct test a;
    union test1 b;
    struct test2 c;
    
    
     
    printf("%+ld \n",sizeof(a));
    printf("%+ld \n",sizeof(b));
    printf("%+ld \n",sizeof(c));
    printf("\n");
   /* 我的第一个 C 程序 */
    printf("Hello, W3Cschool! \n");
    printf("Hello, W3Cschool! \n");
   
    return 0;
}


