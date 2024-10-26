#include <iostream>
using namespace std;


int isPowerOf2(int n){
    if((n & (n-1)) == 0){
        cout<< n << ":is power of 2." <<endl;
    }else{
        cout<< n << " :is not power of 2"<< endl;
    }
}

int main()
{
//bitwise operations(&)
    // int a = 4, b= 8;
    // cout<< (a & b) <<endl; //0

//(|)
    // int c = 4, d= 8;
    //  cout<< (c | d) <<endl;// 12


//(^ xor)
    // int x = 3, y= 7;
    // cout<< (x ^ y) <<endl; // 4

    // (<< left shift)
        // cout<< (10<<2) <<endl; // 20

    //(>> right shift )
    // cout<< (8>>2); // 2

    //operator precendence

    // cout<< (5- 2 *6) << endl;

    //to avoid operator precendence use () to perform operations first
    // cout<< (5- 2) *6 << endl;


    //datatype modifiers

    //long
    //short
    //long long
    //signed
    //unsigned

    // program to reverse int
    // int n = 123;
    // int ans = 0;
    // while(n>0){
    //     int id = n%10;
    //     ans = ans*10+id;
    //     n/=10;
        
    // }

    // cout<< ans;


    

    
    isPowerOf2(9);


return 0;
}