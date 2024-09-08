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
    Player players[5];  // 1 yerine 5 oyuncu için diziyi genişlettim
};

// Oyuncu başına puan ortalamasını hesaplayan fonksiyon
float* points_avg(Team *n, float *total) {
    *total = 0;  // total değerini sıfırladım, null pointer hatasını önlemek için
    for(int i = 0; i < 5; i++) {  // 1 yerine 5 döngüsü kullanıldı
        *total += (n->players[i].total_points) / n->players[i].games_played;
    }
    *total /= 5;  // Toplamı oyuncu sayısına böldüm
    return total;
}

// Takım istatistiklerini hesaplayan fonksiyon
void team_stats(Team *n) {
    float totalp = 0;
    float totala = 0;
    float totalr = 0;
    for(int i = 0; i < 5; i++) {
        totalp += n->players[i].total_points;
        totala += n->players[i].total_assists;  // "total_assits" yanlış yazımını düzelttim
        totalr += n->players[i].total_rebounds;
    }
    cout << "Toplam Puan: " << totalp << endl;
    cout << "Toplam Asist: " << totala << endl;
    cout << "Toplam Ribaund: " << totalr << endl;
}

// En iyi oyuncuyu bulan fonksiyon
Player best_player(Team t1) {
    Player bestPlayer = t1.players[0];
    float highestAverage = static_cast<float>(t1.players[0].total_points) / t1.players[0].games_played;
    
    for (int i = 1; i < 5; i++) {
        float averagePoints = static_cast<float>(t1.players[i].total_points) / t1.players[i].games_played;
        if (averagePoints > highestAverage) {
            highestAverage = averagePoints;
            bestPlayer = t1.players[i];
        }
    }

    return bestPlayer;
}

int main() {
    float total = 0;
    Team t1;

    // Takım bilgilerini alıyoruz
    cout << "Takım Adı: ";
    cin >> t1.team_name;

    // Oyuncu bilgilerini alıyoruz
    cout << "Oyuncu Bilgilerini Girin: " << endl;
    for(int i = 0; i < 5; i++) {  // 1 yerine 5 döngüsü kullanıldı
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

    // Puan ortalamasını hesapla
    float *a = points_avg(&t1, &total);  // 0 yerine total değişkeninin adresini verdim
    cout << "Puan Ortalaması: " << *a << endl;

    // Takımın en iyi oyuncusunu bul
    Player best = best_player(t1);
    cout << "En İyi Oyuncu: " << best.name << endl;

    // Takım istatistiklerini hesapla
    team_stats(&t1);  // team_stats fonksiyonunu çağırdım

    return 0;
}
