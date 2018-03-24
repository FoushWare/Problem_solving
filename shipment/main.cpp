#include <iostream>
#include <string>

using namespace std;
string zone1[]={"Cairo" ,"Giza"};
string zone2[]={"Alexandria","Port Said", "Ismailia"," Suez"};
string zone3[]={"Al Obour City", "10th of Ramadan City","Badr City"," Al Shorouk City"," Al Sadat City"," Shoubra El Khema",
                "Qaliyobiya","Minoufiya","Sharqiya","Gharbiya","Daqahliya","Behaira","Damietta","Kafr el Sheikh"};
string zone4[]={"Fayoum","Beni Suef","Miniya","Assiut","Sohag"};
string zone5[]={"Qena","Luxor","Aswan"
                "Red Sea","South Sinai","North Coast","Matrouh"};
string zone6[]={"New Valley","North Sinai","Abu Simbel","Marsa Alam","Salloum","Halayeb","Shlateen"};

string whichZone(string test);
double cost(string origin,string des);


int main()
{
string a;
getline (cin, a);

string origin=a;
  getline (cin, a);
string des=a;


origin=whichZone(origin);
des=whichZone(des);


    //check the origin's zone



  //  string test="New Valley";

    //cout<<whichZone(test)<<endl;



    cout<<cost(origin,des)<<endl;



























    return 0;
}


string whichZone(string test){
    string zone="";
    for( unsigned int a = 0; a < sizeof(zone1)/sizeof(zone1[0]); a = a + 1 ){

        if(test==zone1[a]){
            zone="zone1";


        }else{

        }

    }

    for( unsigned int a = 0; a < sizeof(zone2)/sizeof(zone2[0]); a = a + 1 ){

        if(test==zone2[a]){
            zone="zone2";


        }else{

        }

    }


    for( unsigned int a = 0; a < sizeof(zone3)/sizeof(zone3[0]); a = a + 1 ){

        if(test==zone3[a]){
            zone="zone3";


        }else{

        }

    }

    for( unsigned int a = 0; a < sizeof(zone4)/sizeof(zone4[0]); a = a + 1 ){

        if(test==zone4[a]){
            zone="zone4";


        }else{

        }

    }



    for( unsigned int a = 0; a < sizeof(zone5)/sizeof(zone5[0]); a = a + 1 ){

        if(test==zone5[a]){
            zone="zone5";


        }else{

        }

    }


    for( unsigned int a = 0; a < sizeof(zone6)/sizeof(zone6[0]); a = a + 1 ){

        if(test==zone5[a]){
            zone="zone6";

        }else{

        }

    }
    return zone;
}




double cost(string origin,string des){



if(origin=="zone1"&&des=="zone1"){
    return 20;
}else if(origin=="zone1"&&des=="zone2"){
    return 25;
}else if(origin=="zone1"&&des=="zone3"){
    return 35;
}else if(origin=="zone1"&&des=="zone4"){
    return 40;
}else if(origin=="zone1"&&des=="zone5"){
    return 60;
}else if(origin=="zone1"&&des=="zone6"){
    return 125;
}else{}



return 0;
}









/*
for( unsigned int a = 0; a < sizeof(zone1)/sizeof(zone1[0]); a = a + 1 ){
    cout << "value of text: " << zone1[a] << endl;

}*/
