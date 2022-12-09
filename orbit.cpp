#include <iostream>
#include <cmath>

using namespace std;

const double G = 6.67408e-11; // Konstanta gravitasi universal

int main()
{
  double M, r; // Massa benda dan jari-jari orbit

  // Meminta input massa benda dan jari-jari orbit dari user
  cout << "Masukkan massa benda (kg): ";
  cin >> M;
  cout << "Masukkan jari-jari orbit (m): ";
  cin >> r;

  // Menghitung kecepatan orbit menggunakan rumus
  double v = sqrt(G * M / r);

  // Menampilkan hasil kecepatan orbit ke layar
  cout << "Kecepatan orbit: " << v << " m/s" << endl;

  return 0;
}
