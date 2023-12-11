
#include<stdio.h>
struct record{
char name[10];
char phone[15];
char email[15];
};
int main()
{
    struct record a;

    printf("enter the name:");
    scanf("%s",&a.name);
    printf("enter the no:");
    scanf("%s",&a.phone);
    printf("enter the email:");
    scanf("%s",&a.email);

    printf("name:%s number:%s email:%s",a.name,a.phone,a.email);

    return 0;
}
