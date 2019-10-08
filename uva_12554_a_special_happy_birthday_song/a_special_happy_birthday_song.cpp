#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> song;
    song = {"Happy" ,"birthday" ,"to" ,"you" ,"Happy" ,"birthday"
       ,"to" ,"you" ,"Happy" ,"birthday" ,"to" ,"Rujia" ,"Happy" ,"birthday"
       ,"to" ,"you"};
    int32_t n_people;
    cin >> n_people;
    vector<string> people;
    while(n_people--)
    {
        string person;
        cin >> person;
        people.push_back(person);
    }

    int32_t i = 0;
    int32_t j = 0;
    int32_t num_words = (people.size() <= song.size() ? song.size() :
        people.size() + song.size() - people.size()%song.size()) ;
    while (num_words--)
    {
        cout << people[i] << ": ";
        cout << song[(j)] << endl;
        j = (j+1)%song.size();
        i = (i+1)%people.size();
    }
    return 0;
}
