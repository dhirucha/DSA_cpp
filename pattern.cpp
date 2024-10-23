// pattern-1

// #include<iostream>

// using namespace std;

// int main(){

//     int n = 4;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<'*' <<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern-2

//  #include<iostream>

//  using namespace std;
//  int main(){
//      int n = 4;
//      for(int i=0;i<n;i++){
//         char ch = 'A';
//         for(int j=0; j<n; j++){
//             cout<< ch <<" ";
//             ch = ch + 1;
//         }
//         cout<<endl;

//      }
//      return 0;
//  }

// pattern-3

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 3;
//     int num = 1;
//     for(int i=0; i<n; i++){

//         for(int j=0; j<n; j++){
//             cout<<num <<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern-4

// #include <iostream>

//  using namespace std;
//  int main()
//  {
//      int n = 3;
//      char ch = 'A';
//      for (int i = 0; i < n; i++)
//      {
//         for(int j=0; j<n; j++){
//             cout<<ch <<" ";
//             ch++;
//         }
//         cout<<endl;
//      }

//      return 0;
//  }

// pattern-5
//   #include <iostream>

//  using namespace std;
//  int main()
//  {
//      int n = 4;
//      for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*" <<" ";
//         }
//         cout<<endl;
//      }

//      return 0;
//  }

// pattern-6

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 4;
    
//     for (int i = 0; i < n; i++)
//     {
        
//         for (int j = 0; j < i + 1; j++)
//         {    
//             cout << i+1 << " ";
            
           
//         }
//         cout << endl;
//     }
//     return 0;
// }


//pattern-7

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
        
//         for (int j = 0; j < i + 1; j++)
//         {    
            
//             cout << ch << " ";
           
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }


//pattern-8

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 4;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
        
//         for (int j = 0; j < i + 1; j++)
//         {    
            
//             cout << j+1 << " ";
            
           
//         }
        
//         cout << endl;
//     }
//     return 0;
// }


//pattern-9

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 5;
    
//     for (int i = 0; i < n; i++)
//     {
        
//         for (int j = i+1; j > 0; j--)
//         {    
            
//             cout << j << " ";
            
           
//         }
        
//         cout << endl;
//     }
//     return 0;
// }


//pattern-10

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 4;
//     int num = 1;
    
//     for (int i = 0; i < n; i++)
//     {
        
//         for (int j = 0; j < i+1; j++)
//         {    
            
//             cout << num << " ";
//             num++;
            
           
//         }
        
//         cout << endl;
//     }
//     return 0;
// }


//pattern-11

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch = 'A';
    
//     for (int i = 0; i < n; i++)
//     {
           
//         for (int j = 0; j < i+1; j++)
//         {    
            
//             cout << ch << " ";
//             ch++;
            
           
//         }
        
//         cout << endl;
//     }
//     return 0;
// }


//pattern-12

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 4;
    
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 65;
//         ch = ch + i;
//         for (int j = 0; j <= i; j++)
//         {    
            
//             cout << ch << " ";
//             ch--;
            
           
//         }
        
//         cout << endl;
//     }
//     return 0;
// }


//pattern-13

// #include<iostream>

// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=0; i<n; i++){
//         //spaces
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }

//         for(int j=0; j<n-i; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }

//     return 0;
// }



//pattern-14

// #include<iostream>

// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=0; i<n; i++){
//         //spaces

//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//             char ch = 65;
//             ch = ch +i;
//         for(int j=0; j<n-i; j++){
//             cout<< ch;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//pattern-15

// #include<iostream>

// using namespace std;

// int main(){
//     int n =6;
//     for(int i=0; i<n; i++){
//         //spaces
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }

//         //nums-1
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }

//         //mums-2
//         for(int j=i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }



//pattern-16


#include<iostream>

using namespace std;

int main(){
    int n =4;

    //top
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; i++){
                cout<<" ";
            }
        cout<<"*";

        if(i != 0){
            //spaces
            for(int j=0; j<2*i-1; i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
