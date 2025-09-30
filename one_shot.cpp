#include<bits/stdc++.h>
using namespace std;

// Function to print a name//
// void printname(string nam){
//     cout<<"my name is "<<nam<<endl;
// }
    // void sum(int a, int b){
    //     cout<<"Sum is: "<<a+b<<endl;
    // }

    void dosomthing(string n){
        cout<<n<<" is replaced by ";
        n[0] = 'T';
        cout<<n<<endl;
    }
int main(){
    // int day;
    // cin>>day;

    // switch(day){
    //     case 1:
    //     cout<<"Saturday";
    //     break;
    //     case 2:
    //     cout<<"sunday";
    //     break;
    //     case 3:
    //     cout<<"monday";
    //     break;
    //     case 40:
    //     cout<<"tuesday";
    //     break;
    //     default:
    //     cout<<"invalid input";
    // }

    //array//
    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }
    // cout<<"Array elements are: ";
    // for(int i=4; i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    // arr[2]+=7;
    // cout<<"\nArray elements after updating 3rd element: "<<arr[2];
    
    //2D array//
    // int arr[3][3];
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"2D Array elements are: \n";
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    //string//
    // string str;
    // cin>>str;
    // cout<<"String is: "<<str<<endl;
    // cout<<"your first character is: "<<str[0]<<endl;
    // int length = str.length();
    // cout<<"and last character is: "<<str[length-1]<<endl;

    //function//
    // string name, name2;
    // cin>>name;
    // cin>>name2;
    // printname(name);
    // printname(name2);

    // int a, b;
    // cout<<"Enter two numbers to find their sum: ";
    // cin>>a>>b;
    // sum(a, b);
    string name ;
    cin>>name;
    dosomthing(name);
    return 0;
}

