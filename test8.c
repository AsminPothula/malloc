#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a = 0;
    int *array = (int*) malloc(10*sizeof(int));

    if(array == NULL)
    {
        printf("Failed - Memory Allocation \n");
        return 1;
    }

    for(a=0; a<20; a++)
    {
        if(a<10)
        {
            array[a] = a + 1;
        }
        else
        {
            printf("%d \n", array[a-10]);
        }
    }

    free(array);
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

  struct _block *secondBlock = (struct _block *) malloc(sizeof(struct _block) + size * 2);
  secondBlock->size = size * 2;
  secondBlock->next = NULL;
  secondBlock->free = true;
  heapList->next = secondBlock;

  struct _block *block = findFreeBlock(&last, size);

  assert(block == heapList);
}

int main() 
{
    // Allocate a block of memory that is larger than the initial heap size
    void* ptr = malloc(4096);
    assert(ptr != NULL);

    // Free the block of memory
    free(ptr);

    // Print heap statistics to ensure there are no memory leaks
    printStatistics();
    return 0;
}*/
