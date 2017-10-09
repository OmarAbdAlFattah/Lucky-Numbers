#include <iostream>
#include <string>
using namespace std;

bool answer;
string luckyNum(int n){ //checks weather the number is lucky or not
    if( (n ==4 || n == 7) ){
        answer = true;
    }
    else{

        if(n >= 10 && ((n % 10) == 4) || ((n % 10 == 7))  ){
            if( (n % 10 == 4 || n % 10 == 7) ){ //the tenth
                if(n >= 100 && (n % 100 == 4 || n % 100 == 7)){ //the hundredth
                    answer = true;
                }
                else{
                    answer != true;
                }
            }
            else{
                if(n % 7 == 0 || n % 4 == 0){
                    answer = true;
            }

        }
        }
        if(n % 7 == 0 || n % 4 == 0){
                answer = true;
        }
        }



    if(!answer){
        cout<<"No\n";
    }
    else
        cout<<"YES\n";

}
int main()
{
    int n;
    cin>>n;
    luckyNum(n);
    return 0;
}
