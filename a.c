
#include <stdio.h>
#include <stdlib.h>

struct Book{
char name[10];
char type[10];
int price;
};
struct Book *getBook()
{
struct Book b={
.name ="C Primer",
.type="Programme",
.price=100,
};
return &b;
}
int main()
{
struct Book *b=getBook();
char *name=b->name;
char *type=b->type;
int price=b->price;
printf("name %s\n",name);
printf("type =%s\n",type);
printf("price %d\n",price);
free(b);
}
