// Ques: Count the number of triplets whose sum is equal to a given value X.
#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totalTriplets = 0;
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    
    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<8; j++)
        {
            for(int k=j+1; k<8; k++)
            {
                if(arr[i] + arr[j] + arr[k] == x)
                {
                    totalTriplets++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("Total number of triplets: %d\n", totalTriplets); // Fixed: changed pairs to triplets
    return 0;
}