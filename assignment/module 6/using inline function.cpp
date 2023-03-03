#include<iostream>
using namespace std;
class line
{
   public:
              inline float mul(float x,float y)
              {
                            return(x*y);
              }
              inline float cube(float z)
              {
                            return(z*z*z);
              }
};

int main()
{
              line obj;
              float number1,number2,number3;
			  cout<<"\n MULTIPLICATION ";	
              cout<<"\nEnter 1st number :: ";
              cin>>number1;
              cout<<"\nEnter 2nd number :: ";
              cin>>number2;
              cout<<"\n\nMultiplication number is :: "<<obj.mul(number1,number2);
              cout<<"\n\n\n CUBE ";
              cout<<"\n\nEnter the cube value::";
              cin>>number3;
              cout<<"\n\nCube value of :" <<obj.cube(number3);

              return 0;
}






