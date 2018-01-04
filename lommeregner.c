#include "stdio.h"

double result=0;
double a=0;
double b=0;

int addition(double a, double b);
int subtraction(double a, double b);
int mult(double a, double b);
int division(double a, double b);


int main(){
    int counter = 0;
    printf("Start lommeregner ved at taste 1, afslut ved at taste 0");
    scanf("%d",&counter);

    if (counter==1){
        while(counter==1){
            char symbol;
            printf("Indtast tal");
            scanf("%d", &a);
            getchar();

            printf("\nIndtast symbol");
            scanf(" %c", &symbol);
            getchar();

            printf("\nindtast andet tal");
            scanf("%d", &b);
            getchar();

            switch(symbol){
                case '+':
                    addition(a,b);
                    printf("Resultat er: %d %c %d =  %d\n", a, symbol,b,result);
                    break;
                case '-':
                    subtraction(a,b);
                    printf("Resultat er: %lf %c %lf =  -%d\n", a,symbol,b,result);
                    break;
                case '*':
                    mult(a,b);
                    printf("Resultat er: %f %c %f =  %f\n", a,symbol,b,result);
                    break;
                case '/':
                    division(a,b);
                    printf("Resultat er: %d %c %d =  %d\n", a,symbol,b,result);
                    break;
                case '%':
                    break;
                default:
                    printf("Forkert indtastet operator\n");
                    break;
            }

            printf("Fortsæt eller afslut?\n 1 for fortsæt, 0 for afslut");

            scanf("%d",&counter);
        }
    }
    else if (counter ==0 ) {printf("lommeregner afsluttes");}

    return 0;
}

int addition(double a, double b){
    result=a + b;
    return result;
}
int subtraction(double a, double b){
    result=(a- b);
    return  result;
}
int mult(double a, double b){
    result=(a * b);
    return result;
}
int division(double a, double b){
    result=(a / b);
    return result;
}