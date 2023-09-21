#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(void)
{
    int a = 0;
    int *array = (int*) malloc(5000000*sizeof(int));

    if(array == NULL)
    {
        printf("Failed - Memory Allocation \n");
        return 1;
    }

    for(a=0; a<5000000; a++)
    {
        array[a] = a + 1;
    }

    for(a=0; a<5000000; a++)
    {
        printf("%d", array[a]);
    }
    printf("\n");

    free(array);
    return 0;
}


/*void main() 
{
  struct _block *last = NULL;
  size_t size = 1024;
  heapList = (struct _block *) malloc(sizeof(struct _block));
  heapList->size = 0;
  heapList->next = NULL;
  heapList->free = false;

  struct _block *block = findFreeBlock(&last, size);

  assert(block == NULL);
}*/

/*int main() 
{
    // Allocate a block of memory
    void* ptr = malloc(16);
    assert(ptr != NULL);

    // Free the block of memory
    free(ptr);

    // Print heap statistics to ensure there are no memory leaks
    printStatistics();
    return 0;
}*/