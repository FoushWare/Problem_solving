
/************************************************************************
    Year:2017                                                           *
    month: 7                                                            *
    DAY:24                                                              *
    DATE:7/24/2017                                                      *
   Author: Ahmed Fouad (Foush)                                          *
   Subject:OOP programing                                               *
*************************************************************************/
#include <iostream>
using namespace std;

/* inheritance   tutorialsPoint

//Base class
class Shape     {
    public:
        void setWidth(int w){
           width=w;
        }
        void setHeight(int h){
           height=h;
        }
    protected:
        int width;
        int height;



};

//Derived class
class Rectangle:public Shape{
        public:
            int getArea(){
                return (width * height);
            }
};

int main()
{

    Rectangle Rect;


    Rect.setWidth(5);
    Rect.setHeight(7);

//print the area of the object
    cout<<"Total Area:"<<Rect.getArea()<<endl;


    return 0;
}
*/
/* inheritance wikibooks
class MyClass {
  protected:
         int age;
  public:
         void sayAge(){
             this->age = 22;
             cout << age;
         }
};

class MyNewClass : public MyClass {

};

int main() {



// This will not work cause protected can't be accesssed from outside
//   MyClass my;
//  my.age=60;
// my.sayAge();


  MyNewClass *a=new MyNewClass();

  a->sayAge();

  return 0;

}
*/

/*overloading tutorial point
class printData {
   public:
      void print(int i) {
         cout << "Printing int: " << i << endl;
      }

      void print(double  f) {
         cout << "Printing float: " << f << endl;
      }

      void print(const char* c) {
         cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;

   // Call print to print integer
   pd.print(5);

   // Call print to print float
   pd.print(500.263);

   // Call print to print character
   pd.print("Hello C++");

   return 0;
}
*/

/*******operator overloading **************************
 * First link:
         * what are the advantage of operator overloading ?

           see link: quora here =>https://www.quora.com/What-are-the-advantages-of-operator-overloading

           summary of it -> 1-it allow the core design principle **that make the user define it's function
           and operate as the built-in functions

        2- allow  EDSLs    like useing >> <<
 *second link:
          see link:    http://www.studytonight.com/cpp/operator-overloading.php
 *Third Link
          see link:https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
          Note :don't forget to check the example at the end of the page  i.e(unary,binary)operator

***********************************************************

*/

/* unary operator overloading
 * The unary operators operate on a single operand   like increment ++ and decrement -- and  negate -
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
   public:
      // required constructors
      Distance(){
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i){
         feet = f;
         inches = i;
      }
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      // overloaded minus (-) operator
      Distance operator- () {
         return Distance(-feet, -inches);
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);

   Distance d1=-D1;                     // apply negation
   d1.displayDistance();    // display D1

  Distance d2=-D2;                     // apply negation
   d2.displayDistance();    // display D2

   return 0;
}


*/

/*Binary operator overloading i.e(+,-,*)
class Box {
   public:

      double getVolume(void) {
         return length * breadth * height;
      }

      void setLength( double len ) {
         length = len;
      }

      void setBreadth( double bre ) {
         breadth = bre;
      }

      void setHeight( double hei ) {
         height = hei;
      }

      // Overload + operator to add two Box objects.
      Box operator+(const Box& b) {
// Following is the example to show the concept of operator over loading using a member function.
// Here an object is passed as an argument whose properties will be accessed using this object,
//the object which will call this operator can be accessed using this operator as explained below:

         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }

   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};

// Main function for the program
int main( ) {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}

*/

/* relation operator overloading
 *here are various relational operators supported by C++ language like (<, >, <=, >=, ==, etc.)
 *  which can be used to compare C++ built-in data types
 *
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
   public:
      // required constructors
      Distance(){
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i){
         feet = f;
         inches = i;
      }
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
      // overloaded < operator
      bool operator <(const Distance& d) {
         if(feet < d.feet) {
            return true;
         }
         if(feet == d.feet && inches < d.inches) {
            return true;
         }
         return false;
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11);

   if( D1 < D2 ) {
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }

   return 0;
}
*/

