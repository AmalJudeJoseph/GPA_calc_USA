#include <iostream>
 
using namespace std;
int main(int argc, char *argv[])
{
 
	const float A = 4.0;
    	const float A_MINUS = 3.7;
	const float B_PLUS = 3.33;
	const float B = 3.0;
	const float B_MINUS = 2.7;
	const float C_PLUS = 2.33;
	const float C = 2.0;
	const float C_MINUS = 1.7;
	const float D = 1.00;
	const float F = 0.0;
	
	string grade;
 	int sem_hour=0;
    	float calctmr = 0;
    	float ttlcalc = 0;
    
    	float gpa = 0;
    	int option;
    	int sub;
    	int t_hour=0;
    	cout<<"Enter number of subjects";
    	cin>>sub;
 	for(int i=0;i<=sub;i++)
    {           
        cout<<"\nEnter grade: ";
        cin>>grade;
        cin.ignore();
        cout<<"Enter the semester hour";
        cin>>sem_hour;
        t_hour+=sem_hour;
    
			   
		if(grade == "a" || grade == "A")
		{
			calctmr = sem_hour * A;
			
		}
		else if(grade == "a-" || grade == "A-")
		{
			calctmr = sem_hour * A_MINUS;
			
		}
		else if(grade == "b+" || grade == "B+")
		{
			calctmr = sem_hour * B_PLUS;
			
		}
		else if(grade == "b" || grade == "B")
		{
			calctmr = sem_hour * B;
			
		}
		else if(grade == "b-" || grade == "B-")
		{
			calctmr = sem_hour * B_MINUS;
			
		}
		else if(grade == "c+" || grade == "C+")
		{
			calctmr = sem_hour * C_PLUS;
			
		}
		else if(grade == "c" || grade == "C")
		{
			calctmr = sem_hour * C;
			
		}
		else if(grade == "c-" || grade == "C-")
		{
			calctmr = sem_hour * C_MINUS;
			
		}
		else if(grade == "d" || grade == "D")
		{
			calctmr = sem_hour * D;
			
		}
		else if(grade == "f" || grade == "F")
		{
			calctmr = sem_hour * F;
			
		}	   
		else
		{
			cout<<"Invaild Input...";
		}   
		   
	
	             
          
          ttlcalc = ttlcalc + calctmr;
          
		  cout<<"Do you want to enter another grade (1 - Yes, 2 - no): ";
		  cin>>option;
		  if(option == 1)
		  {
		  	continue;
		  }
		  else
		  {
		  	break;
		  }      
 	}
                
          gpa = ttlcalc/t_hour;
          cout<<"Student's GPA: "<<gpa<<"\n";
    
	
	return 0;
}
