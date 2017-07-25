
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




