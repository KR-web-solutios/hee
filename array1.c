//W.A.P to input 5 number in array to find all even number?
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the number=");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=4;j++){
        if(arr[j]%2==0){
            printf("%d is even number\n",arr[j]);
        }
    }
    return 0;
}