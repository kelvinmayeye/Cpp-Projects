#include<iostream>
 using namespace std;
 
 class Publication{
 	public:
 		string title;
 		float price;
 		
 		virtual void getData(){//iii
 			cout << "Enter Title ";
 			cin >> title;
 			cout << "Enter price ";
 			cin >> price;
		 }
		 
		 virtual void putData(){//iii
		 	cout << "The title " << title << " and " << price;
		 }
 };
 
 class Book: public Publication{
 	public:
 		int page_count;
 		
 		void getData(){
 			cout << "Enter page count :";
 			cin >> page_count;
		 }
		 
		 void putData(){
		 	cout  << "\nPage Count :";
		 	cout << page_count <<endl;
		 }
 };
 
 class Tape: public Publication{
 	public:
 		float playin_time;
 		
 		void getData(){
 			cout << "Playing time ";
 			cin >> playin_time;
		 }
		 
		 void putData(){
		 	cout << "\nPlaying Time is :";
		 	cout << playin_time;
		 }
 };
 
 int main(){
 	
 	Book obj;
 	obj.getData();
 	obj.putData();
 	
 	Tape objT;
 	objT.getData();
 	objT.putData();
 	
 }
