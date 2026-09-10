#include <iostream>
#include <string>

using namespace std;

class solution {

    public:

    Vector<int> TwoSum(vector<int>& nums, int target) {

        if (2 <= nums.length <= 10000) {

            cout << "The integers are out of bounds";
            exit(0);
        }
        
        for (int i = 0; i < nums.length; i++) {
            
            if !(-1000000000 <= ( nums[i] ) <= 1000000000 ) {
				cout << "Integers capacity exceeded";
                exit(0);
            }

        }

        if !(-1000000000 <= target <= 1000000000) {
            cout << "Target value is out of bounds";
            exit(0);
        }

        for(int i = 0; i < nums.length; i++){
			
            int j = 0;

                for(j < nums.length; j++) {
                    
                    if( i == j ) { continue; }
                    if(nums[i] + nums[j] == target ) { return {i, j}; }

                }
           

        }

    }

}

int main(){

    solution sol;
	Vector<int> result;

	result = sol.TwoSum({ 2, 7, 11, 15 }, 9);

	cout << result; 

}