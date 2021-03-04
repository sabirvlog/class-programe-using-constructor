#include<iostream>
using namespace std;
  
//  Created a class "Box"
 class Box {  
	public:
		double length;  // Length of a Box
		double width;   // Width of a Box
		double height;  // Height of a Box
}Box1,Box2;
   int main(){
   	           Box Box1;  // Declared object Box1 of type Box 
   			   Box Box2;  // Declared object Box2 of type Box
   			   double Volume=0.0; // Local variable for storing the volume of the Box
   			   
//   		specificaion of Box1.
				Box1.height=6;
				Box1.length=8;
				Box1.width=9;				
				
//			specification of Box2.
			   Box2.height=12;
			   Box2.length=10;
			   Box2.width=17;
//		    Volume of Box1.
			Volume=Box1.height * Box1.length * Box1.width;
//		    Print volume of Box1.
			cout<<"Volume of Box1= "<<Volume<<"\n"<<endl;
									   
//			Volume of Box2.
			Volume=Box2.height * Box2.length * Box2.width;		
//			Print volume of Box2.
   			cout<<"Volume of Box2= "<<Volume<<"\n"<<endl;
   			return 0;
   }
