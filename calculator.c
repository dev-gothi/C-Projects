# include <stdio.h>
float divide(float a,float b);
int printfact(int a);
int calpower(int a,int b);

int main(){
    printf("[u25ev055@vlsilab-client37 practical3] \n");
int i=1;
while(i){
printf("----------------------------\n");
printf("\n");
printf("Welcome to D.G Calculator\n");
printf("1.Add \n");
printf("2.Subtract \n");
printf("3.Divide \n");
printf("4.Multiply \n");
printf("5.Factorial \n");
printf("6.Modulus\n");
printf("7.Power\n");
printf("8.Exit\n");
int n;
printf("Enter Operation Number to be performed(1-8)\n");
scanf("%d",&n);
if(n==8){
    break;
}
if(n>=1 && n<=8){
    int a,b;
    printf("Enter value of first Numbers :\n");
    scanf("%d",&a);
    printf("Enter value of second Numbers :\n");
    scanf("%d",&b);
    
    switch (n)
    {
    case 1:
    printf("Addition of two numbers is %d\n",a+b);
        /* code */
        break;
        case 2 : if(a>b){
        printf("Subtraction of two numbers is %d\n",a-b);    
        }
        else{
            printf("Subtraction of two numbers is %d\n",b-a);
        }
         break;
          case 3 : printf("The division of number 1 with 2 is %f\n",divide(a,b));
                    break;   
          case 4 : printf("Multiplication of two numbers is %d\n",a*b);
                    break;
          case 5 : printf("Factorial of first number is %d\n",printfact(a));
                     printf("Factorial of second number is %d\n",printfact(b));
                     break;
          case 6 : if(b!=0){
                    printf("Modulo of first number with respect to second number is %d\n",a%b); 
          }       
          else{
            printf("Error as value of b is zero\n");
          }    
       
        case 7 : printf("The Answer of a raised to b is %d\n",calpower(a,b));
                break;
    
    default:
        break;
    }

}
else{
    printf("Please Enter valid operation number \n");

}
printf("Thank you for using D.G calculator\n");
printf("[u25ev055@vlsilab-client37 practical3] \n");
i++;
}
    return 0;
}

float divide(float a,float b){
    if(b!=0){
        float k = a/b;
        return k;
    }
    else{
        printf("Error as value of b is zero \n");
    }
}
int printfact(int a){
    if(a==0){
        return 1;
    }
    int fact = printfact(a-1);
    int factnm_1 = a * fact;
    return factnm_1;
}

int calpower(int a,int b){
    if(b==0){
        return 1;
    }
    int ans=a*calpower(a,b-1);
}