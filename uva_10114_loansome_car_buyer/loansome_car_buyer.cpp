#include<iostream>
#include<limits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int32_t d, n_rec;
    float dp, l;

    while (cin >> d >> dp >> l >> n_rec, d > 0)
    {
        float mp = l/float(d), dep, dep_new;
        int32_t md, md_new, now = 1;

        cin >> md >> dep;
        n_rec--;
        float cv = (dp+l)*(1-dep);
        float owes = l;

        while(n_rec--)
        {
            cin >> md_new >> dep_new;
            while (now < md_new && cv < owes)
            {
                
                cv *= (1-dep);
                owes -= mp;
                now++;
            }
            dep = dep_new;
        }
        while (cv < owes)
        {
            cv *= (1-dep);
            owes -= mp;
            now++;
        }

        cout << --now;

        if (now == 1)
        {
            cout << " month" << endl;
        }
        else
        {
            cout << " months" << endl;
        }
    }

}

// Leia Direito o enunciado e com calma, possivelmente mais vezes.
// Caso não funcione algum teste, tente fazer na mao os testes(debugging é importante)  