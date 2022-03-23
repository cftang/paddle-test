#include <stdio.h>

typedef struct{
int *nums;
int size;
}Array;

Array *getArray(int size)
{
Array *a=malloc(sizeof(Array));
if(a == NULL){
return NULL;
}
a->size=size;
a->nums=malloc(sizeof(int)*size);
if (a->nums == NULL){
return NULL;
}
for(int i=0;i<size;i++){
a->nums[i]=i;
}
return a;
}

int main()
{
Array *a=getArray(10);
for(int i=0;i<a->size;i++){
printf("a[i]=%d\n",a->nums[i]);
}
free(a);
return 0;
}
