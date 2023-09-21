#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a = 0;
    int *array1 = (int*) malloc(500*sizeof(int));
    int *array2 = (int*) malloc(500*sizeof(int));

    if(array1 == NULL || array2 == NULL)
    {
        printf("Failed - Memory Allocation \n");
        return 1;
    }

    for(a=0; a<500; a++)
    {
        array1[a] = a + 1;
        array2[a] = a + 1;
    }

    for(a=0; a<500; a++)
    {
        printf("%d %d \n", array1[a], array2[a]);
    }

    free(array1);
    free(array2);
    return 0;
}


/*void main() 
{
  struct _block *last = NULL;
  size_t size = 1024;
  heapList = (struct _block *) malloc(sizeof(struct _block) + size);
  heapList->size = size;
  heapList->next = NULL;
  heapList->free = true;

  struct _block *block = findFreeBlock(&last, size);
  
  assert(block == heapList);
}

int main() 
{
    // Allocate two blocks of memory
    void* ptr1 = malloc(16);
    assert(ptr1 != NULL);
    void* ptr2 = malloc(32);
    assert(ptr2 != NULL);

    // Free the second block of memory first
    free(ptr2);

    // Free the first block of memory
    free(ptr1);

    // Print heap statistics to ensure there are no memory leaks
    printStatistics();
    return 0;
}*/
