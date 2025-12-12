// 910 Who is the best?
// You are given list of students name and their points. Askar Agay wants to find out who scored the most points by percentage. Askar Agay is busy with the NEERC final, he asks you to help him.



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void f(vector <pair<double, string> > & m, string name, double score){
    int index = -1;
    for(int i = 0; i < m.size(); ++i){
        if(m[i].second == name){
            index = i;
            break;
        }
    }
    if(index != -1){
        m[index].first += score;
    }else{
        m.push_back(make_pair(score, name));
    }
}

int main(){
    string name;
    double score;
    int overall = 0;
    int n;
    cin >> n;
    vector <pair<double, string> > m;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        f(m, name, score);
        overall += score;
    }

    sort(m.begin(), m.end(), greater<pair<double, string> >());

    for(auto &p: m){
        string name = p.second;
        double score = p.first;
        cout << name << " " << 100 * (score / overall) << "%\n";
    }



    return 0;
}