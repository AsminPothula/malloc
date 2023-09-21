#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a = 0;
    int *array = (int*) malloc(1000*sizeof(int));

    if(array == NULL)
    {
        printf("Failed - Memory Allocation \n");
        return 1;
    }

    for(a=0; a<1000; a++)
    {
        array[a] = a + 1;
    }

    for(a=0; a<1000; a++)
    {
        printf("%d", array[a]);
    }
    printf("\n");

    free(array);
    return 0;
}