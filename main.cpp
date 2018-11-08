#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void colors(int &red, int &green, int &blue);
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
colors(red,green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
 void colors(int &a, int &b, int &c)
{
  if(a>b && b>c )
  {
    //already in order
  }
  else if (b > a && a > c) 
  {
    int temp = b;
    b = a;
    a = temp;
  }

  else if(b>c && c >a)
  {
    int temp = b;
    b= c;
    c=temp;
    int temp2 =c;
      c= a;
    a=temp2;
  } 
  else if(c > b && b > a)
    {
      int temp = c;
      c=b ;
      b=temp;
      int temp2=b;
        b=a;
        a=temp2;
      
    }
   else if(a > c && c > b)
      { 
        int temp = a;
        c = a ;
        a = temp;
      }
  else if(c > a && a > b)
      { 
        int temp = c;
        c=a ;
        a=temp;
       int  temp2=a;
        a= b;
        b= temp2;
      }



//BY THE END OF THE FUNCITON, A > B AND B > C
}
