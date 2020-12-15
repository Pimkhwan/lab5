#include<iostream>
using namespace std;

int main(){
    int num;
    int i=1;
    int Even=-1;
    int Odd=0;
    while(i!=0){
    cout << "Enter an integer: ";
    cin >> num;
    
    if(num%2==0){
    Even++;
}
    else{
    Odd++;
	}
    i=num;
}
    cout << "#Even numbers = " << Even;
    cout << "\n#Odd numbers = " << Odd;
    return 0;
}
