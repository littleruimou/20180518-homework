#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade;
    printf("Please enter your grade(0-100):");
    scanf("%d",&grade);
    switch (grade/10)  //���o���Z���Q��� 
    {
    case 10:  //100�����u�� 
    case 9:   //90�h�����u�� 
        printf ("S level\n");
        break;
    case 8:   //80�h�����ҵ� 
        printf ("A level\n");
        break;
    case 7:   //70�h�����A��
        printf ("B level\n");
        break;
    case 6:   //60�h��������
        printf ("C level\n");
        break;
    default:   //60���H�U���B��
        printf ("D level\n");
        break;
    }
    system("pause");
    return 0;
}
