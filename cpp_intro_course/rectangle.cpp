#include <iostream>

using namespace std;

class Rectangle {
   public:
      double width;   // Length of rectangle
      double height;   // Height of rectangle
      double area() {return width*height;}
      void set_dimensions (double,double);
};

void Rectangle::set_dimensions (double x, double y) {
  width = x;
  height = y;
}

int main() {
   Rectangle Rec1;        // Declare Rec1 of type Rectangle
   Rectangle Rec2;


   // Rec1 specification
   Rec1.set_dimensions(5.0,6.0);

   Rec2.height = 11.0;
   Rec2.width = 3;

   double area;
   double area2;

   // area of Rec1
   area = Rec1.height * Rec1.width;
   cout << "Area of Rec1: " << area << endl;

   cout << "Area of Rec2: " << Rec2.area() << endl;

   return 0;
}