#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
    
    if( x >90.0){
       return 'A' ;
    }
    else if(x>75.0){
        return 'B' ;
    }   
    else if(x>60.0){
        return 'C' ;
    }
    else if(x>45.0){
        return 'D' ;
    }
    else{
        return 'F' ;
    }
    
 }



int main(){

	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
    
	while(i < N){
       
		cout << "Name of student " << i+1 << ": ";
        cin.ignore();
        getline(cin,name[i]);
		
        cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
        
		i++;
	}
	
	int j = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(j < N){
		cout << setw(25) << name[j] << setw(8) << score[j] << setw(8) << findGrade(score[j]) << "\n";
		j++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}