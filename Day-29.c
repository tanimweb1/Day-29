#include<stdio.h>
int main(){


// If else whole topic revise

// 1.Take an integer and check whether it is positive, negative, or zero.

int n;
scanf("%d",&n);

if(n>0){
    printf("Number is positive");
}
else if(n==0){
    printf("Number is zero");
}
else{
    printf("Number is negative");
}







// 2.Input a number and check if it is divisible by both 5 and 11.

int n;
scanf("%d",&n);

if(n%5==0 && n%11==0){
    printf("N is divisible by both 5 and 11");
}
else{
    printf("Not divisible");
}



    


    return 0;

}
