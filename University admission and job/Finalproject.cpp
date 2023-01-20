#include <iostream>
#include<string.h>
using namespace std;

class university{
	public:
	
		void select_university(){
				int a;
cout<<"\t\t\t ________________________________________________________________________"<<endl; 
cout<<" \t\t\t|                                                                       |"<<endl; 
cout<<" \t\t\t|                   SELECT ANY ONE UNIVERSITY                           |"<<endl;
cout<<" \t\t\t|               Press 1 for KING EDWARD MEDICAL UNIVERSITY              |"<<endl;
cout<<" \t\t\t|               Press 2 for PUNJAB UNVERSITY.                           |"<<endl;
cout<<" \t\t\t|               Press 3 for RIPHAH.                                     |"<<endl;
cout<<" \t\t\t|               Press 4 for UET Texila.                                 |"<<endl;
cout<<" \t\t\t|               Press 5 for FAST Islamabad.                             |"<<endl;
cout<<" \t\t\t|               Press 6 to Exit.                                        |"<<endl;
cout<<" \t\t\t|_______________________________________________________________________|"<<endl; 
cout<<" \t\t\t               Enter your choice: ";
cin>>a;
system("cls");
 switch(a){
 	case 1:
 		{
 			cout<<"\t\t\t___________________________________________________________"<<endl;
 			cout<<"\t\t\t|         You selected KING EDWARD MEDICAL UNIVERSITY      |"<<endl;
			cout<<"\t\t\t|                      WELCOME                             |"<<endl;
			cout<<"\t\t\t|                   ENTER YOUR DETAILS                     |"<<endl;
			cout<<"\t\t\t|__________________________________________________________|"<<endl;
			 break;  
		 }
		 case 2:
		 	{
		 	cout<<"\t\t\t ____________________________________________________________"<<endl;
 			cout<<"\t\t\t|                 You selected PUNJAB UNIVERSITY             |"<<endl;
			cout<<"\t\t\t|                          WELCOME                           |"<<endl;
			cout<<"\t\t\t|                     ENTER YOUR DETAILS                     |"<<endl;
			cout<<"\t\t\t|____________________________________________________________|"<<endl;
			 break; 
		 		
			 }
			 case 3:
			 	{
			cout<<"\t\t\t ___________________________________________________________"<<endl;
 			cout<<"\t\t\t|          You selected RIPHAH UNIVERSITY LAHORE            |"<<endl;
			cout<<"\t\t\t|                      WELCOME                              |"<<endl;
			cout<<"\t\t\t|                 ENTER YOUR DETAILS                        |"<<endl;
			cout<<"\t\t\t|___________________________________________________________|"<<endl;
			 break; 
				 }
			 	case 4:
			 		{
			cout<<"\t\t\t ____________________________________________________________"<<endl;
 			cout<<"\t\t\t|                You selected UET TAXILA                     |"<<endl;
			cout<<"\t\t\t|                     WELCOME                                |"<<endl;
			cout<<"\t\t\t|               ENTER YOUR DETAILS                           |"<<endl;
			cout<<"\t\t\t|____________________________________________________________|"<<endl;
			 break; 
					 }
			 case (5):
			 	{
		    cout<<"\t\t\t ______________________________________________________________"<<endl;
 			cout<<"\t\t\t|                   You selected FAST ISLAMABAD                |"<<endl;
			cout<<"\t\t\t|                           WELCOME                            |"<<endl;
			cout<<"\t\t\t|                    ENTER YOUR DETAILS                        |"<<endl;
			cout<<"\t\t\t|______________________________________________________________|"<<endl;
			 break;
				 }
				 case (6):
				 	{
					 
				 	exit(0);
				 }
                    }
                 }
		
};
class jobs{
	public:
		void select_department(){
			int b;
cout<<"\t\t\t   __________________________________________________________________________"<<endl; 
cout<<"\t\t\t  |                                                                          |"<<endl; 
cout<<"\t\t\t  |                 Present departments are as follows                       |"<<endl; 
cout<<"\t\t\t  |                      Press 1 for LAHORE POLICE                           |"<<endl;
cout<<"\t\t\t  |                      Press 2 for TEACHING JOBS                           |"<<endl;
cout<<"\t\t\t  |                      Press 3 for FPSC Govt. JOBS                         |"<<endl;
cout<<"\t\t\t  |                      Press 4 to exit.                                    |"<<endl;
cout<<"\t\t\t  |__________________________________________________________________________|"<<endl; 
cout<<"\t\t\t                        Enter your choice:  ";
cin>>b;
	
	//APPLYING SIWTCH STATEMENT TO SELECT DEPARTMENT
	switch(b){
		case(1):
			{
			 cout<<"\t\t\t_____________________________________________________________"<<endl;
 			cout<<"\t\t\t|             You selected LAHORE POLICE                      |"<<endl;
			cout<<"\t\t\t|                      WELCOME                                |"<<endl;
			cout<<"\t\t\t|                 ENTER YOUR DETAILS                          |"<<endl;
			cout<<"\t\t\t|_____________________________________________________________|"<<endl;
		break;
			}
			case(2):
				{
			 cout<<"\t\t\t____________________________________________________________"<<endl;
 			cout<<"\t\t\t|             You selected TEACHING JOBS                     |"<<endl;
			cout<<"\t\t\t|                         WELCOME                            |"<<endl;
			cout<<"\t\t\t|                  ENTER YOUR DETAILS                        |"<<endl;
			cout<<"\t\t\t|____________________________________________________________|"<<endl;
		 
		 	break;
				}
				case (3):
					{
		    cout<<" ____________________________________________________________"<<endl;
 			cout<<"|            You selected FPSC Govt. JOBS                   |"<<endl;
			cout<<"|                       WELCOME                             |"<<endl;
			cout<<"|                 ENTER YOUR DETAILS                        |"<<endl;
			cout<<"|___________________________________________________________|"<<endl;
			
				break;
					}
					case(4):
						{
						
						exit(0);
					}
						
	}
	
		}
		
};
                                               //class of biodata
