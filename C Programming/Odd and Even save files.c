#include<stdio.h>
#include<conio.h>
void main()
{
	 FILE *oddfp, *evenfp;
	 int n,i;
	 char str[100];
	 printf("\nEnter no of records : ");
	 scanf("%d", &n);
	 evenfp=fopen("even.txt", "w");
	 oddfp=fopen("odd.txt", "w");
	 if(oddfp==NULL || evenfp==NULL)
	 {
	 	printf("Can't open files to write..!");
	 	return;
	 }
	 fprintf(evenfp, "Even Numbers : ");
	 fprintf(oddfp, "Odd Numbers : ");
	 for(i=0;i<=n;i++)
	 {
	 	if(i%2==0)
	 	    fprintf(evenfp, "%4d",i);
	 	else
	 	    fprintf(oddfp,"%4d",i);
	 }
	 fclose(evenfp);
	 fclose(oddfp);
	 evenfp=fopen("even.txt", "r");
	 oddfp=fopen("odd.txt", "r");
	 if(oddfp==NULL || evenfp==NULL)
	 {
	 	printf("Cant open files to record..!");
	 	return;
	 }
	 fgets(str,100,evenfp);
	 puts(str);
	 fgets(str,100,oddfp);
	 puts(str);
	 fclose(evenfp);
	 fclose(oddfp);
	 getch();
}
