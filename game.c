index.c
Who has access
T

System properties
Type
C
Size
16 KB
Storage used
16 KB
Location
quiz game
Owner
Tikesh
Modified
25 Mar 2022 by Tikesh
Opened
07:41 by me
Created
07:39
Add a description
Viewers can download
#include <stdio.h>
#include<stdlib.h>
void help();
void start();
int i, a;
char name[200];

int main()
{
    
    
	printf("\n *******************************************************************************************************************************\n");
	printf("\n *******************************************************************************************************************************\n");
	printf("   \n");
	printf("   \n");
	printf("      *****	 **  	    **  *************  *************       	     \n");
	printf("    ** 	   **	 **	    **	*************  *************    		    \n");
	printf("  ** 	     **  **	    **	     **			***                       \n");
	printf("  ** 	     **	 **	    **	     **		     ***                     \n");
	printf("  **  	     **	 **	    **	     **		   ***	                         \n");
	printf("  **  	**   **	 **	    **	     **		 ***	                           \n");
	printf("   **     ** **	  **	   **	     **	       ***	                    \n");
	printf("    **	   **	   **	  **	*************  *************           \n");
	printf("      *****  **	      ****	*************  *************          \n");
	printf("   \n");
	printf("   \n");
	printf("						   ******	 ***        ****      ****  *************	 \n");
	printf("					         ***    ***     ******      ** **     ** **  ************	\n");
	printf("					        **	 **    **    **     **  **   ** **  **		\n");
	printf("					       **	 **   **      **    **   ** **  **  **		\n");
	printf("					       **	     **        **   **	 ****   **  *******	\n");
	printf("					       **     *****  **	****** **   ** 	        **  **		\n");
	printf("					        **	 **  **	       **   **	        **  **		\n");
	printf("					         ***	 **  **	       **   **		**  ***********	\n");
	printf("					           ********  **         **  **	        **  ************	\n");
	printf("   \n");
	printf("   \n");
	printf("\n *******************************************************************************************************************************\n");
	printf("   \n");
	printf("   \n");
	printf("\t\t **         **  ***********  ***             *******     *******     ****      ****  ***********                               \n");
	printf("\t\t **         **  **           ***            **     *   **       **   ** **    ** **  **                       \n");
	printf("\t\t **         **  **           **            **         **         **  **  **  **  **  **                             \n");
	printf("\t\t **   ***   **  **#####      **            **         **         **  **   ****   **  **#####                            \n");
	printf("\t\t **  ** **  **  **           **            **         **         **  **          **  **          \n");
	printf("\t\t ** **   ** **  **           ************   **     *   **       **   **          **  **                      \n");
	printf("\t\t ****     ****  ***********  ************    *******     *******     **          **  ***********                      \n");
	printf("   \n");
	printf("   \n");
	printf("\n *******************************************************************************************************************************\n");
    	printf("\n *******************************************************************************************************************************\n");
    	printf("\n \t\t\t>> Press 1 to Start the QUIZ GAME \n");
    	printf("\n \t\t\t>> Press 2 for HELP \n");
    	printf("\n \t\t\t>> Press 3 to QUIT the QUIZ GAME \n");
    	scanf(" %d", &i); 
    	printf("\n *******************************************************************************************************************************\n");
    	printf("   \n");
	switch (i)
    	{
    		case 1:start();
			break;
		case 2:help();
			break;
		case 3: 									// case 3 for quiting the game
        		break;
		default:printf("\n\n\t\t\t Invalid input !!!!");					// if choice is not 0 or 1
    	}
    	
    
    return 0;
}

