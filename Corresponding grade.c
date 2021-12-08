#include<stdio.h>
int main()
{
    double marks;
    printf("Enter student subject marks is : ");
    scanf("%lf",&marks);
    if(marks>=80 && marks<=100)
        printf("Corresponding letter grade is : A+ ");
    else if(marks>=70 && marks<80)
        printf("Corresponding letter grade is : A ");
    else if(marks>=60 && marks<70)
        printf("Corresponding letter grade is : A- ");
    else if(marks>=50 && marks<60)
        printf("Corresponding letter grade is : B ");
     else if(marks>=40 && marks<50)
        printf("Corresponding letter grade is : C ");
     else if(marks>=33 && marks<40)
        printf("Corresponding letter grade is : D ");
    else
    {
        printf("Corresponding letter grade is : F(Fail) \n");
        printf("Best of luck next time\n");
    }

    getch();
}
