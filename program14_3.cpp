#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef map<string,int> phoneMap;

int main(){
    string name;
    int number; 
    phoneMap phone;
    cout<<"Enter three sets of name and number "<<endl;

    // for loop initializing to elements 
    for(int i = 0; i<3; i++){
        cin>>name;// Get key 
        cin>>number; // Get value 
        phone[name] = number; // Put them in map
    }

    phone ["Jacob"] = 4444;//Insert Jacob

    phone.insert(pair<string,int>("Bose",5555));
    int n = phone.size();
    cout<<"\nSize of Map : "<<n<<endl<<endl;
    cout<<"List of telephone numbers"<<endl;
    phoneMap::iterator p;
    for(p =phone.begin(); p != phone.end(); p++){
        cout<<(*p).first/*also done by p->first */<<" "<<p->second<<endl;

    }
    cout<<endl;
    cout<<"Enter the name : ";
    cin>>name;
    number = phone[name];
    cout<<"Number : "<<number<<endl;
    cout<<endl;
    return 0;
}