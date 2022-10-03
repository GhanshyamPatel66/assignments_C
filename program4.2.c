#include<stdio.h>

int main(){

	FILE *fptr;
	char data[100];

	fptr = fopen("Password.txt","w");
	fprintf(fptr,"This is a test1 file");
	fclose(fptr);


	fptr = fopen("Password.txt","a");
	fprintf(fptr,"\nThis is a test2 file");
	fclose(fptr);


	char line[500];


	fptr = fopen("Password.txt","r");
	while (fgets(line, sizeof(line), fptr)) {
	printf("%s", line); 
	}
	
	fclose(fptr);
}#include<stdio.h>

int main() {
    int x,row,col,matA[3][3]={1,2,3,4,5,6,7,8,9},matB[3][3]={1,2,3,4,5,6,7,8,9};
    int result[3][3]={0};
    int size=sizeof(matA)/sizeof(matA[0]);

    for(row=1;row<=size;row++)
    {
        for(col=1;col<=size;col++)
        {
            for(x=0;x<size;x++)
            {
                result[row-1][col-1] += matA[row-1][x] * matB[x][col-1];
            }
        }
    }

    for(row=1;row<=size;row++)
    {
        for(col=1;col<=size;col++)
        {
            printf("%d\t",result[row-1][col-1]);
        }
        printf("\n");
    }

}