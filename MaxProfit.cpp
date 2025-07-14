#include <iostream>
using namespace std;

/* Question: Find out the maximum profit (positive or negative) that can be earned, and return its value.
int prices[]: Prices of shares */
int profitEarned(int prices[]) {
    int output=0;
    int max=prices[1]-prices[0];
    int size=5;
    int i=0;
    prices[size];
    for(int j=0;j<size;j++){
    	for (int j=i+1; j<size;j++){
    		output=prices[j]-prices[i];
    		i++;
    		if(output>max){
    			max=output;
			}
		}
	}
	return max;
}

void runTest(int prices[], int expected, int testCaseNumber) {
    int result = profitEarned(prices);
    if (result == expected) {
        cout << "Test Case " << testCaseNumber << " PASSED" << endl;
    } 
	else {
        cout << "Test Case " << testCaseNumber << " FAILED" << endl;
        cout << "Expected: " << expected << ", Got: " << result << endl;
    }
}

int main() {
    // Test Cases
    int prices1[] = {44000, 54000, 46000, 47000, 48000};
    runTest(prices1, 10000, 1);

    int prices2[] = {67000, 73000, 57000, 63000, 47000};
    runTest(prices2, 6000, 2);

    int prices3[] = {55000, 55000, 55000, 55000, 55000};
    runTest(prices3, 0, 3);

    int prices4[] = {87000, 67000, 45000, 34000, 33000};
    runTest(prices4, -1000, 4);

    return 0;
}

