#include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  struct Antique {
   char itemname[100];
   char era[30];
   float baseprice;
   float finalbid;
   char biddername[100];
   };
  int main()
 {
 	struct Antique item[100];
 	int n, i, j, temp, a, choice,flag=0;
 	char search[40];
	printf("Enter Total number of antique items bidded today:- ");
 	scanf("%d",&n);
	for(i=0; i < n; i++)
 	{
     	printf("Enter the details of item %d:\n", i+1);
    	printf("Name of the item - ");
     	scanf("%s", item[i].itemname);
    	printf("Era (in century) - ");
     	scanf("%s", item[i].era);
    	printf("Enter the Base Price of the item (in lakhs) - ");
     	scanf("%f",&item[i].baseprice);
    	printf("Enter the Final price item bidded (in lakhs) - ");
     	scanf("%f",&item[i].finalbid);
    	 
     	printf("Enter the Name of the Bidder - ");
     	scanf("%s", item[i].biddername);
 	}
    printf("\n --------------ANTIQUE AUCTION ITEMS---------------\n");
 	printf("Name\t\tEra\t\tBase Price\t\tFinal Bid\t\tBidder\n");
 	for(i = 0; i < n; i++)
 	{
     	printf("%s\t\t%s\t\t%.2f\t\t%.2f\t\t%s\n", item[i].itemname, item[i].era, item[i].baseprice, item[i].finalbid, item[i].biddername);
 	}
 	while(1)
 	{
 	    printf("\nMENU \n1. Search by Era \n2. Add new Item \n3. Display Record \n4.Sort(decreasing) \n5.EXIT\n");
 	    printf("Enter your Choice - ");
 	    scanf("%d", &choice);
 	    switch(choice){
 	        case 1:
 	         printf("Enter the Era to search: ");
                scanf("%s", search);
                flag=0;
                for (i = 0; i < n; i++) {
                    if (strcmp(item[i].era, search)== 0) {
                        printf("\nName: %s\nEra: %s\nBase Price: %.2f\nFinal Bid: %.2f\nBidder: %s\n",
                               item[i].itemname, item[i].era, item[i].baseprice, item[i].finalbid, item[i].biddername);
                        flag = 1;
                    }
                }
                if (flag==0){
               printf("\n Record NOT found!!!");
                }
                break;
                 case 2:
 	        printf("\nEnter no. of items you want to add in the list: ");
 	        scanf("%d",&a);
 	        for(i=0; i<a; i++){
 	            	printf("Name of the item - ");
     	scanf("%s", item[i].itemname);
    	printf("Era (in century) - ");
     	scanf("%s", item[i].era);
    	printf("Enter the Base Price of the item (in lakhs) - ");
     	scanf("%f",&item[i].baseprice);
    	 
     	printf("Enter the Final price item bidded (in lakhs) - ");
     	scanf("%f",&item[i].finalbid);
    	printf("Enter the Name of the Bidder - ");
     	scanf("%s", item[i].biddername);
 	        }
             for(i=0; i<a; i++){
 	            printf("%s\t\t%s\t\t%.2f\t\t%.2f\t\t%s\n", item[i].itemname, item[i].era, item[i].baseprice, item[i].finalbid, item[i].biddername);
 	        }
                    break;
 	        case 3:
 	        for(i=0; i<n; i++){
 	            printf("%s\t\t%s\t\t%.2f\t\t%.2f\t\t%s\n", item[i].itemname, item[i].era, item[i].baseprice, item[i].finalbid, item[i].biddername);
 	        }
 	        break;
 	        case 4:
 	        	for(i=0; i < n-1;i++){
     	for(j=i+1; j<n; j++){
         	if(item[i].finalbid < item[j].finalbid){
             	temp = item[i].finalbid;
             	item[i].finalbid = item[j].finalbid;
             	item[j].finalbid = temp;
         	}
     	}
 	}
 		printf("\n --------------ANTIQUE AUCTION ITEMS SORTED--------------\n");
 	printf("Name\t\tEra\t\tBase Price\t\tFinal Bid\t\tBidder\n");
 	for(i = 0; i < n; i++)
 	{
     	printf("%s\t\t%s\t\t%.2f\t\t%.2f\t\t%s\n", item[i].itemname, item[i].era, item[i].baseprice, item[i].finalbid, item[i].biddername);
 	}
 	break;
 	case 5:
 	exit(0);
 	default:
 	printf("\nInvalid choice! Please try again.\n");
 	 }
 	}
 	return 0;
  }
