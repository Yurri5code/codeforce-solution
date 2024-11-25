#include <stdio.h>
#include <stdlib.h>

int main()
{
    int red = 0,blue = 0;
    scanf("%d %d",&red,&blue);
    int sameDay = 0,diffDay = 0;

    while(red > 0 && blue > 0){
        red--;

        blue--;
        sameDay++;
    }

    if(red > 0){
            int count = 0;
        while(red > 0){
            red--;
            count++;
            if(count %2 == 0){
                diffDay++;
            }
        }
    }

    if(blue > 0){
        int count = 0;
        while(blue > 0){
            blue--;
            count++;
            if(count%2 == 0){
                diffDay++;
            }
        }
    }
    printf("%d %d",sameDay,diffDay);
    return 0;
}


#include <stdio.h>


int main()
{
    int red_socks,blue_socks ;
    int days_of_different_socks;
    int days_same_socks;


    scanf("%d", &red_socks);
    scanf("%d", &blue_socks);

    if(red_socks >= blue_socks)
    {
        days_of_different_socks= blue_socks;
        days_same_socks= (red_socks - blue_socks)/2;
    }
    else
    {
        days_of_different_socks= red_socks;
        days_same_socks = (blue_socks - red_socks)/2;
    }
    printf("%d\t %d", days_of_different_socks, days_same_socks );
    return 0;
}

//c++ solution
vector<int> quickSort(vector<int> arr) {
    vector<int> left, equal, right;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < arr[0]) left.push_back(arr[i]);
        else if(arr[i] > arr[0]) right.push_back(arr[i]);
        else equal.push_back(arr[i]);
    }
    left.insert(left.end(), equal.begin(), equal.end());
    left.insert(left.end(), right.begin(), right.end());
    return left;
}
