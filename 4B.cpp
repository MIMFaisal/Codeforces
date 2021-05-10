#include <bits/stdc++.h>

using namespace std;

main(){
    int d, sumTime, i, k, temp, flag = 0, extra=0;

    cin >> d >> sumTime;

    int maxTime[d+1], minTime[d+1], sumMax[d+1] = {0}, sumMin[d+1] = {0},study[d+1] = {0};

    for(i = 1; i <= d; i++)
    {
        cin>> minTime[i] >> maxTime[i];
        sumMax[i] = sumMax[i-1] + maxTime[i];
        sumMin[i] = sumMin[i-1] + minTime[i];
    }


    if (sumMax[d] < sumTime || sumTime < sumMin[d])
        cout << "NO\n";
    else{
        cout << "YES\n";
        for(int k = 1; k <= d; k++){
            study[k] = minTime[k];
            sumTime -= minTime[k];
        }
        for(int k = 1; k <= d; k++){
            if(maxTime[k] - minTime[k] < sumTime){
                study[k] = maxTime[k];
                sumTime -= (maxTime[k] - minTime[k]);
            }
            else{study[k] += sumTime; break;}
        }

        for(i = 1; i < d; i++){
            cout<<study[i]<<" ";
        }
        cout<<study[i]<<endl;

    }

    return 0;

}

