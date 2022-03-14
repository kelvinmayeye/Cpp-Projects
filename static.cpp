#include<iostream>
 using namespace std;
 
 int main(){
 	
 	static int  k = 1;
 	k++;
 	main();
 }
