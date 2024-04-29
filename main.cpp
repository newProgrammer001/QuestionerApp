#include <iostream>
#include <vector>

using namespace std;
vector<string> question;
vector<string> realAnswers;
vector<string>answer;
void addquestions(){
    int n,i;
    cout<<"how many questions you want to add?"<<endl;
    cin>>n;
    string  q,a;
    cin.ignore();
    for(i=0;i<n;i++){
    cout<<"write question number #"<<i+1<<endl;
    getline(cin,q);
    question.push_back(q);
    }
    for(i=0;i<n;i++){
    cout<<"Write the answer to question #"<<i+1<<endl<<question[i]<<endl;
    getline(cin,a);
    realAnswers.push_back(a);

    }


}

void printQustions(){
    int n= question.size();
    string a1;
    cin.ignore();
    for(int i=0;i<n;i++){
    cout<<question[i]<<endl;
    getline(cin,a1);
    answer.push_back(a1);
    if(answer[i]==realAnswers[i]){
        cout<<"true\n"<<endl;
        }else{
        cout<<"false\n"<<endl;
        }
    }
}
void menu(){
int zgjedh;
cout<<"1 Add questions"<<endl;
cout<<"2 Open questionare"<<endl;
cout<<"3 Exit"<<endl;
cin>>zgjedh;
switch(zgjedh){
    case 1:
    addquestions();
    break;
    case 2:
    printQustions();
    break;
    case 3:
    cout<<"exiting"<<endl;
    break;
    default:
    cout<<"Pick 1 ,2 or 3"<<endl;
}
}
int main(){
char user;

do{
menu();
cout<<"Do  u want to continue?"<<endl;
cin>>user;
}while(user=='Y'||user=='y');
    return 0;
}