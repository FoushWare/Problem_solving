/*************************************************************************
    Year:2017                                                         *
    month: 11                                                      *
    DAY:20                                                           *
    DATE:23/11/2017                                                         *
   Author: Ahmed Fouad (Foush)
*************************************************************************/
#include<bits/stdc++.h>

//macro//
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define ll long long int
#define ld long double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
//typedef//
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
//Constants
const int MAX=800;
int main()
{

/*
 *
 *
 *This solution was wrong in the test case 81 cause i used prodfoce want to add all the
 * matrix and check if the sum is Zero for equilbrium
 * But the Math was wrong so the fact is sumation x=0 and y=0 and z=0
 *
 *
int k_matrix,iteration,sum=0,k_next=0;
std::cin>>k_matrix;
iteration=k_matrix * 3;

while(iteration){

std::cin>>k_next;
sum+=k_next;
--iteration;

}

if(sum == 0){  std::cout<<"YES";}
if(sum != 0){        std::cout<<"NO";}



*/


    /*Second solution*/


int MatNumber;
int xVertix,yVertix,zVertix;
int sumX=0,sumY=0,sumZ=0;

std::cin>>MatNumber;

for(int i=0;i<MatNumber;i++){

    std::scanf("%d %d %d",&xVertix,&yVertix,&zVertix);
    sumX += xVertix;
    sumY += yVertix;
    sumZ += zVertix;



}


if(sumX==0 &&sumY==0&&sumZ==0){std::cout<<"YES";}
else{std::cout<<"NO";}

























    return 0;
}