/*input and output stream overloading this will make me enter and out value of type object
class Distance{
   private:
        int feet;
        int inches;
   public:
        Distance(){
            feet=0;
            inches=0;
        }
   Distance(int f,int i){
      feet=f;
      inches=i;
   }

   friend ostream &operator<<(ostream &output,
       const Distance &D){
       output<<" F : "<< D.feet<<" I: "<<D.inches;
       return output;

   }

   friend istream &operator>>(istream &input,

       Distance &D  ){

       input >> D.feet >> D.inches;
       return input;
   }

};

int main(){

   Distance D1(11,10),D2(5,11),D3;

   cout<<"Enter the value of object"<<endl;
   cin>>D3;
   cout<<"first Distance : "<<D1<<endl;
   cout<<"second Distance : "<<D2<<endl;
   cout<<"third Distance : "<<D3<<endl;

   return 0;

}
*/

/*operator overloading increment prefix and postfix

class Time{
   private:
        int hours;
        int minutes;
   public:
        //default constractor
        Time(){
            hours=0;
            minutes=0;
        }
        Time(int h,int m){
            hours=h;
            minutes=m;
        }


        void displayTime(){
            cout<<" h: "<<hours<<" m: "<<minutes <<endl;

        }

       Time operator ++(){
            ++minutes;
           if(minutes >= 60)
           {
               ++hours;
               minutes-=60;

           }
           return Time(hours,minutes);
       }

       Time operator ++(int){
         Time T(hours,minutes);

          ++minutes;
            if(minutes >= 60)
           {
               ++hours;
               minutes-=60;

           }
           return T;

       }
};

int main() {
   Time T1(11, 59), T2(10,40);

   ++T1;                    // increment T1
   T1.displayTime();        // display T1
   ++T1;                    // increment T1 again
   T1.displayTime();        // display T1

   T2++;                    // increment T2
   T2.displayTime();        // display T2
   T2++;                    // increment T2 again
   T2.displayTime();        // display T2
   return 0;
}

*/

/*operator overloading for assignment (=) it work like constractor

class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
   public:
      // required constructors
      Distance(){
         feet = 0;
         inches = 0;
      }

      Distance(int f, int i){
         feet = f;
         inches = i;
      }

      void operator = (const Distance &D ) {
         feet = D.feet;
         inches = D.inches;
      }

      // method to display distance
      void displayDistance() {
         cout << "F: " << feet <<  " I:" <<  inches << endl;
      }

};

int main() {
   Distance D1(11, 10), D2(5, 11);

   cout << "First Distance : ";
   D1.displayDistance();
   cout << "Second Distance :";
   D2.displayDistance();

   // use assignment operator
   D1 = D2;
   cout << "First Distance :";
   D1.displayDistance();

   return 0;
}


*/
/* operator overloading function caller operator ()  it allow varity of parameters
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
   public:
      // required constructors
      Distance(){
         feet = 0;
         inches = 0;
      }

      Distance(int f, int i){
         feet = f;
         inches = i;
      }

      // overload function call
      Distance operator()(int a, int b, int c) {
         Distance D;
         // just put random calculation
         D.feet = a + c + 10;
         D.inches = b + c + 100 ;
         return D;
      }

      // method to display distance
      void displayDistance() {
         cout << "F: " << feet <<  " I:" <<  inches << endl;
      }

};

int main() {
   Distance D1(11, 10), D2;

   cout << "First Distance : ";
   D1.displayDistance();

   D2 = D1(10, 10, 10); // invoke operator()
   cout << "Second Distance :";
   D2.displayDistance();

   return 0;
}

*/
/* operator overloadin [] for enchanche the array in C++
const int SIZE = 10;

class safearay {
   private:
      int arr[SIZE];
   public:
      safearay()  {
         register int i;
         for(i = 0; i < SIZE; i++){
            arr[i] = i;
         }
      }

      int &operator[](int i) {
         if( i > SIZE ) {
               cout << "Index out of bounds" <<endl;
               // return first element.
               return arr[0];
         }
         return arr[i];
      }
};

int main() {
   safearay A;

   cout << "Value of A[2] : " << A[2] <<endl;
   cout << "Value of A[5] : " << A[5]<<endl;
   cout << "Value of A[12] : " << A[12]<<endl;

   return 0;
}
*/
