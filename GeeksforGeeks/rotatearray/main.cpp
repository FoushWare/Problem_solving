#include<bits/stdc++.h>
using namespace std;

int main() {
    int Tn,N,D;
    cin>>Tn;
    for (int i = 0; i < Tn; ++i) { //T denoting the number of testcases

        cin>>N>>D; // N denoting the size of the array D denoting the number size of the rotation
        int arr[N-D];
        int temparr[D];
        int mergedArr[N];
        int Ioriginal=0;

        for(int i=0 ; i<N ; i++) // read the array from the terminal
        {
            if(i<D){
                scanf("%d",&temparr[i]);

            }
                else{

                scanf("%d",&arr[Ioriginal]);
                ++Ioriginal;

            }

        }
        Ioriginal=0;

        /******************************** Merge two arrays **********************/
    for(int i=0;i<N;i++){
        if(i>N-D-1){
            mergedArr[i] = temparr[Ioriginal];
             ++Ioriginal;

        }else{
            mergedArr[i] = arr[i];
        }
    }

    /******  print the output arrays   *****/

    for(int i=0;i<N;i++){
        cout<<mergedArr[i]<<' ';
    }

    cout<<endl;






    }
    return 1;

}