class biodata{
	protected:
		string name;
		string father_name;
		string cnic_no;
		string candidate_city_name;
		
		public:
			void get_name(){
				cout<<"\t\t\t__________________________________________________________________________"<<endl;
				cout<<"\t\t\t                      ENTER YOUR NAME :    ";
				cin>>name;

			}
			
				void name2(){
				
		     
			    cout<<"\t\t\t                    ENTER FATHER NAME :     ";
			    cin>>father_name;
		
			}
			void cnic(){
				
			
			
			    cout<<"\t\t\t               ENTER CNIC NUMBER(XXXXX-XXXXXXX-X) :     ";
			    cin>>cnic_no;
			 
			}
			void candidate_city(){
			 
			
			    cout<<"\t\t\t                     ENTER CITY NAME :       ";
			  cin>>candidate_city_name;
			    cout<<"\t\t\t___________________________________________________________________________"<<endl;
			}
							
            };
            //class of marks which informs us if student is elligble for admission or not 
  class marks_detail{
  	protected:
  		float matric_marks;
  		float total_mm;
		  float perc_matric;
		  float fsc_marks;
		   float total_fscm;
		   float perc_fsc;
		   public:
		   	
		   	void matric_m(){
		   		cout<<"\t\t\t___________________________________________________________________________"<<endl;
		   		cout<<"\t\t\t                          ENTER YOUR MATRIC MARKS :       ";
		   		cin>>matric_marks;
		   	
		   		cout<<"\t\t\t                 ENTER YOUR TOTAL MATRIC MARKS :         ";
		   		cin>>total_mm;
	
		   		cout<<"\t\t\t               YOUR MATRIC MARKS PERCENTAGE :         ";
				perc_matric=(matric_marks*100)/total_mm;
		   		cout<<perc_matric<<endl;
		   		cout<<"\t\t\t            YOUR MATRIC MARKS ARE :"<<perc_matric<<"%"<<endl;
				   
		   		if(perc_matric>60){
		   		cout<<"\t\t\t        YOU ARE  ELIGIBLE FOR ADMISSION         "<<endl;
			}
			else{
			cout<<"\t\t\t   ! YOU'RE NOT ELIGIBLE FOR ADMISSION !       "<<endl;
				  exit(0);
				   }
		   		cout<<"\t\t\t__________________________________________________________________________"<<endl;
			   }
		   
            
  		   	void fsc_mark(){
		   		cout<<"\t\t\t___________________________________________________________________________"<<endl;
		   		cout<<"\t\t\t         ENTER YOUR FSC MARKS :      ";
		   		cin>>fsc_marks;
		   	
		   		cout<<"\t\t\t        ENTER YOUR TOTAL FSC MARKS :    ";
		   		cin>>total_fscm;
		   	
		   		cout<<"\t\t\t         YOUR FSC MARKS PERCENTAGE :       ";
		   		perc_fsc=(fsc_marks*100)/total_fscm;
		   		cout<<perc_fsc<<endl;
		   		cout<<"\t\t\t         YOUR FSC MARKS ARE :     "<<perc_fsc<<"%"<<endl;
		   		if(perc_fsc<60){
		   		cout<<"\t\t\t                    ! YOU ARE NOT ON MERIT !                             ";
				  exit(0);
				   }
		   		cout<<"\t\t\t___________________________________________________________________________"<<endl;
			   }
		};
