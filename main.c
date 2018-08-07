#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*)malloc(sizeof(int)); //int의 size만큼 메모리에 할당을 해줘야 한다.

    printf("size is %d", sizeof(int));

    scanf("%d", p);

    printf("%d", *p);

    free(p);

    return 0;
}
