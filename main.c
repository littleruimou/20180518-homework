#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade;
    printf("Please enter your grade(0-100):");
    scanf("%d",&grade);
    switch (grade/10)  //眔Θ罿计 
    {
    case 10:  //100だ纔单 
    case 9:   //90だ纔单 
        printf ("S level\n");
        break;
    case 8:   //80だヒ单 
        printf ("A level\n");
        break;
    case 7:   //70だ单
        printf ("B level\n");
        break;
    case 6:   //60だ单
        printf ("C level\n");
        break;
    default:   //60だ单
        printf ("D level\n");
        break;
    }
    system("pause");
    return 0;
}
