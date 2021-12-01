// avarage number of students
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float avarage;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the score of student %d: ", i);
        scanf("%d", &sum);
        avarage += sum;
    }
    avarage = avarage / n;
    printf("The avarage score is: %.2f", avarage);
    return 0;
}