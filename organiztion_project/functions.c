#include"function.h"    //for header function And OR XOR
#include<stdio.h>       //for standard input output for console
#include<math.h>        //for pow() function
#include<unistd.h>      //for usleep function[GNU] but for windows you can use sleep()


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
usleep(900000);
printf("num1 = %d \t",num1A);
for(i=0;i<8;i++) printf("%d  ",n1[i]);

usleep(900000);
printf("\nnum2 = %d \t",num2B);
for(i=0;i<8;i++) printf("%d  ",n2[i]);


cin=0;
//the summation process
for(i=7;i>=0;i--){
si[i]=XOR(cin,XOR(n1[i],n2[i]));
//cin= OR(And(n1[i],n2[i]),And(cin,XOR(n1[i],n2[i])));
cin= OR( OR(And(n1[i],n2[i]), And(n2[i],cin)) , And(n1[i],cin)  );
}

/*** printing the sum in the form of binary */

usleep(900000);
printf("\nsum: \t\t");
for(i=0;i<8;i++) {
        printf("%d  ",si[i]);

        /******getting the sum by  the weight of the  resulting sum */
sum=sum+ si[i]*pow(2,7-i);
}

usleep(900000);
printf("\nsum of %d+%d = %d",num1A,num2B,sum);


usleep(900000);
/***printing the delay for every stage s0 s1 s2 s3 s4 s5 s6 s7***/
printf("\n\n ******************printing the delay for every stage of sum s0 s1 s2 s3 s4 s5 s6 s7 **************");
printf("\n sum \t \t delay \t carry \t delay\n");
for(i=0;i<=7;i++){
    printf("\n s%d \t =\t %d \t C%d \t %d \n",i,j,i+1,k);
    j+=2;
    k+=2;
usleep(900000);
}



}


void CLA(){

int num1,num1A,num2,num2B,i=0,cin,sum=0;
int n1[8],n2[8],si[8],cp[8],cg[8],CIN[8];
/*initialize the array of number 1   and number 2 cause i want to represent number as an binary in array of zeros and ones*/
for (i=0;i<7;i++){n1[i]=n2[i]=CIN[i]=0;}

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

usleep(600000);
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

cin=OR(cg[i],And(cin,cp[i]));

CIN[i]=cin;

}

/*** printing the sum in the form of binary */
usleep(2000000);
printf("\nsum: \t\t");
for(i=0;i<8;i++) {
        printf("%d  ",si[i]);
 /******getting the sum by  the weight of the  resulting sum */
sum=sum+ si[i]*pow(2,7-i);
}
usleep(2000000);
printf("\nsum of %d+%d = %d",num1A,num2B,sum);
printf("\n\n ******************printing the delay for every stage of sum s0 s1 s2 s3 s4 s5 s6 s7 **************");
printf("\n all sums and carries occur at \t  carry=3 delay   sum=4 delay \n");

usleep(2000000);
printf("One gate delay for Pi and Gi\n");

for(i=0;i<8;i++){
printf("p%d = %d \t",i,cp[7-i]);
printf("G%d = %d \n",i,cg[7-i]);
}


usleep(2000000);
printf("Two gate delays in the AND-OR circuit for ci+1\n");
for(i=0;i<8;i++){
printf("C%d = %d \n",i+1,CIN[7-i]);
}


usleep(2000000);
printf("All sums can be obtained 1 gate delay after the carries are computed\n");
for(i=0;i<8;i++){
printf("S%d = %d \n",i,si[7-i]);
}

}
void BlockCLA(){

int num1,num1A,num2,num2B,i=0,cin,sum=0,C8=0;
int n1[16],n2[16],si[16],cp[16],cg[16],CIN[16];
/*initialize the array of number 1   and number 2 cause i want to represent number as an binary in array of zeros and ones*/
for (i=0;i<15;i++){n1[i]=n2[i]=CIN[i]=0;}

printf("enter first number \n");
scanf("%d",&num1A);
printf("enter second number \n");
scanf("%d",&num2B);

num1=num1A; //this is only for printing cause num1 will be manipulated and it's value will be changed
num2=num2B;//this is only for printing cause num2 will be manipulated and it's value will be changed

/*binary representation*/
i=15;
do{
        n1[i]=num1%2;
        num1=num1/2;
        n2[i]=num2%2;
        num2=num2/2;
   i--;
}while( (num1 !=0) || (num2 !=0));

usleep(600000);
printf("\n binary representation\n");

printf("num1 = %d \t",num1A);
for(i=0;i<16;i++) printf("%d  ",n1[i]);

printf("\nnum2 = %d \t",num2B);
for(i=0;i<16;i++) printf("%d  ",n2[i]);


cin=0;
//the summation process
for(i=15;i>=8;i--){
si[i]=XOR(cin,XOR(n1[i],n2[i]));
cg[i]=And(n1[i],n2[i]);
cp[i]=XOR(n1[i],n2[i]);

cin=OR(cg[i],And(cin,cp[i]));

CIN[i]=cin;

}
C8=CIN[8];

//the summation process second level
for(i=7;i>=0;i--){
si[i]=XOR(C8,XOR(n1[i],n2[i]));
cg[i]=And(n1[i],n2[i]);
cp[i]=XOR(n1[i],n2[i]);

cin=OR(cg[i],And(cin,cp[i]));

CIN[i]=cin;

}

/*** printing the sum in the form of binary */
usleep(2000000);
printf("\nsum: \t\t");
for(i=0;i<16;i++) {
        printf("%d  ",si[i]);
 /******getting the sum by  the weight of the  resulting sum */
sum=sum+ si[i]*pow(2,15-i);
}
usleep(2000000);
printf("\nsum of %d+%d = %d",num1A,num2B,sum);

printf("\n *****calculate the critical path in this example it will be c16*****/n");


usleep(2000000);
printf("One gate delay for Pi and Gi\n");

for(i=0;i<16;i++){
printf("p0%d = %d \t \t",i,cp[15-i]);
printf("G0%d = %d  \n",i,cg[15-i]);
}


printf("Two gate delays in the AND-OR circuit for ci+1 For level 2 \n");
for(i=0;i<=7;i++){
printf("C%d = %d \n",i+1,CIN[7-i]);
}

usleep(2000000);
printf("Two gate delays in the AND-OR circuit for ci+1\n");
for(i=8;i<=15;i++){
printf("C%d = %d \n",i+1,CIN[15-i]);
}

}
