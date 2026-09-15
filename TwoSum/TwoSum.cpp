#include <iostream>
#include <string>
#include <vector>

using namespace std;

class solution {
 
    public:

    vector<int> TwoSum(const vector<int>& nums, int target) {

        if (2 <= nums.size() <= 10000) {

            cout << "The integers are out of bounds";
            exit(0);
        }
        
        for (int i = 0; i < nums.size(); i++) {
            
            if ( !(-1000000000 <= ( nums[i] ) <= 1000000000 ) ) {
				cout << "Integers capacity exceeded";
                exit(0);
            }

        }

        if ( !(-1000000000 <= target <= 1000000000) ) {
            cout << "Target value is out of bounds";
            exit(0);
        }

        for(int i = 0; i < nums.size(); i++){
			
            int j = 0;
            
                for(;j < nums.size(); j++) {
                    
                    if( i == j ) { continue; }
                    if(nums[i] + nums[j] == target ) { return {i, j}; }

                }
           

        }

        return {0};
    }

     

};

int main(){

    solution sol;
	vector<int> result;

	result = sol.TwoSum({ 2, 7, 11, 15 }, 9);

	cout << result[0] << " " << result[1] << endl;
     
}