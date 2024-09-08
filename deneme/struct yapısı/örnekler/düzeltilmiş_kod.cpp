#include <iostream>
using namespace std;

struct Player {
    string name;
    int games_played;
    int total_points;
    int total_assists;
    int total_rebounds;
};

struct Team {
    string team_name;
    Player players[5];
};

float* points_avg(Team *n, float *total) {
    *total = 0; 
    for(int i = 0; i < 5; i++) { 
        *total += static_cast<float>(n->players[i].total_points) / n->players[i].games_played;
    }
    *total /= 5; 
    return total;
}

void team_stats(Team *n) {
    float totalp = 0;
    float totala = 0;
    float totalr = 0;
    for(int i = 0; i < 5; i++) {
        totalp += n->players[i].total_points;
        totala += n->players[i].total_assists;
        totalr += n->players[i].total_rebounds;
    }
    cout << "Toplam Puan: " << totalp << endl;
    cout << "Toplam Asist: " << totala << endl;
    cout << "Toplam Ribaund: " << totalr << endl;
}

void find_best_player(Team t1, Player &bestPlayer) {
    float highestAverage = static_cast<float>(t1.players[0].total_points) / t1.players[0].games_played;
    bestPlayer = t1.players[0];

    for (int i = 1; i < 5; i++) {
        float averagePoints = static_cast<float>(t1.players[i].total_points) / t1.players[i].games_played;
        if (averagePoints > highestAverage) {
            highestAverage = averagePoints;
            bestPlayer = t1.players[i];
        }
    }
}

int main() {
    float total = 0;
    Team t1;

    cout << "Takım Adı: ";
    cin >> t1.team_name;

    cout << "Oyuncu Bilgilerini Girin: " << endl;
    for(int i = 0; i < 5; i++) {  
       cout << "Oyuncu " << i + 1 << " Adı: ";
       cin >> t1.players[i].name;
       cout << "Oynanan Maç Sayısı: ";
       cin >> t1.players[i].games_played;
       cout << "Toplam Puan: ";
       cin >> t1.players[i].total_points;
       cout << "Toplam Asist: ";
       cin >> t1.players[i].total_assists;
       cout << "Toplam Ribaund: ";
       cin >> t1.players[i].total_rebounds;
    }

    float *a = points_avg(&t1, &total);
    cout << "Puan Ortalaması: " << *a << endl;

    Player bestPlayer;
    find_best_player(t1, bestPlayer);
    cout << "En İyi Oyuncu: " << bestPlayer.name << endl;

    team_stats(&t1);

    return 0;
}
