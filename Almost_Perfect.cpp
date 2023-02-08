#include <iostream>

using namespace std;

int getNDivisors(int n){
    int max = n;
    int count=1;
    for(int i=2; i < max; i++){
        if(n%i == 0){
            count+=1;
            if(i != n/i){
                max = n/i;
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n, N;
    while(cin >> n){
       N = getNDivisors(n);
       int arr[N];
       arr[0] = 1;
       int i =1;
       while(i<N){
           int max = n; 
           for(int j=2; j < max; j++){
                if(n%j == 0){
                    max = n/j;
                    arr[i] = j;
                    i++;
                    if(max != j){
                        arr[i] = max;
                        i++;
                    }
                }
            }
       }
       int sum=0;
       for(int j= 0; j < N; j++){
           sum += arr[j];
           //cout << arr[j] << endl;
       }
       //cout << sum;
       if(sum == n){
           cout << n << " perfect" << endl;
       }
       else if(sum >= n-2 && sum <= n+2){
           cout << n << " almost perfect" << endl;
       }
       else{
           cout << n << " not perfect" << endl;
       }
    }
}