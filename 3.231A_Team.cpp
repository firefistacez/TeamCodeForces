#include <iostream>

using namespace std;

int main(){
    int num;
    int ans1, ans2, ans3;
    cin >> num;
    int answer[num][3];
    for(int i=0;i<num;i+=1){
        cin >> ans1 >> ans2 >> ans3;
        answer[i][0] = ans1;
        answer[i][1] = ans2;
        answer[i][2] = ans3;
    }
    int count = 0;
    int answ = 0;
    for(int i=0;i<num;i+=1){
        count = 0;
        for(int j=0;j<3;j+=1){
            if(answer[i][j]==1){
                count+=1;
            }
        }
        if(count>1){
            answ += 1;
        }
    }
    cout << answ;
}