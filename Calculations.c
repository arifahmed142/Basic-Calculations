#include<stdio.h>
int main()
{
    int summ = 0;
    int a, b, c, bmath, avrg;
    int sum1, sum2,sum3,sum4;
    int mark, mark1, mark2, mark3, mark4, mark5;
    char name1[100], name2[100], name3[100], name4[100], name5[100], name6[100], name7[100];
    printf("                               Function\n");
    printf("1. Basic Math\n");
    printf("2. Average\n");
    printf("3. Voter Check\n");
    printf("4. Grade Calculator\n");
    printf("5. Form\n");
    printf("6. Total mark in This semester\n\n");
    printf("Enter Your chosen Number: ");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("1. Summation\n2. Difference\n3. Division\n4. Multiplication\n5. Even or Odd\n\nEnter Your Chosen Number: ");
            scanf("%d", &bmath);
            switch(bmath){
            case 1:
                printf("\n\n");
                printf("Enter 1st Number: ");
                scanf("%d", &sum1);
                printf("Enter 2nd Number: ");
                scanf("%d", &sum2);
                int sum=sum1+sum2;
                printf("\n\n");
                printf("Total Summation: %d", sum);
                printf("\n");
                break;

                case 2:
                printf("\n\n");
                printf("Enter 1st Number: ");
                scanf("%d", &sum1);
                printf("Enter 2nd Number: ");
                scanf("%d", &sum2);
                int dif=sum1-sum2;
                printf("\n\n");
                printf("Number difference: %d", dif);
                printf("\n");
                break;

            case 3:
                printf("\n\n");
                printf("Enter 1st Number: ");
                scanf("%d", &sum1);
                printf("Enter 2nd Number: ");
                scanf("%d", &sum2);
                int div=sum1/sum2;
                printf("\n\n");
                printf("Total Division: %d", div);
                printf("\n");
                break;

            case 4:
                printf("\n\n");
                printf("Enter 1st Number: ");
                scanf("%d", &sum1);
                printf("Enter 2nd Number: ");
                scanf("%d", &sum2);
                int mal=sum1*sum2;
                printf("\n\n");
                printf("Total Multiplication: %d", mal);
                printf("\n");
                break;

            case 5:
                printf("\n");
                printf("Enter A Number: ");
                scanf("%d", &sum1);
                int chk=sum1%2;
                printf("\n");
                if(chk==0){
                    printf("This Number is Even");
                }
                else{
                    printf("This Number is Odd");
                }
                printf("\n");
            }
            break;


        case 2:
            printf("\n\nHow many numbers you need to calculate the average: ");
            scanf("%d", &avrg);
            printf("\n");
            for ( a = 1; a <= avrg; a++ ){
                printf("Enter %dth Number: ", a);
                scanf("%d", &summ);
                sum1 += summ;
            }

            printf("\n");
            printf("Average of your Numbers: %d", sum1/avrg);
            break;


        case 3:
            printf("\nEnter Your Age: ");
            scanf("%d", &sum1);
            printf("\n");
            if(sum1<18){
                printf("You are not Eligible to Vote");
            }
            else{
                printf("You are Eligible to Vote");
            }
            printf("\n");
            break;


        case 4:
                printf("\n");
                printf("How many Subjects Do you have?: ");
                scanf("%d", &b);
                printf("\n\n");

                for ( c = 1; c <= b; c++){
                    printf("Enter %dth subject's Mark: ", c);
                    scanf("%d", &sum1);
                    summ += sum1;
                }
                printf("\n");
                int avg = summ/b;
                (avg>79)?(printf("Your Grade is A+.")):(avg>74)?(printf("Your Grade is A.")):(avg>69)?(printf("Your Grade is A-.")):(avg>64)?(printf("Your Grade is B.")):(avg>59)?(printf("Your Grade is C.")):(avg>54)?(printf("Your Grade is D.")):(printf("Your Grade is F"));
                printf("\n");
                printf("Your Average Mark: %d", avg);
                printf("\n\n");
            break;


        case 5:
            printf("\n");
            printf("Enter Your Name: ");
            scanf("%s", &name1);
            gets(name1);
            printf("\n");
            printf("Enter Your Father's Name: ");
            scanf("%s", &name2);
            gets(name2);
            printf("\n");
            printf("Enter Your Mother's Name: ");
            scanf("%s", &name3);
            gets(name3);
            printf("\n");
            printf("Enter Your School Name: ");
            scanf("%s", &name4);
            gets(name4);
            printf("\n");
            printf("Enter Your College Name: ");
            scanf("%s", &name5);
            gets(name5);
            printf("\n");
            printf("Enter SSC Grade: ");
            scanf("%s", &name6);
            gets(name6);
            printf("\n");
            printf("Enter HSC Grade: ");
            scanf("%s", &name7);
            gets(name7);
            printf("\n");
            printf("\n");
            printf("Name: %s\n", name1);
            printf("Father's Name: %s\n", name2);
            printf("Mother's name: %s\n", name3);
            printf("School name: %s\n", name4);
            printf("College name: %s\n", name5);
            printf("SSC Grade: %s\n", name6);
            printf("HSC Grade: %s\n", name7);
            break;


        case 6:
            printf("\n\nThis Function will Calculate total mark in 1 course in a Whole semester.\n\n");
            printf("1st interim mark: ");
            scanf("%d", &mark1);
            printf("\nMid Term mark: ");
            scanf("%d", &mark2);
            printf("\n2nd interim mark: ");
            scanf("%d", &mark3);
            printf("\nFinal Term mark: ");
            scanf("%d", &mark4);
            mark = (mark1*0.05)+(mark2*0.25)+(mark3*0.05)+(mark4*0.5);
            printf("\n\nTotal mark in This Semester: %d", mark);
            break;
        
    }
    getch();
    return 0;
}
