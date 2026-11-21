#include <iostream>
using namespace std;

int main() {
    int suhu[7] = {30, 32, 31, 33, 29, 30, 34};
    int total = 0;
    float rataRata;

    for (int i = 0; i < 7; i++) {
        total += suhu[i];
    }

    rataRata = (float) total / 7;

    cout << "Total suhu selama seminggu: " << total << endl;
    cout << "Rata-rata suhu mingguan: " << rataRata << endl;

    return 0;
}
