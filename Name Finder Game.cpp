#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,n,k;
	char c,name[10],a[6][6]={ {'x','A','B','C','D','E'},{'x','F','G','H','I','J'},{'x','K','L','M','N','O'},
                   {'x','P','Q','R','S','T'},{'x','U','V','W','X','Y'},{'x','Z'} };

	printf("\t\t\tName Finder Game \n\n");
	printf("\tCol 1  Col 2   Col 3   Col 4   Col 5");
	for(i=0;i<6;i++) 
	{
	    printf("\n\nRow %d:    ",i+1);
		for(j=0;j<5;j++) 
		{
			printf("%c \t",a[i][j+1]); 
		} 
	}

	printf("\n\n Enter the size of your name:   ");
	scanf("%d",&n);
	printf("\n");
	for(k=0;k<n;k++) 
	{
	    printf("Enter the row number of %d letter in name: ",k+1);
	    scanf("%d",&i);
	    printf("Enter the column number of %d letter in name: ",k+1);
	    scanf("%d",&j);
        c=a[i-1][j];
        while(1)
		{
			name[k]=c;
			break;
        }
        printf("\n");
	}
	printf("\n\n \t\t The name in your Mind is ");
	for(k=0;k<n;k++)
	printf("%c",name[k]);
	getch();
}
