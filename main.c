#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *q = (int*)malloc(sizeof(int)); //int�� size��ŭ �޸𸮿� �Ҵ��� ����� �Ѵ�.

    printf("size is %d\n", sizeof(int));

    scanf("%d", q);

    printf("%d", *q);

    free(q);

    int a[3] = {10, 20, 30};
    int *p = a; //a ��ü�� �ּ�
    printf("a = %p, p = %p \n", a, p);
    printf("%d %d %d \n", a[0], a[1], a[2]);
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("%d %d %d \n", *a, *(a+1), *(a+2));
    printf("%d %d %d \n", *p, *(p+1), *(p+2));

    return 0;
}
