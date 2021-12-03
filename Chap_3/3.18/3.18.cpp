#include <cstdlib> 
#include <iostream> 
using namespace std; 
 
int main() { 
 
   int i, j;
    
   i = 0; 
   while (i <= 5) i++; 
   cout << "A : i = " << i << endl; 

//"A : i = 6"
    
   i = j = 0; 
   while (i <= 5) i += j++; 
   cout << "B : i = " << i << " j = " << j << endl; 
 
//"B : i = 6 j = 4"

   i = j = 0; 
   while (i <= 5) i += ++j; 
   cout << "C : i = " << i << " j = " << j << endl; 

//
 
   i = j = 0; 
   while (j <= 5) i += j++; 
   cout << "D : i = " << i << " j = " << j << endl; 
 
   i = j = 0; 
   while (j <= 5) i += ++j; 
   cout << "E : i = " << i << " j = " << j << endl; 
 
   i = j = 0; 
   while (i <= 5) i += 2; j++; 
   cout << "F : i = " << i << " j = " << j << endl; 
    
   return EXIT_SUCCESS; 
}