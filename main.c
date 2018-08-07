#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *q = (int*)malloc(sizeof(int)); //int의 size만큼 메모리에 할당을 해줘야 한다.

    printf("size is %d\n", sizeof(int));

    scanf("%d", q);

    printf("%d", *q);

    free(q);

    int a[3] = {10, 20, 30};
    int *p = a; //a 자체가 주소
    printf("a = %p, p = %p \n", a, p);
    printf("%d %d %d \n", a[0], a[1], a[2]);
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("%d %d %d \n", *a, *(a+1), *(a+2));
    printf("%d %d %d \n", *p, *(p+1), *(p+2));

    return 0;
}
