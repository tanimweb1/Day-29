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







// 5.Input marks of a student and display Grade:

int marks;
scanf("%d",&marks);
if(marks<40){
    printf("Fail");
}
else if(marks>=40 && marks<60){
    printf("Grade is C");
}
else if(marks>=60 && marks<80){
    printf("Grade is B");
}

else if(marks>=80 && marks <=100){
    printf("Grade is A");
}
else {
    printf("not a valid result");
}
    






// 7.Input a number and check whether it is even or odd.

int n;
scanf("%d",&n);
if(n%2==0){
    printf("Number is even");
}
else{
    printf("Number is odd");
}







// 8.Input age and check whether the person is eligible to vote.
int age;
scanf("%d",&age);
if(age>=18){
    printf("Can give vote");
}
else{
    printf("Can't vote");
}





// 10. Input a number and check whether it is divisible by 3 or 7.

int num;
scanf("%d",&num);
if(num%3==0 && num%7==0){
    printf("Number is divisible by 3 and 7 ");
}
else{
    printf("not divisible");
}






    

    return 0;

}






