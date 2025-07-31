#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main () {
    int choice,fsnum,p;
    char formatted_date[20];
    time_t current_time;
    time(&current_time);
    srand(time(NULL));
    char deceased_fname[30];
	char deceased_lname[30];
    int part2 = rand() % 1000000;
    char ffname[15]; 
    char current_cnic[16];
	char gcnic[16];
	char dcnic[16];
	char bcnic[16];
    char flname[15]; 
    char yourfname[15];
    char yourlname[15];
    char bform[16];
    char mfname[15],mlname[15],bmonth[10],birthdate [10],byear[10],adress[100],gender[7];
    char death_date[50];
    char place_of_death[50];
    char cause_of_death[49];
    char groom_fname[30];
    char bride_fname[30];
	char bride_lname[43];
    char groom_lname[56];
    char marriage_date[30];
    char place_of_marriage[50];
    
    
    printf ("\n\n\t\t\tWELCOME TO THE NADRA OFFICE\n");
    printf ("\t\t\t____________________________\n\n\n");
    printf ("\t\t\t\tMessage\n\n");
    printf (" Gateway to Identity and Services.\n");
    printf (" Step into a realm of efficiency, reliability, and modern solutions.\n");
    printf (" With a legacy of trust and innovation, we're dedicated to serving you with unparalleled expertise.\n");
    printf (" At NADRA, we don't just process data but we empower lives.\n\n");
    do {
	printf (" How may I help you?\n\n");
	printf ("1)B-Form Registration\n2)CNIC Registration\n3)CNIC Renewal\n4)Death Registration\n5)Marriage Registration\n6)Exit\n");
    scanf ("%d", &choice);
    getchar();

    switch (choice) {
        case 1:
            system("cls");
			printf ("\n\nB-Form Registration\n");
            printf ("_______________________\n");
            
            printf ("Enter Your Father's Full Name: \n");
            scanf ("%s",&ffname);
            scanf ("%s",&flname);
            
            printf ("Enter Your Mother's Full Name: \n");
            scanf ("%s",&mfname);
            scanf ("%s",&mlname);
            
            printf ("Enter Your Gender: \n");
            scanf ("%s",&gender);
            
            printf ("Enter Your Full Name: \n");
            scanf ("%s",&yourfname);
            scanf ("%s",&yourlname);
            
            printf ("Enter Your Date Of Birth dd/mm/yy:: \n");
            scanf ("%s",&birthdate);
            
            printf ("How Many Siblings You Have? \n");
            scanf ("%d",&fsnum);
            getchar();
            printf ("Enter Your Adress: \n");
            fgets(adress , sizeof(adress), stdin);
            adress[strcspn(adress, "\n")] = '\0';
            
           
            printf ("_____________________________________________________________________________________________\n");
            printf ("\n--------------------------B-Form--------------------------\n");
            printf("\t\tFather's Name: %s %s\n", ffname, flname);   
            printf("\t\tMother's Name: %s %s\n", mfname, mlname);
            printf("\t\tGender: %s\n", gender);
            printf ("\t\tYour Name: %s %s\n",yourfname,yourlname);
            printf ("\t\tBirth dd/mm/yy: %s \n",birthdate);
            printf("\t\tSiblings: %d\n", fsnum);
            printf ("\t\tAdress: %s\n",adress);
            printf("\t\tYour B-Form Numbers: ");
            printf("42201-%07d-3\n",part2);
            printf ("_____________________________________________________________________________________________\n");
			break;
			
			
		case 2:
			 system("cls");	
			 printf ("New CNIC Registration\n");
             printf ("_____________________\n");
             
            printf ("Enter Your Full Name: \n");
            scanf ("%s",&yourfname);
            scanf ("%s",&yourlname);
            
            printf ("Enter Your Gender: \n");
            scanf ("%s",&gender);
            
            printf ("Enter Your Father's Full Name: \n");
            scanf ("%s",&ffname);
            scanf ("%s",&flname);
            
			printf ("Enter Your Date Of Birth dd/mm/yy: \n");
            scanf ("%s",&birthdate);
            
            printf ("Enter Your Adress: \n");
            fgets(adress , sizeof(adress), stdin);
            adress[strcspn(adress, "\n")] = '\0';
            getchar();
            
            printf ("Enter Your (13 Digits with '-') B-Form Number: \n");
            fgets(bform , sizeof(bform), stdin);
            bform[strcspn(bform, "\n")] = '\0';
            
            strftime(formatted_date, sizeof(formatted_date), "%d/%m/20%y", localtime(&current_time));
            
            printf ("Smile and Press 'p' To Take Picture\n");
            scanf ("%d",&p);
            
            
            
            
            printf ("____________________________________________________________________________________\n");
            			                                                                          
            printf("\t\t****************\n");                                                   
			printf("\t\t*****     ******\n");                                                     
			printf("\t\t****       *****\n");                                                     
			printf("\t\t****       *****\n");                                                     
			printf("\t\t*****     ******\n");                                                     
			printf("\t\t***          ***\n");                                                     
			printf("\t\t***          ***\n");                                                     
			printf("\t\t***          ***\n");                                                     
			printf("\t\t****************\n");                                                     
			printf("\t\t****************\n");                                                     
			                                                                                      
						                                                                          						                                                                          							                                                                      		                                                                                      
						                                                                           
						                                                                          
			printf ("\t\tName: %s %s\n",yourfname,yourlname);
			printf("\t\tGender: %s\n", gender);			                          
			printf("\t\tFather's Name: %s %s\n", ffname, flname);			                     
            printf ("\t\tBirth dd/mm/yy: %s\n",birthdate);			          
            printf ("\t\tAdress: %s\n",adress);			                                          
            printf ("\t\tCNIC Number: %s\n",bform);			                                     
            printf("\t\tIssue date: %s || Expiry Date: 1/7/2035 \n", formatted_date);			  
            printf ("____________________________________________________________________________________\n");
			getchar();
			break;
			
		case 3:
			system("cls");
            printf("\n\nCNIC Renewal\n");
            printf("_________________________\n");
            printf("Enter Your Full Name: \n");
            scanf("%s", &yourfname);
            scanf("%s", &yourlname);
            getchar();
            
            printf ("Enter Your Gender: \n");
            scanf ("%s",&gender);
            getchar();
            
            printf("Enter Your Current CNIC Number: \n");
            fgets(current_cnic, sizeof(current_cnic), stdin);
            current_cnic[strcspn(current_cnic, "\n")] = '\0';
            

            printf("Enter Your Date Of Birth dd/mm/yy: \n");
            scanf("%s", &birthdate);
            getchar();

            printf("Enter Your Adress: \n");
            fgets(adress, sizeof(adress), stdin);
            adress[strcspn(adress, "\n")] = '\0';

            strftime(formatted_date, sizeof(formatted_date), "%d/%m/20%y", localtime(&current_time));
            
            printf ("Smile and Press 'p' To Take Picture\n");
            scanf ("%d", &p);

            printf ("_____________________________________________________________________________________________\n");
            
            printf("\t\t****************\n");                                                   
			printf("\t\t*****     ******\n");                                                     
			printf("\t\t****       *****\n");                                                     
			printf("\t\t****       *****\n");                                                     
			printf("\t\t*****     ******\n");                                                     
			printf("\t\t***          ***\n");                                                     
			printf("\t\t***          ***\n");                                                     
			printf("\t\t***          ***\n");                                                     
			printf("\t\t****************\n");                                                     
			printf("\t\t****************\n"); 
            
            printf("\t\tName: %s %s\n", yourfname, yourlname);
            printf("\t\tGender: %s\n", gender);
            printf("\t\tCNIC Number: %s\n", current_cnic);
            printf("\t\tBirth dd/mm/yy: %s\n", birthdate);
            printf("\t\tAdress: %s\n", adress);
            printf("\t\tIssue date: %s || Expiry Date: 1/7/2035 \n", formatted_date);
            printf ("_____________________________________________________________________________________________\n");
           getchar();
		   break;
           
        case 4:
            system("cls");
			printf("\n\nDeath Registration\n");
            printf("_________________________\n");

            printf("Enter Deceased Person's Full Name: \n");
            scanf("%s", deceased_fname);
            scanf("%s", deceased_lname);

            printf("Enter Deceased Person's Gender: \n");
            scanf("%s", gender);

            printf("Enter Person's Current CNIC Number: \n");
            scanf("%s", dcnic);

            printf("Enter Date/Month/Year Of Death: \n");
            scanf("%s", death_date);

            printf("Enter Place of Death: \n");
            getchar(); 
            fgets(place_of_death, sizeof(place_of_death), stdin);
            place_of_death[strcspn(place_of_death, "\n")] = '\0';

            printf("Enter Cause of Death: \n");
            fgets(cause_of_death, sizeof(cause_of_death), stdin);
            cause_of_death[strcspn(cause_of_death, "\n")] = '\0';

            strftime(formatted_date, sizeof(formatted_date), "%d/%m/20%y", localtime(&current_time));

            printf("_____________________________________________________________________________________________\n");
            printf("\n----------------------Death Registration-----------------------\n");
            printf("\t\tDeceased Person's Name: %s %s\n", deceased_fname, deceased_lname);
            printf("\t\tGender: %s\n", gender);
            printf("\t\tPerson's CNIC Number: %s\n", dcnic);
            printf("\t\tDate/Month/Year Of Death: %s\n", death_date);
            printf("\t\tPlace of Death: %s\n", place_of_death);
            printf("\t\tCause of Death: %s\n", cause_of_death);
            printf("\t\tRegistration Date: %s\n", formatted_date);
            printf("_____________________________________________________________________________________________\n");
          break;
        case 5:
            system("cls");
		    printf("\n\nMarriage Registration\n");
            printf("_________________________\n");

            printf("Enter Groom's Full Name: ");
            scanf("%s", groom_fname);
			scanf("%s", groom_lname);

            printf("Enter Groom's CNIC Number (13 Digits with '-'): ");
            scanf("%s", gcnic);

            printf("Enter Bride's Full Name: ");
            scanf("%s", bride_fname);
            scanf("%s", bride_lname);

            printf("Enter Bride's CNIC Number (13 Digits with '-'): ");
            scanf("%s", bcnic);

            printf("Enter Date/Month/Year Of Marriage: ");
            scanf("%s", marriage_date);

            printf("Enter Place of Marriage: ");
            getchar();
            fgets(place_of_marriage, sizeof(place_of_marriage), stdin);
            place_of_marriage[strcspn(place_of_marriage, "\n")] = '\0';
 
            strftime(formatted_date, sizeof(formatted_date), "%d/%m/20%y", localtime(&current_time));
             
            printf("_____________________________________________________________________________________________\n");
            printf("\n----------------------Marriage Registration Certificate-----------------------\n");
            printf("\t\tGroom's Name: %s %s\n", groom_fname, groom_lname);
            printf("\t\tGroom's CNIC: %s\n", gcnic);
            printf("\t\tBride's Name: %s %s\n", bride_fname, bride_lname);
            printf("\t\tBride's CNIC: %s\n", bcnic);
            printf("\t\tDate/Month/Year Of Marriage: %s\n", marriage_date);
            printf("\t\tPlace of Marriage: %s\n", place_of_marriage);
            printf("\t\tRegistration Date: %s\n", formatted_date);
            printf("_____________________________________________________________________________________________\n");
         break;
        case 6:
             printf("Exiting the program...\n");
                system("cls");
                printf("Thanks For Visiting Nadra Hava A Great Day...\n");
                 break;
         default:
           printf("\nInvalid! Please select a valid option.\n\n\n");
          break;

}
}while (choice != 6);
    return 0;
}
