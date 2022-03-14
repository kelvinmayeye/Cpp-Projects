//this program arrange the alphabetic enter in sequence.
#include <iostream>
#include <cstring>
 
using namespace std;

int main(){

    // assigning value to string s
    string s;
    char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};

    cout << "Enter String :";
    //cin >>s;
    getline(cin, s);//get string with blank space
     
    int n = s.length();//return number of string element
 
    // declaring character array
    char char_array[n + 1],char_temp;
    int a;
 
    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());
    
    //loop for iterate the possible char to match
    for(int i = 0;i<sizeof(letters);i++){
    	char_temp = letters[i];
    	//cout << char_temp << "<<The temp" << endl;
	
    	for (int i = 0; i < n; i++){
        //cout << char_array[i] << endl;
        if(char_array[i] == char_temp){
        	cout << "[+][+] found match -> " << char_array[i] << endl;
        	//cout << "found match" << endl;	
		}
        
   	 	}
	}
    return 0;
}
