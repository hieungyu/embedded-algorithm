/*
657. Robot Return to Origin
*/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0; // (0,0)

        /*
        -U -> y+
        -R -> x+
        -L -> x-
        -D -> y-
        */
       for (char c : moves)
            if (c == 'R'){
                x += 1;

            }else if (c == 'L')
            {
                x -= 1;
            }else if (c == 'U')
            {
                y += 1;
            }else if(c == 'D'){
                y -= 1;
            }
        return (x == 0 && y == 0);
    }
};