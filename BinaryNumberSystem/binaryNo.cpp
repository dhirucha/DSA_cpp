
// Decimal to binary number

// #include <iostream>
// using namespace std;

// int decimalToBinary(int decNum){
//     int ans = 0;
//     int pow = 1;

//     while(decNum > 0){
//         int rem = decNum % 2;
//         decNum = decNum/2;

//         ans += (rem*pow);

//         pow = pow*10;
//     }

//     cout<<ans << endl;
// }

// int main()
// {   
//     // decimalToBinary(50);

//     for(int i=1; i<=10; i++){
//         cout<< decimalToBinary(i) << endl;
//     } 

//     return 0;
// }


#include <iostream>
using namespace std;


int binaryToDecimal(int binNum){
    int ans = 0;
    int pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main()
{   
    cout<< binaryToDecimal(1010) << endl;

    return 0;
}