void start()
{
 											   /* defining conditions for case 1 */
    int count=0;	
    printf(" \n \t\t\t Enter Your Name    ");
    scanf(" %s", name);
    printf("\n *******************************************************************************************************************************\n");
    
    printf("\n\t\t\t The Player Name is :  %s", name);
    printf("\n\n\t\t\t [ Select And Enter The Answer Number ]");
    printf("\n");
    printf("\n *******************************************************************************************************************************\n");
    
    printf("\n\t\t\t Q1.WHAT IS THE CAPITAL OF THE INDIA ?\n");
    printf(" \n\n\t\t\t 1. DELHI \n\t\t\t 2.MUMBAI \n\t\t\t 3.KARNATAKA \n\t\t\t 4.KERLA\n\n\t");
    scanf(" %d", &a);
    
    if (a == 1)
    {											 // winning condition
        ++count;
        printf(" \n\t\t\t COREECT !!!");
    }
        
    else if (a == 2) // for wrong choice of answer
        printf("\n\t\t\tWRONG !!!");
    else if (a == 3)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 4)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        printf("\n\n *******************************************************************************************************************************\n");

    // NEXT QUESTION
    printf("\n\n\t\t\t Q2.WHO IS THE FATHER OF THE NATION  ?\n");
    printf(" \n\n\n\t\t\t 1.BHAGHT SINGH   \n\t\t\t 2.MAHATHMA GHANDHI \n\t\t\t 3.SARADAR VALLABHAI PATEL  \n\t\t\t 4.SUBHASH CHANDRA BHOSE\n\n\t");
    scanf(" %d", &a);
    
    if (a == 2) 
    {																// winning condition
    	++count;
        printf(" \n\t\t\t COREECT !!!");
     }
    else if (a == 1) // for wrong choice of answer
        printf("\n\t\t\t WRONG !!!");
    else if (a == 3)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 4)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        
       printf("\n\n *******************************************************************************************************************************\n");
       
   // NEXT QUESTION
    printf("\n\n\t\t\t Q3.COLLECION OF 8 BITS ARE CALLED ?\n");
    printf(" \n\n\n\t\t\t 1.BIT   \n\t\t\t 2.WORD \n\t\t\t 3.RECORD  \n\t\t\t 4.BYTE\n\n\t");
    scanf(" %d", &a);
    
    if (a == 4) 
    {																// winning condition
    	++count;
        printf(" \n\t\t\t COREECT !!!");
     }
    else if (a == 1) // for wrong choice of answer
        printf("\n\t\t\t WRONG !!!");
    else if (a == 3)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 2)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        
       printf("\n\n *******************************************************************************************************************************\n");
       
       //NEXT QUESTION
       printf("\n\t\t\t Q4.WHICH OF THE FOLLOWING IS A PALINDROME NUMBER?\n");
    printf(" \n\n\t\t\t 1. 42042 \n\t\t\t 2.101010 \n\t\t\t 3.1221 \n\t\t\t 4.1231\n\n\t");
    scanf(" %d", &a);
    
    if (a == 3)
    {											 // winning condition
        ++count;
        printf(" \n\t\t\t COREECT !!!");
    }
        
    else if (a == 2) // for wrong choice of answer
        printf("\n\t\t\tWRONG !!!");
    else if (a == 1)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 4)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        printf("\n\n *******************************************************************************************************************************\n");
        
         // NEXT QUESTION
    printf("\n\n\t\t\t Q5.WHO IS HE FOUNDER OF FACEBOOK?\n");
    printf(" \n\n\n\t\t\t 1.STEVE JOBS   \n\t\t\t 2.TESLA \n\t\t\t 3.MARK ZUCKERBURG  \n\t\t\t 4.BILL GATES\n\n\t");
    scanf(" %d", &a);
    
    if (a == 3) 
    {																// winning condition
    	++count;
        printf(" \n\t\t\t COREECT !!!");
     }
    else if (a == 1) // for wrong choice of answer
        printf("\n\t\t\t WRONG !!!");
    else if (a == 2)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 4)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        
       printf("\n\n *******************************************************************************************************************************\n");
       
       // NEXT QUESTION
    printf("\n\n\t\t\t Q6.WHICH OF HE FOLLOWING IS A WEB BROWSER?\n");
    printf(" \n\n\n\t\t\t 1.DREAMWEAVER   \n\t\t\t 2.NETSCAPE NAVIGATOR \n\t\t\t 3.MAYA  \n\t\t\t 4.FLASH\n\n\t");
    scanf(" %d", &a);
    
    if (a == 2) 
    {																// winning condition
    	++count;
        printf(" \n\t\t\t COREECT !!!");
     }
    else if (a == 1) // for wrong choice of answer
        printf("\n\t\t\t WRONG !!!");
    else if (a == 3)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 4)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        
       printf("\n\n *******************************************************************************************************************************\n");
       
       // NEXT QUESTION
    printf("\n\n\t\t\t Q7.WHICH OF HE FOLLOWING IS A READ ONLY MEMORY STORAGE DEVICE\n");
    printf(" \n\n\n\t\t\t 1.FLASH DRIVE   \n\t\t\t 2.HARD DISK \n\t\t\t 3.FLOPPY DISH   \n\t\t\t 4.CD-ROM\n\n\t");
    scanf(" %d", &a);
    
    if (a == 4) 
    {																// winning condition
    	++count;
        printf(" \n\t\t\t COREECT !!!");
     }
    else if (a == 1) // for wrong choice of answer
        printf("\n\t\t\t WRONG !!!");
    else if (a == 3)
        printf("\n\t\t\t WRONG !!! ");
    else if (a == 2)
        printf("\n\t\t\t WRONG !!! ");
    else
        printf("\n\t\t\t INVALID OPTION !!! ");
        
       printf("\n\n *******************************************************************************************************************************\n");
       
        //Next question
        printf("\n\t\t\t Q8.WHAT IS THE RAILROAD IN EUROPE  ?\n");
        printf("\n\n\n\t\t\t1.GRANITE RAILWAY\n\t\t\t2.SUMMITH HILL AND MAUCH CHUNK RAILROAD\n\t\t\t3.STOCKTON & DARLINGTON\n\t\t\t4.MOHAWK AND HUDSON RAILROAD\n\n\t");
        scanf("%d",&a);
        if(a==3)
          printf("\n\t\t\t CORRECT !!!");
        else if (a==1)     // for wrong choice of answer
            printf("\n\t\t\t WRONG !!!");
       else if (a==2)        
            printf("\n\t\t\t WRONG !!! ");
            else if (a==4)        
            printf("\n\t\t\t WRONG !!! ");
            else         
            printf("\n\t\t\t INVALID OPTION !!! ");
            
             printf("\n\n *******************************************************************************************************************************\n");
             
             // next question
          printf("\n\t\t\t Q9.WHAT IS THE MOST COMMON FUEL USED IN NUCLEAR REACTOR  ?\n");
          printf("\n\n\n\n\t\t\t 1.HYDROGEN   \n\t\t\t 2.MINERAL SALT  \n\t\t\t 3.AMMONIUM PERCHLORATE   \n\t\t\t 4.URANIUM\n\n\t");
         if(a==4)
          printf("\n\t\t\t CORRECT !!!");
        else if (a==1)     // for wrong choice of answer
            printf("\n\t\t\t WRONG !!!");
       else if (a==2)        
            printf("\n\t\t\t WRONG !!! ");
            else if (a==3)        
            printf("\n\t\t\t WRONG !!! ");
            else         
            printf("\n\t\t\t INVALID OPTION !!! ");
            
         printf("\n\n *******************************************************************************************************************************\n");

