#include <stdio.h>
union student
{
    int rollno;
    float percentage;
    char section;
};
int main() 
{
    union student s1;
    s1.rollno=21;
    printf("Roll no : %d\n",s1.rollno);
    s1.percentage=91.2;
    printf("percentage : %f\n",s1.percentage);
    s1.section='A';
    printf("section: %c\n",s1.section);
    return 0;
}