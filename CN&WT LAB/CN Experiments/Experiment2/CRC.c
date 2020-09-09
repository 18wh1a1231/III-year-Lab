#include<stdio.h>
#include<string.h>

int main(){

char data[100],poly[100],temp[100],quo[100],rem[100],poly1[100],data1[100];
int datalength,polylength,i,j,k;
printf("Enter the data :");
scanf("%s",data);
strcpy(data1,data);
printf("Enter the polynomial:");
scanf("%s",poly);
datalength = strlen(data);
polylength = strlen(poly);
strcpy(poly1,poly);
for(i=1;i<polylength;i++){
    strcat(data,"0");
}
printf("Data after appending zeroes:%s\n",data);
for (i=0;i<polylength;i++){
	 temp[i]=data[i];
}
for (i=0;i<datalength;i++) {
    quo[i]=temp[0];
    if(quo[i]=='0'){
        for (j=0;j<polylength;j++)
          poly[j]='0';
    }else{
        for (j=0;j<polylength;j++)
		 poly[j]=poly1[j];
    }
    for (j=polylength-1;j>0;j--) {
        if(temp[j]==poly[j]){
            rem[j-1]='0';
        }else{
            rem[j-1]='1';
        }
    }
		rem[polylength-1]=data[i+polylength];
		strcpy(temp,rem);
}
	strcpy(rem,temp);
    quo[datalength] = '\0';
    rem[polylength-1] = '\0';

	printf("Quotient is :%s\n",quo);
	printf("CRC:%s\n",rem);
	printf("Final data is:");
	strcat(data1,rem);
	printf("%s",data1);
	printf("\n");
	printf("\n");


	return 0;
}
