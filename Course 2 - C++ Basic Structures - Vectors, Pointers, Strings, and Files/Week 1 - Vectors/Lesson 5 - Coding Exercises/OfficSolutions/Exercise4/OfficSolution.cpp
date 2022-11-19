#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
    int a = atoi((argv[1]));
    int b = atoi((argv[2]));
    int c = atoi((argv[3]));
    int d = atoi((argv[4]));
    int nums[3][3];
    
    //add code below this line

    /* First, you would need to modify the 2D array (nums) so that a, b, c, and d are placed at the correct row and column indices. 
     * Next, you’d need to calculate the correct row, column, and total sums while also placing them in the appropriate row and column indices. 
     * The code below showcases how each set of row and column indices pair is accessed and modified. 
     * Note that the total sum can also be expressed as the arguments added together and then multiplied by 2.
     */
    nums[0][0] = a;
    nums[0][1] = b;
    nums[0][2] = a + b;
    nums[1][0] = c;
    nums[1][1] = d;
    nums[1][2] = c + d;
    nums[2][0] = a + c;
    nums[2][1] = b + d;
    nums[2][2] = ((a+b) + (c+d) + (a+c) + (b+d)); //or 2(a+b+c+d)

    //add code above this line
    
    int row = sizeof(nums) / sizeof(nums[0]);
    int col = sizeof(nums[0]) / sizeof(int);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == 2) {
                cout << nums[i][j] << endl;
            }
            else {
                cout << nums[i][j] << " ";
            }
        }
    }
    
    return 0;
  
}
