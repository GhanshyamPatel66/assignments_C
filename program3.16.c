#include<stdio.h>

int main(){
    int no,black;
    int rev_num,rem;
    printf("Enter a no : ");
    scanf("%d",&no);
    printf("%d ",jack(no,rev_num,rem));
    black = no;
    printf((black == jack(no,rev_num,rem)) ? "Palindrome" : "Not a Palindrome");
}
//7654
int jack(int no,int rev_num,int rem){
    rem = no%10;
    rev_num = rev_num*10 + rem;
    no = no/10;
    if(no == 0){
        return rev_num;
    }
    jack(no,rev_num,rem);include<stdio.h>

int main(){
	int firstNum,secondNum;
	
	int *ptr_firstNum=&firstNum,*ptr_secondNum=&secondNum;

	//ptr_firstNum ==> Location of FirstNum
	//ptr_secondNum ==> Location of SecondNum

	printf("Enter a Num : ");
	scanf("%d",&firstNum);
	printf("Enter another Num : ");
	scanf("%d",&secondNum);

	printf("%d",*ptr_firstNum+*ptr_secondNum);

}

}