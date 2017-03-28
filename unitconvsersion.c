
#include<stdio.h>
#include<stdlib.h>
void mass();
void temp();
void currency();
void unit()
{   int i;
printf("\t*******************UNIT CONVERTER*******************\n\n\n");
	printf("\nEnter  1 for Mass");
	printf("\nEnter  2 for Temperture");
	printf("\nEnter  3 for Currency");
	printf("\nEnter  4 for exit");
    
		printf("\n\nEnter the choice:- \t");
	scanf("%d",&i);	
	switch(i)
{   case 1:
		{ mass();
		break;
		}
	case 2:
		{ temp();
		break;
		}
	case 3:
		{ currency();
		break;
			}
	case 4:
		{ exit(0);
		break;
		}
	default: {
		printf("\n*******************YOU ENTER WONRG NUMBER*******************");
		     printf("\nENTER 1 TO REFRESS  AND 2 EXIT\n\tENTER:-");
		     int a;
		     scanf("%d",&a);
		     if(a==1)
		     {
		     	system("cls");
		     	unit(0);
			 }
			 else
			 {exit(0);}
		break;
	}
    
}
}
void mass()
{      system("cls");
	int input;
	printf("\t*******************Mass Conversion*******************\n\n\n\nEnter  1 for Kg to grams");
	printf("\nEnter  2 for Kg to ounce");
	printf("\nEnter  3 for Kg to pounds");
	printf("\nEnter  4 for Kg to Stones");
	printf("\nEnter  5 for ounce to pounds");
	printf("\nEnter  6 for ounce to stones");
	printf("\nEnter  7 for ounce to Kg");
	printf("\nEnter  8 for pounds to ounce");
	printf("\nEnter  9 for pounds to stones");
	printf("\nEnter  10 for Pounds to Kg");
	printf("\nEnter  11 for stones to ounce");
	printf("\nEnter  12 for stones to pounds");
	printf("\nEnter  13 for Stones to Kg");
	printf("\n\nEnter  your choice:-\t");
	scanf("%d",&input);
	switch(input) {
		case 1:
		     {float a,b;system("cls");
		   	printf("\n*******************Kg to grams*******************\n");
		     printf("Enter the kg\t");
		     scanf("%f",&a);
		     b=a*1000;
		     printf("%f grams",b);
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
		     break;}
	    case 2:
	        { float a,b;system("cls");
	        printf("\n*******************Kg to ounces*******************\n");
		     printf("Enter the Kg\t");
	         scanf("%f",&a);
	         b=35.273962*a;
	         printf("%f Ounces",b);
		     printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
     		 {system("cls");
			  unit();}
			 else
			 {exit(0);}
	         break;}
	    case 3:
	         {float a,b;system("cls");
   	        printf("\n*******************Kg to Pounds*******************\n");
	         printf("Enter the Kg\t");
	         scanf("%f",&a);
	         b=2.204623*a;
	         printf("%f   Pounds",b);	  
	         printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 4:
	         {float a,b;system("cls");
	         printf("\n*******************Kg to Stones*******************\n");
	         printf("Enter the Kg\t");
	         scanf("%f",&a);
	         b=.157437*a;
	         printf("%f stones",b);
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 5:
	         {float a,b;system("cls");
	        printf("\n *******************Ounce to Pounds*******************\n");          
	         printf("Enter the Ounce\t");
	         scanf("%f",&a);
	         b=0.0625*a;
	         printf("%f Pounds",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 6:
	         {float a,b;system("cls");
	         printf("\n *******************Ounce to Stones*******************\n");
	         printf("Enter the Ounce\t");
	         scanf("%f",&a);
	         b=0.004464*a;
	         printf("%f  Stones",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 8:
	         {float a,b;system("cls");	
	         printf("\n*******************Pounds to Ounce*******************\n");
	         printf("Enter the Pounds\t");
	         scanf("%f",&a);
	         b=16*a;
	         printf("%f Ounce",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 9:
	         {float a,b;system("cls");
         	printf("\n*******************Pounds to Stones*******************\n");
	         printf("Enter the Pounds\t");
	         scanf("%f",&a);
	         b=0.07142*a;
	         printf("%f Stones",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");unit();}
			 else
			 {exit(0);}
	         break;}
	    case 11:
	         {float a,b;system("cls");
	         	
	         printf("\n*******************Stones to Ounce*******************\n");
	         printf("Enter the Stones\t");
	         scanf("%f",&a);
	         b=224*a;
	         printf("%f Ounce",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");unit();}
			 else
			 {exit(0);}
	         break;}
	    case 12:
	        { float a,b;system("cls");
	        printf("\n*******************stones to pounds*******************\n");
	         printf("Enter the Stones\t");
	         scanf("%f",&a);
	         b=14*a;
	         printf("%f lbs",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d  Pounds",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 7:
	         {float a,b;system("cls");
	         printf("\n*******************Ounce to Kg*******************\n");
	         printf("Enter the Ounce:-\t");
	         scanf("%f",&a);
	         b=0.02835*a;
	         printf("%f Kg",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 10:
	        {float a,b;system("cls");
	        printf("\n*******************Pounds to Kg*******************\n");
	         printf("Enter the Pound:-\t");
	         scanf("%f",&a);
	         b=0.453592*a;
	         printf("%f Kg",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 13:
	         {system("cls");
	         	printf("\n*******************Stones to Kg*******************\n");
	        float a,b;
	         printf("Enter the Stones:-\t");
	         scanf("%f",&a);
	         b=6.350293*a;
	         printf("%f kg",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	  default :{printf("\n*******************YOU ENTER WONRG NUMBER*******************");
		     printf("\nENTER 1 TO REFRESS  AND 2 RETURN\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 mass();}
			 else
			 {system("cls");
			 unit(0);}
			break;
		}
		     
	}

}


void temp()//temperture function
 {   system("cls");
	float celsius, fahrenheit,kelvin;int input;
	printf("\t********************Temperture Conversion******************\n\n\n");
	printf("\nEnter  1 for celsius to fahrenheit");
	printf("\nEnter  2 for celsius to kelvin");
	printf("\nEnter  3 for fahrenheit to Kelvin");
	printf("\nEnter  4 for fahrenheit to celsius");
	printf("\nEnter  5 for kelvin to celsius");
	printf("\nEnter  6 for kelvin to fahrenheit ");
	printf("\n\nEnter your choice:-\t");
	scanf("%d",&input);
	switch(input) {
		case 1:
		{	system("cls");
		printf("\n*******************From celsius to fahrenheit*******************\n");
   			printf("\nEnter temp in Celsius : ");
	    	scanf("%f", &celsius);
			fahrenheit = (1.8 * celsius) + 32;
	    	printf("\nTemperature in Fahrenheit : %f ", fahrenheit);	        
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
		    break;
		}
        case 2:
        	{system("cls");
			printf("\n*******************From celsius to kelvin*******************\n");
			printf("\nEnter temp in Celsius : ");
	    	scanf("%f", &celsius);
			kelvin = celsius+ 273.15;
	    	printf("\nTemperature in kelvin : %f ", kelvin);	        
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	    	break;
			}
        case 3:
        	{system("cls");
			printf("\n*******************From fahrenheit to Kelvin*******************\n");
			printf("\nEnter temp in fahrenheit: ");
	    	scanf("%f",&fahrenheit);
			kelvin = (fahrenheit - 32) * 5/9 + 273.15;
	    	printf("\nTemperature in kelvin : %f ", kelvin);	         
			printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	     	break;
			}
		case 4:
        	{system("cls");
	        printf("\n*******************From fahrenheit to celsius*******************\n");
            printf("\nEnter temp in Fahrenheit : ");
	      	scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5/9;
	    	printf("\nTemperature in celsius : %f ", celsius);	         
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
			break;
			}
			
	    case 5:
        	{system("cls");
	        printf("\n *******************From kelvin to celsius*******************\n");	
			printf("\nEnter temp in  kelvin: ");
	        scanf("%f", &kelvin);
		    celsius =kelvin - 273.15;
	        printf("\nTemperature in Celsius : %f ", celsius);	        
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	    	break;
			}
			
        case 6:
        	{system("cls");
			printf("\n*******************From kelvin to fahrenheit*******************\n ");
			printf("\nEnter temp in kelvin : ");
	        scanf("%f", &kelvin);
		    fahrenheit = (kelvin - 273.15) * 9/5 + 32;
	        printf("\nTemperature in Fahrenheit : %f ", fahrenheit);	         
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
		   	break;
			}
  default :{printf("\n*******************YOU ENTER WONRG NUMBER*******************\n");
		     printf("\nENTER 1 TO REFRESS  AND 2 RETURN\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 temp();}
			 else
			 {system("cls");
			 unit(0);}
			break;
		}
			
}}

void currency()
{   system("cls");
	int input;
	printf("\t*******************Currrency Conversion*******************\n\n\n\n");
	printf("\nEnter  1 for IND Rupee to Dollars");
	printf("\nEnter  2 for IND Rupee to Euro");
	printf("\nEnter  3 for IND Rupee to Yuan");
	printf("\nEnter  4 for Dollars to Euro");
	printf("\nEnter  5 for Dollars to Yuan");
	printf("\nEnter  6 for Dollars to IND Rupee");
	printf("\nEnter  7 for Euro to Dollars");
	printf("\nEnter  8 for Euro to Yuan");
	printf("\nEnter  9 for Euro to IND Rupee");
	printf("\nEnter  10 for Yuan to Dollars");
	printf("\nEnter  11 for Yuan to Euro");
	printf("\nEnter  12 for Yuan to IND Rupee");
	printf("\n\nEnter  your choice:-\t");
	scanf("%d",&input);
	switch(input) {
		
	    case 1:
	        { float a,b;system("cls");
	        printf("\n*******************IND Rupee to Dollars*******************\n\n");
	         printf("Enter the IND Rupee\t");
	         scanf("%f",&a);
	         b=0.015*a;
	         printf(" Dollars:- %.4f $",b);	        
			   printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 2:
	         {float a,b;system("cls");
	         printf("\n *******************IND Rupee to Euro*******************\n\n");
	         printf("Enter the IND Rupee\t");
	         scanf("%f",&a);
	         b=0.013*a;
	         printf("Euro :-  %.4f",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 3:
	         {float a,b;	system("cls");
			 printf("\n *******************IND Rupee to Yuan*******************\n\n");
	         printf("Enter the IND Rupee\t");
	         scanf("%f",&a);
	         b=0.098*a;
	         printf("Yuan :- %.4f",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 4:
	         {float a,b;system("cls");
			 printf("\n *******************Dollars to Euro*******************\n\n");
	         printf("Enter the Dollars\t");
	         scanf("%f",&a);
	         b=0.90*a;
	         printf("Euro:- %.4f",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 5:
	         {float a,b;	system("cls");
			  printf("\n *******************Dollars to Yuan*******************\n\n");
	         printf("Enter the Dollars\t");
	         scanf("%f",&a);
	         b=6.57*a;
	         printf("Yuan :- %.4f",b);	         
			  printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");unit();}
			 else
			 {exit(0);}
	         break;}
	    case 6:
	         
	         {float a,b;system("cls");
			 printf("\n *******************Dollars to IND Rupee*******************\n\n");
	          printf("Enter the Dollars\t");
	         scanf("%f",&a);
	         b=67.03*a;
	         printf("IND Rupee:- %f",b);	          
			 printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 7:
	    	{float a,b;system("cls");
	        printf("\n*******************Euro to Dollars*******************\n\n");
			 printf("Enter the Euro\t");
	         scanf("%f",&a);
	         b=1.11*a;
	         printf("Dollars:- %.4f$",b);
	         printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	         
	    case 8:
	         {float a,b;system("cls");
	         printf("\n*******************Euro to Yuan*******************\n\n");
	         printf("Enter the Euro\t");
	         scanf("%f",&a);
	         b=7.30*a;
	         printf("Yuan:-  %.4f",b);
	         printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 9:
	        { float a,b;system("cls");
	        printf("\n*******************Euro to IND Rupee*******************\n\n");
	         printf("Enter the Euro\t");
	         scanf("%f",&a);
	         b=74.51*a;
	         printf("IND Rupee:-  %.4f",b);
 	          printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 10:
	         {float a,b;system("cls");
	         printf("\n*******************Yuan to Dollars*******************\n\n");
	         printf("Enter the Yuan\t");
	         scanf("%f",&a);
	         b=0.15*a;
	         printf("Dollars :- %.4f  $",b);
	         printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 11:
	        {float a,b;system("cls");
	        printf("\n*******************Yuan to Euro*******************\n\n");
	         printf("Enter the Yuan\t");
	         scanf("%f",&a);
	         b=0.14*a;
	         printf("Euro :- %.4f ",b);
	       
		     printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
	    case 12:
	         {
	        float a,b;system("cls");
	        printf("\n*******************Yuan to IND Rupee*******************\n\n");
	         printf("Enter the Yuan\t");
	         scanf("%f",&a);
	         b=10.21*a;
	         printf("IND Rupee:-  %.4f",b);
	          printf("\n\n\nENTER 1 TO RESTART AND 2 EXIT\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 unit();}
			 else
			 {exit(0);}
	         break;}
		    default :{printf("\n*******************YOU ENTER WONRG NUMBER*******************");
		     printf("\nENTER 1 TO REFRESS  AND 2 RETURN\n\tENTER:-");int  i;
	    	 scanf("%d",&i);
			 if(i==1)
			 {system("cls");
			 currency();}
			 else
			 {system("cls");
			 unit();}
			break;
		}
	}
}

void main()
{
	printf("\t*******************UNIT CONVERTER*******************\n\n");
	printf("\t**************THANKS TO NISHTHA PHUTELA**************\n\n\n");
	printf("*******************MADE  BY*******************");
	printf("\nHitesh Goel\t\t\t-- 15B00311\nKanwar Ayush Sharma\t\t-- 15B00032\n");
	printf("Ankit Deep Shrivastava\t\t-- 15B00013\nVinayak Padarha\t\t\t-- 15B00368\n");
 	printf("Srujan  Pendela\t\t\t-- 15B00268\nSaracchandrika\t\t\t-- 15B00099\n");
 	printf("Praveen Suthar\t\t\t-- 15B00333\n");
 	
 	int i;
 	printf("\n\n*******************ENTER CHOICE*******************");
 	printf("\nENTER 1 to Convert");
 	printf("\nENTER 2 to exit");
 	printf("\nENTER \t\t");
 	scanf("%d",&i);
 	
	 switch(i)
    {case 1:
    	{
		system("cls");
    	unit();}
    case 2:
        {exit(0);}	
}}
