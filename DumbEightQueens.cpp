//Dumb 8 Queens Problem
#include <iostream>
using namespace std;

bool ok (int q[]) { 
    for (int i = 0; i < 8; i++) { 
        for (int j = i + 1; j < 8; j++) {
            if (q[i] == q[j] || abs(q[i] - q[j]) == abs(i - j)) { //We check for the same row, by comparing the values in q[i] and q[j]
                return false;                                     //If they are equal, this means that there are two queens in the same row, and a conflict is detected.
            }                                                     //We used the absolute value function abs() to check for a diagonal conflict by calculating the difference between the row positions of the queens in column i and column j, as well as the difference between their column positions. 
                                                                  //If the two differences are equal, this means that the queens are on the same diagonal, and a conflict is detected.
        
         }
    }                               //If either of these conflicts is detected, the if statement evaluates to true, and the loop exits. 
                                    //The code returns false to indicate that the current configuration is not valid. If no conflicts are detected, the function returns true.
                                    
    return true;
} 

int main() {
    int q[8] = {0};
    int solutions = 0;
    
    for (int i0 = 0; i0 < 8; i0++) {
        for (int i1 = 0; i1 < 8; i1++) {
            for (int i2 = 0; i2 < 8; i2++) {
                for (int i3 = 0; i3 < 8; i3++) {
                    for (int i4 = 0; i4 < 8; i4++) {
                        for (int i5 = 0; i5 < 8; i5++) {
                            for (int i6 = 0; i6 < 8; i6++) {
                                for (int i7 = 0; i7 < 8; i7++) {
                                    q[0] = i0;
                                    q[1] = i1;
                                    q[2] = i2;
                                    q[3] = i3;
                                    q[4] = i4;
                                    q[5] = i5;
                                    q[6] = i6;
                                    q[7] = i7;
                                    //{Zubaer
                                    if (ok(q)) { //The ok(q) function checks if the current configuration of queens on the board is a valid solution by checking for conflicts between the queens in the same row, column, or diagonal. 
                                        solutions++;
                                        cout << "Solution #" << solutions << ":" << endl;
                                        cout << "1D Array: "; 
                                        for (int z = 0; z < 8; z++){
                                            cout << q[z] << " "; 
                                        }
                                        cout << endl; 
                                        for (int i = 0; i < 8; i++) {
                                            for (int j = 0; j < 8; j++) {
                                                if (q[j] == i) {
                                                    cout << "Q ";
                                                } else {
                                                    cout << "- ";
                                                }
                                            }
                                            cout << endl;
                                        }
                                        cout << endl;
                                    } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    cout << "Total solutions found: " << solutions << endl;
    
    return 0;
}
