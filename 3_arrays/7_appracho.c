#include<stdio.h>
//using namespace std;
int main(void){
    int n, max = 0, max2 = 0;
    printf("Enter the no of elements in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i+1] > arr[i])
            max = arr[i+1];
    }
    for(int i = 0; i < n-1; i++)
    {
        int diff = max - arr[i];
        int temp = max - arr[i+1];

        if(diff >= temp && diff != 0)
            max2 = diff;
    }
    printf("Max element : %d\n 2nd max element : %d\n", max, max2);
    return 0;
}
