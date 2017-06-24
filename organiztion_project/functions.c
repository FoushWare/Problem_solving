#include"function.h"
#include<stdio.h>
#include<math.h>
int And(int a,int b){if(a>b) return b; else return a;}
int OR(int a,int b){if(b>a) return b; else  return a;}
int XOR(int a,int b){if(a!=b) return 1; else return 0;}
void Riple(){
int num1,num1A,num2,num2B,i=0,cin,sum=0,j=1,k=2;
int n1[8],n2[8],si[8],ci[8];
/*initialize the array of number 1   and number 2 cause i want to represent number as an binary in array of zeros and ones*/
for (i=0;i<7;i++){n1[i]=n2[i]=0;}

printf("enter first number \n");
scanf("%d",&num1A);
printf("enter second number \n");
scanf("%d",&num2B);
num1=num1A; //this is only for printing cause num1 will be manipulated and it's value will be changed
num2=num2B;//this is only for printing cause num2 will be manipulated and it's value will be changed

/*binary representation*/
i=7;
do{
        n1[i]=num1%2;
        num1=num1/2;
        n2[i]=num2%2;
        num2=num2/2;
   i--;
}while( (num1 !=0) || (num2 !=0));

printf("\n binary representation\n");
printf("num1 = %d \t",num1A);
for(i=0;i<8;i++) printf("%d  ",n1[i]);

printf("\nnum2 = %d \t",num2B);
for(i=0;i<8;i++) printf("%d  ",n2[i]);

cin=0;
//the summation process
for(i=7;i>=0;i--){
si[i]=XOR(cin,XOR(n1[i],n2[i]));
cin= OR(And(n1[i],n2[i]),And(cin,XOR(n1[i],n2[i])));
}

/*** printing the sum in the form of binary */
printf("\nsum: \t\t");
for(i=0;i<8;i++) {
        printf("%d  ",si[i]);
 /******getting the sum by  the weight of the  resulting sum */
sum=sum+ si[i]*pow(2,7-i);
}

printf("\nsum of %d+%d = %d",num1A,num2B,sum);

/***printing the delay for every stage s0 s1 s2 s3 s4 s5 s6 s7***/
printf("\n\n ******************printing the delay for every stage of sum s0 s1 s2 s3 s4 s5 s6 s7 **************");
printf("\n sum \t \t delay \t carry \t delay\n");
for(i=0;i<=7;i++){
    printf("\n s%d \t =\t %d \t C%d \t %d \n",i,j,i+1,k);
    j+=2;
    k+=2;
}



}
void CLA(){
int num1,num1A,num2,num2B,i=0,cin,sum=0;
int n1[8],n2[8],si[8],cp[8],cg[8];
/*initialize the array of number 1   and number 2 cause i want to represent number as an binary in array of zeros and ones*/
for (i=0;i<7;i++){n1[i]=n2[i]=0;}

printf("enter first number \n");
scanf("%d",&num1A);
printf("enter second number \n");
scanf("%d",&num2B);
num1=num1A; //this is only for printing cause num1 will be manipulated and it's value will be changed
num2=num2B;//this is only for printing cause num2 will be manipulated and it's value will be changed

/*binary representation*/
i=7;
do{
        n1[i]=num1%2;
        num1=num1/2;
        n2[i]=num2%2;
        num2=num2/2;
   i--;
}while( (num1 !=0) || (num2 !=0));

printf("\n binary representation\n");
printf("num1 = %d \t",num1A);
for(i=0;i<8;i++) printf("%d  ",n1[i]);

printf("\nnum2 = %d \t",num2B);
for(i=0;i<8;i++) printf("%d  ",n2[i]);

cin=0;
//the summation process
for(i=7;i>=0;i--){
si[i]=XOR(cin,XOR(n1[i],n2[i]));
cg[i]=And(n1[i],n2[i]);
cp[i]=XOR(n1[i],n2[i]);

cin=OR(cg[i],And(cin,cp[i])) ;
}

/*** printing the sum in the form of binary */
printf("\nsum: \t\t");
for(i=0;i<8;i++) {
        printf("%d  ",si[i]);
 /******getting the sum by  the weight of the  resulting sum */
sum=sum+ si[i]*pow(2,7-i);
}
printf("\nsum of %d+%d = %d",num1A,num2B,sum);
printf("\n\n ******************printing the delay for every stage of sum s0 s1 s2 s3 s4 s5 s6 s7 **************");
printf("\n all sums and carries occur at \t  carry=3 delay   sum=4 delay \n");
/*for(i=0;i<8;i++){
    printf("After %d's \t",i);
printf("p%d = %d \t",i,And(n1[i],n2[i]));
printf("G%d = %d \n",i,XOR(n1[i],n2[i]));
}*/
printf("One gate delay for Pi and Gi\n");

for(i=1;i<=8;i++){
printf("p%d = %d \t",i,And(n1[i],n2[i]));
printf("G%d = %d \n",i,XOR(n1[i],n2[i]));
}

printf("Two gate delays in the AND-OR circuit for ci+1\n");
for(i=1;i<=8;i++){
printf("C%d = %d \n",i,OR(cg[i],And(cin,cp[i])));
}

printf("All sums can be obtained 1 gate delay after the carries are computed\n");
for(i=0;i<8;i++){

si[i]=XOR(cin,XOR(n1[i],n2[i]));
printf("S%d = %d \n",i,XOR(cin,XOR(n1[i],n2[i])));
}








}
void BlockCLA(){}

