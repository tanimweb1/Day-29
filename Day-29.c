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




// 3.Input a character and check whether it is a vowel or consonant.

char a;
scanf("%c",&a);

if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
    printf("Character is Vowel");
}
else{
    printf("Character is Consonent");
}
    

    


// 4.Input three numbers and find the largest number.

int a,b,c;
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c){
    printf("A is big");
}
else if(b>a && b>c){
    printf("B is big");
}
else{
    printf("C is big");
}



    

    return 0;

}


