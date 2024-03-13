#include<stdio.h>
#include<stdlib.h>
#include"magic_square.h"
#define MAX_FILE_NAME 100	

int get_num_lines(char filename[MAX_FILE_NAME])          //We just need to the variable MAX_FILE_NAME instead of replacing everywhere
{
  FILE *fp;
  fp = fopen(filename,"r");			//open file in read mode
  int ch_read;
  int count =0;
  while((ch_read = fgetc(fp))!= EOF)		//Till End of File keep on getting characters 
    {
	  if (ch_read == '\n'){
	  count++;
	printf("%d\t",count);}	
}
	printf("Number of lines counted is %d \n",count);   //Prints the number of line in our file
	fclose(fp);
	return count;               // error

}

int main(void)
   {
    FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter the file name please\n");
	scanf("%s", filename);
	
	
	//Get number of lines
	int n = get_num_lines(filename);
	f = fopen(filename,"r");                   //fopen and fclose associated to file 
	
	int i;
	int **magicsquare = malloc(n*sizeof(int *));   //memory allocation
	for(i =0;i<n;i++)
	  {
	   magicsquare[i] = malloc(n*sizeof(int *));
	  }
	  
	int j;
	for(i =0;i<n;i++)
	  {
	    for(j =0;j<n;j++)
		{
			fscanf(f, "%d", &magicsquare[i][j]);
		}
	  }
	  int flag = isMagicSquare(magicsquare,n);
	  if(flag == 0)
		{
		printf("This square is not magic!\n");
		}
	  else
	  {
	  printf("This square is magic!\n");
	  }
	  for (i=0;i<n;i++)
		{
		free(magicsquare[i]);
		}
	  free(magicsquare);
	  fclose(f);
	  return 0;
   }
