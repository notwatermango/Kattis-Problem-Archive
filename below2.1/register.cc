#include <iostream>
using namespace std;

int main(){
    int x=0;
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin>>arr[i];
    }
    while (true)
    {
        x++;
        arr[0]++;
        if(arr[0] > 1){
            arr[0] = 0;
            arr[1]++;
            if(arr[1] > 2){
                arr[1] = 0;
                arr[2]++;
                if(arr[2] > 4){
                    arr[2] = 0;
                    arr[3]++;
                    if(arr[3] > 6){
                        arr[3] = 0;
                        arr[4]++;
                        if(arr[4] > 10){
                            arr[4] = 0;
                            arr[5]++;
                            if(arr[5] > 12){
                                arr[5] = 0;
                                arr[6]++;
                                if(arr[6] > 16){
                                    arr[6] = 0;
                                    arr[7]++;
                                    if(arr[7] == 19){
                                        break;
                                    }
                                }
                            }

                        }
                    }
                }
            }
        }
    }
    cout<<x-1;
    
    
    
    return 0;
}