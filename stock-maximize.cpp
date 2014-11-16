//Simple solution, I just go backwards from the end
//to the begining and purchase a stock if the difference
//between the max future value and the current value
//produces a profit and add that profit to the total profit.
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n; cin>>n;
        vector<int> stockPrices;
        
        int maxPrice=0;
        for(int j=0;j<n;j++){
            int a; cin>>a;
            stockPrices.push_back(a);
        }
        
        long long int result = 0;
        for(int j=stockPrices.size() - 1; j>=0; j--){
            if(maxPrice-stockPrices[j] > 0){
                result += maxPrice-stockPrices[j];
            }
            maxPrice = max(maxPrice, stockPrices[j]);
        }
        
        cout<<result<<endl;
    }
    
    return 0;
}
