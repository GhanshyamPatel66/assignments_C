#include<stdio.h>

int main() {
    int arr[] = {-1,-81,0,51,999},prev_num,big_num=0,biggest_num;

    prev_num = arr[0];

    for(int i=1;i<(sizeof(arr)/sizeof(arr[1]));i++)
        {
            big_num = (arr[i]>prev_num) ? arr[i] : prev_num;//1<16668
            if(i==1)
            {
                biggest_num=big_num;
            }
            if(big_num>biggest_num)//>1
            {
                biggest_num = big_num; //biggest =1
            }
            prev_num = arr[i];
        }
        
    printf("%d",biggest_num);
}