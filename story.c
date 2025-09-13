#include<stdio.h>
void divya(void);
void ramya(void);
int main()
{
    printf("Darshan is in home\n");
    divya();
    printf("Darshan is back in his home");
}
void ramya()
{
    printf("He had tea with ramya\n");
}
void divya()
{
    printf("Divya is prepaing coffee\n");
    ramya();
    printf("He had coffee with divya\n");
}