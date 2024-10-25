
//problem to add digitts of numbers

#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digitSum = 0;

    while(num > 0){
        int lastDigit = num % 10;
        num /= 10;

        digitSum += lastDigit;
    }

    return digitSum;
}


int main()
{   
   cout<< sumOfDigits(2356) << endl;

    return 0;
}


//problem to nCr binomial coefficient for n&r

#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r*fact_nmr);
}


int main()
{
    int n = 6, r = 3;
    cout<< nCr(n,r) << endl;
    

    return 0;
}


//check if number is prime number or not

#include <iostream>
using namespace std;

int primeNo(int n){
    if(n <= 1)
        return false;
    
    for(int i = 2; i * i <=n; i++){
        if(n % i == 0)
            return false;

}
return true;
}


int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if(primeNo(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

return 0;
}