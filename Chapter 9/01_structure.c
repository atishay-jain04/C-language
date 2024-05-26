#include <stdio.h>
struct employee{
    int code;
    float sal;
    char name[20];
};
int main(){
    struct employee e1,e2,e3;
    e1.code=101;
    e2.code=102;
    e3.code=103;
    e1.sal=100000;
    e2.sal=100050;
    e3.sal=100020;
    strcpy(e1.name,"ROHAN");
    strcpy(e2.name,"SOHAN");
    strcpy(e3.name,"MOHAN");
    return 0;
}