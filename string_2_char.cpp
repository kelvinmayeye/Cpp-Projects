#include<iostream>
using namespace std;
int main(){
	string s;
	char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
    int i,j,n,num = 0;
    char temp;
    n = sizeof(letters);
    // assigning value to string s
    cout << "Enter Password :";
    cin >> s;
    
    char string_size[s.length()];
    
 
    
    for (i = 0; i < sizeof(string_size); i++) {
        string_size[i] = s[i];
        
        for(j=0;j<n;j++){
        	
        	if(string_size[i] == letters[j]){
        		cout << "yeah";
			}else{
				cout << "bammer" << endl;
				break;
			}
		}
        
        
        cout << string_size[i]<<endl;
    }
    return 0;
}
