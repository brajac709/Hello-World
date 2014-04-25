#include <stdio.h>


struct array_list {
    int *buff;
    int buff_size;
    int length;
}

struct array_list makeList() {
    struct array_list a;
    a.buff = (int *)malloc(2*sizeof(int));
    a.buff_size = 2;
    a.length = 0;
}

void freeList(struct array_list *a) {
    a->buff = 0;
    a->length = 0;
    free(a->buff);
}

int main(int argc, char *argv) {
    int i;
    for (i = 0; i< 10; i++) {
        printf("whatup%d\n",i);
    }
    //do some other stuff.....
    //wheeeeeeeee!
    return 0;
}

/*WOWIJEROIWEHGHWUIER*/
