#include<stdio.h>

int main() {

    double a,b,result;

    int ip;

    printf("Wellcome to our calculator!\n");


    do{
        printf("List of controls:-\n");
        printf("1.Addition.\n");
        printf("2.Substraction.\n");
        printf("3.Multiplication.\n");
        printf("4.Division.\n");
        printf("5.To end program.\n");
        printf("Enter option:- ");
        scanf("%d",&ip);

        switch (ip) {

            case 1:
                printf("You have selected addition.\n");
                printf("To end the calculator Enter '0'.\n");
                printf("Enter value one:- ");
                scanf("%lf",&a);
                printf("Enter value two:- ");
                scanf("%lf",&b);
                result = a + b;
                printf("Total = %lf",result);

                do{
                    printf("\n%lf + ",result);
                    scanf("%lf",&b);
                    result = result + b;
                    printf("Total = %lf\n",result);
                }while(b != 0);
                break;

            case 2:
                printf("You have selected substraction.\n");
                printf("To end the calculator Enter '0'.\n");
                printf("Enter value one:- ");
                scanf("%lf",&a);
                printf("Enter value two:- ");
                scanf("%lf",&b);
                result = a - b;
                printf("Total = %lf",result);

                do{
                    printf("\n%lf - ",result);
                    scanf("%lf",&b);
                    result = result - b;
                    printf("Total = %lf\n",result);
                }while(b != 0);
                break;

            case 3:
                printf("You have selected multiplication.\n");
                printf("To end the calculator Enter '0'.\n");
                printf("Enter value one:- ");
                scanf("%lf",&a);
                printf("Enter value two:- ");
                scanf("%lf",&b);
                result = a * b;
                printf("Total = %lf",result);

                do{
                    printf("\n%lf * ",result);
                    scanf("%lf",&b);
                    result = result * b;
                    printf("Total = %lf\n",result);
                }while(b != 0);
                break;

            case 4:
                printf("You have selected division.\n");
                printf("To end the calculator Enter '0'.\n");
                printf("Enter value one:- ");
                scanf("%lf",&a);
                printf("Enter value two:- ");
                scanf("%lf",&b);
                result = a / b;
                printf("Total = %lf",result);

                do{
                    printf("\n%lf / ",result);
                    scanf("%lf",&b);
                    result = result / b;
                    printf("Total = %lf\n",result);
                }while(b != 0);
                break;

            case 5:
                printf("Thanks for using our calculator!");
                break;
            default:
                printf("Invalid ip");
                break;

        }
    }while(ip != 5);
return 0;
}
