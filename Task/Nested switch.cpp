#include<stdio.h>
int main()


{
	int choice;
	printf("WELCOME TO VIDYA SHALA\n");
	printf("Press 1 for SCIENCE\n");
	printf("press 2 for COMMRCE\n");
	scanf("%d", &choice);
	int ch;

	switch (choice)
	{
		case 1:
			   printf("you choose science\n");
			   printf("For biology press 1\n");
			   printf("For Maths press 2\n");
			   scanf("%d",&ch);			   
			   switch (ch)
			   {
			   	case 1:
			   		   printf("You choose biology\nBEST OF LUCK FOR YOUR FUTURE\n");
			   		   break;
			    case 2:
			    	   printf("You choose Maths \nBEST OF LUCK FOR YOUR FUTURE\n");
			    	   break;
			    default: 
				        printf("enter valid choice");	   
			
			   }
			                
			            
			   
			   
			   break;
		case 2: 
		       printf("You choose commrecn\n");
			   printf("for statics press 1\n");
			   printf("For computer press 2\n");
			   scanf("%d", &ch);
			   switch (ch)
			   { 
			      case 1:
			      	     printf("you you select statics \nBEST OF LUCK FOR YOUR FUTURE\n");
			      	      break;
                  case 2: 
				         printf("you choose computer \nBEST OF LUCK FOR YOUR FUTURE");
						 break;
					default:
					        printf("enter valid choice");	 		      	      
			   }
		default:
		        printf("enter valid choice");	     
			          
			   
	}
}