class age{
           	protected:
           		int age_applicant;
           		public:
           			void candidate_age(){
           				cout<<"\t\t\t__________________________________________________________________________"<<endl;
           				cout<<"\t\t\t                     ENTER AGE OF CANDIDATE :     ";
           				cin>>age_applicant;
           				cout<<"\t\t\t___________________________________________________________________________"<<endl;
           			
                     
if(age_applicant<16 || age_applicant>22)
  {
                        cout<<"\t\t\t     Your age is not on merit. Sorry you are not eligible.     "; 
exit(0); 
 } 
           				
					   }
		   }; 
            //multiplle inheritance
            //ROLL.NO SLIP
class roll_noslip:public biodata, public marks_detail, public age{
            	public:
            
					void voucher() {
cout<<"  \t\t\t__________________________________________________________________________________"<<endl; 
cout<<" \t\t\t|                                                                                 |"<<endl; 
cout<<" \t\t\t|           **********  ROLL NO SLIP OF APPLICANT **********                      |"<<endl; 
cout<<" \t\t\t|_________________________________________________________________________________|"<<endl;
cout<<" \t\t\t|                                                                                 | "<<endl; 
cout<<" \t\t\t|              Name: "<<name<<"                                                         |"<<endl;
cout<<" \t\t\t|              Father Name: "<<father_name<<"                                               |"<<endl; 
cout<<" \t\t\t|              CNIC of Candidate: "<<cnic_no<<"                                  |"<<endl; 
cout<<" \t\t\t|              City of Candidate : "<<candidate_city_name<<"                                         |"<<endl; 
cout<<" \t\t\t|              Age of Candidate is: "<<age_applicant<<"years"<<"                                       |"<<endl;
cout<<" \t\t\t|              Marks of Candidate in matric are: "<<perc_matric<<"%                              |"<<endl; 
cout<<" \t\t\t|              Marks of Candidate in FSC are: "<<perc_fsc<<"%                            |"<<endl; 
cout<<" \t\t\t|_________________________________________________________________________________|"<<endl;
cout<<" \t\t\t|                                                                                 |"<<endl;
cout<<" \t\t\t|                   ROLL NO: 123X90X80.                                           |"<<endl;
cout<<" \t\t\t|                   DATE:  10TH JANUARY 2023.                                     |"<<endl; 
cout<<" \t\t\t|                   TIME:  10:00AM TO 01:00PM.                                    |"<<endl;
cout<<" \t\t\t|                   VENUE:  PC HOTEL LAHORE.                                      |"<<endl;
cout<<" \t\t\t|________________________________________________________________________________ |"<<endl;
cout<<" \t\t\t|                                                                                 |"<<endl;
cout<<" \t\t\t| NOTE: YOU ARE ALLOWED IN EXAMINATION HALL ONLY IN PRESENCE OF FOLLOWING.        |"<<endl; 
cout<<" \t\t\t| 1) PAID FEE CHALlAN OR STUDENT COPY.                                            |"<<endl; 
cout<<" \t\t\t| 2) ORIGNAL CNIC IN CASE OF LESS THAN 18YRS B-FORM IS REQUIRED.                  |"<<endl; 
cout<<" \t\t\t| 3) ALL ORIGNAL EDUCATIONAL DOCUMENTS ARE REQUIRED.                              |"<<endl;
cout<<" \t\t\t|_________________________________________________________________________________|"<<endl; 
            				//challan form with 3 different dates and fees.
cout<<"\t\t\t  _________________________________________________"<<endl; 
cout<<"\t\t\t |                                                 |"<<endl; 
cout<<"\t\t\t | *****FEE CHALAN*****                            |"<<endl;
cout<<"\t\t\t |_________________________________________________|"<<endl;
cout<<"\t\t\t |                                                 |"<<endl;
cout<<"\t\t\t | Test fee  |  1500-RS   |  Date  |  12-07-2019   |"<<endl;
cout<<"\t\t\t | Test fee  |  2500-RS   |  Date  |  22-07-2019   |"<<endl;
cout<<"\t\t\t | Test fee  |  3500-RS   |  Date  |  30-07-2019   |"<<endl;
cout<<"\t\t\t |_________________________________________________|"<<endl; 
cout<<"\t\t\t | NAME: "<<name<<"                                      | "<<endl; 
cout<<"\t\t\t | FATHER NAME: "<<father_name<<"                            |"<<endl; 
cout<<"\t\t\t | CNIC of Candidate: "<<cnic_no<<"               |"<<endl; 
cout<<"\t\t\t |_________________________________________________|"<<endl;  
  }  
  };
				
					
		int main(){
			//Front page
			cout<<"\t\t\t __________________________________________________________________"<<endl;
			cout<<"\t\t\t|                      OOP FINAL PROJECT                           |"<<endl;
	    	cout<<"\t\t\t|         UNIVERSITY ADMISSION AND JOB APPLICATION SYSTEM          |"<<endl;
			cout<<"\t\t\t|                     BY :   NEHA SHAKOOR                          |"<<endl;
			cout<<"\t\t\t|__________________________________________________________________|"<<endl;
		//class objects
			jobs job_adv;
			university uni_add;
			 
 {
 int c;
cout<<"\t\t\t___________________________________________________"<<endl;
cout<<"\t\t\t|                                                  |"<<endl; 
cout<<"\t\t\t|\tWhat kind of ads you are searching for?    |"<<endl;
cout<<"\t\t\t|\tFollowing are the choices.                 |"<<endl;
cout<<"\t\t\t|\tPress 1 for jobs advertisements            |"<<endl;
cout<<"\t\t\t|\tPress 2 for universities admissions.       |"<<endl;
cout<<"\t\t\t|\tPress 3 to exit.                           |"<<endl;
cout<<"\t\t\t|__________________________________________________|"<<endl;
 cout<<"\t\t\t             Your choice: ";
 cin>>c;
 switch(c)
 	{
 		case 1:
 			{
 				cout<<"\t\t\t __________________________________________________________________"<<endl;
 				cout<<"\t\t\t|                  YOU SELECTED JOB ADVERTISEMENTS!                |"<<endl;
 				cout<<"\t\t\t|__________________________________________________________________|"<<endl;
 				job_adv.select_department();
 				break;
			 }
			 case 2:
			 	{
			 		cout<<"\t\t\t ____________________________________________________________"<<endl;
			 		cout<<"\t\t\t|             YOU SELECTED UNIVERSITY ADMISSIONS :)          |"<<endl;
			 		cout<<"\t\t\t|____________________________________________________________|"<<endl;
			 		uni_add.select_university();
			 		
			 		break;
				 }
				 case 3:
				 	{
				 		exit(0);
				 		
					 }
	 }
}
//MAKING OBJECTS
//	 marks_detail x;
     roll_noslip ticket;
     //Calling functions for rollno slip
               ticket.get_name();
                ticket.name2();
                ticket.cnic();
                ticket.candidate_city();
                ticket.matric_m();
                ticket.fsc_mark();
                ticket.candidate_age();
                ticket.voucher();

 return 0; 
		}
            
