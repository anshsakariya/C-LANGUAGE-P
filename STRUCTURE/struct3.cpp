#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[100];
};
int main()
{
struct employee facebook [100];
facebook[0].code=100;
facebook[0].salary=100.45;
strcpy(facebook[0].name,"ansh");

facebook[1].code=20;
facebook[1].salary=80.45;
strcpy(facebook[1].name,"dhyey");


return 0;
}   