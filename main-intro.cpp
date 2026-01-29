#include<iostream>
int main()
{
int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  
  /*
   

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;
   int b=9;
   cout<< x  <<" "<< b << " "<< *p <<endl;
    x++;
   cout<< x  <<" "<< b << " "<< *p <<endl;
    p=&b; *p=2;
  cout<< x  <<" "<< b << " "<< *p <<endl;	
  
   */
/*Example Array*/
  /*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 
*/
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */

/*
  char *pa, *pb, i, temp;
char a[SIZE] ;
  cout<<"Input string:";
  cin>>a;
  
pa = &a[0]; //pa =a;
cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
*/

}
