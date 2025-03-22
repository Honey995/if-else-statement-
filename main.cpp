#include <iostream>
using namespace std;
int main(){
    int age; 
    cout << " enter the age" <<endl;
    cin>>age;
    if ( age> 150 ||age<1){
        cout<< "invaliod age";
    }
   
    else if (age>=18 ) {
        cout<<" you can  vote";
    }
    else{
        cout<<" youn cant not vote "<<endl;
        }

}
