#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*)malloc(sizeof(int)); //int�� size��ŭ �޸𸮿� �Ҵ��� ����� �Ѵ�.

    printf("size is %d", sizeof(int));

    scanf("%d", p);

    printf("%d", *p);

    free(p);

    return 0;
}