// next question
          printf("\n\t\t\t Q10.HOW MANY COMPUTER LANGUAGES ARE IN USE ?\n");
          printf("\n\n\n\n\t\t\t 1.2000   \n\t\t\t 2.5000  \n\t\t\t 3.50   \n\t\t\t 4.20\n\n\t");
         if(a==1)
          printf("\n\t\t\t CORRECT !!!");
        else if (a==4)     // for wrong choice of answer
            printf("\n\t\t\t WRONG !!!");
       else if (a==2)        
            printf("\n\t\t\t WRONG !!! ");
            else if (a==3)        
            printf("\n\t\t\t WRONG !!! ");
            else         
            printf("\n\t\t\t INVALID OPTION !!! ");
            
         printf("\n\n *******************************************************************************************************************************\n");

// next question
          printf("\n\t\t\t Q11. WHICH OF THESE IS NOT AN EARLY COMPUTER?\n");
          printf("\n\n\n\n\t\t\t 1.ENIAC   \n\t\t\t 2.UNIVAC  \n\t\t\t 3.NASA   \n\t\t\t 4.SAGE\n\n\t");
         if(a==3)
          printf("\n\t\t\t CORRECT !!!");
        else if (a==4)     // for wrong choice of answer
            printf("\n\t\t\t WRONG !!!");
       else if (a==2)        
            printf("\n\t\t\t WRONG !!! ");
            else if (a==1)        
            printf("\n\t\t\t WRONG !!! ");
            else         
            printf("\n\t\t\t INVALID OPTION !!! ");
            
         printf("\n\n *******************************************************************************************************************************\n");

// next question
          printf("\n\t\t\t Q12. WHO FOUNDED APPLE COMPUTER?\n");
          printf("\n\n\n\n\t\t\t 1.STEPHEN FRY   \n\t\t\t 2.BILL GATES  \n\t\t\t 3.STEVE JOBS   \n\t\t\t 4.STEPHEN HAWKING\n\n\t");
         if(a==3)
          printf("\n\t\t\t CORRECT !!!");
        else if (a==4)     // for wrong choice of answer
            printf("\n\t\t\t WRONG !!!");
       else if (a==2)        
            printf("\n\t\t\t WRONG !!! ");
            else if (a==1)        
            printf("\n\t\t\t WRONG !!! ");
            else         
            printf("\n\t\t\t INVALID OPTION !!! ");
            
         printf("\n\n *******************************************************************************************************************************\n");

// next question
          printf("\n\t\t\t Q13. WHO FOUNDED APPLE COMPUTER?\n");
          printf("\n\n\n\n\t\t\t 1.STEPHEN FRY   \n\t\t\t 2.BILL GATES  \n\t\t\t 3.STEVE JOBS   \n\t\t\t 4.STEPHEN HAWKING\n\n\t");
         if(a==3)
          printf("\n\t\t\t CORRECT !!!");
        else if (a==4)     // for wrong choice of answer
            printf("\n\t\t\t WRONG !!!");
       else if (a==2)        
            printf("\n\t\t\t WRONG !!! ");
            else if (a==1)        
            printf("\n\t\t\t WRONG !!! ");
            else         
            printf("\n\t\t\t INVALID OPTION !!! ");
            
         printf("\n\n *******************************************************************************************************************************\n");





       
    printf("\n");
    printf("\n Your Highest Score is : %d/10",count);
    
        printf("\n\n *******************************************************************************************************************************\n");
}

void help()
{
    printf("\n\t>> Basic rule of quiz\n");
    printf("\n\t >> A team gets 30 seconds to answer the question intended for it, and is awarded 20 points for answering it.\n");
    printf("\n\t >> If the team, the question intended for gives a wrong answer, the quiz master will give the correct answer.\n");
    printf("\n\t >> If the team that the question intended for passes it. \n");
    printf("\n\t>> How many rounds are there in quiz?\n");
    printf("\n\t>> A good quiz should be between four and Eight rounds of 10 questions each and include a mixture of different rounds.\n");
    printf("\n\t>> Be careful not to give it too much of a human rights focus or you might end up alienating those who aren't active campaigners\n");
    printf("\n\t>> Example End of Quiz Messages.\n");
    printf("\n \t>> Thank you! ... \n");
    printf("\n \t>> Raise your hand when you see this message so I can walk up to your desk and help you proceed.\n");
    printf("\n\t>> Your score report is presented below. ... \n");
    printf("\n\t>> Hope you did well on the quiz and took notes on the questions you answered incorrectly. ...\n");
    printf("\n \t>> Thank you – you have completed this assessment!. \n");
}
