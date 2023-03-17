#include <iostream>

using namespace std;

int binarySearch(int cari, int n, int angka[])
{
    int akhir, awal, tengah, hasil, i;
    akhir = n - 1;
    awal = 0;
    hasil = -1;
    i = 0;

    while (hasil == -1 && i < n)
    {
        tengah = (awal + akhir) / 2;

        if (angka[tengah] == cari)
        {
            hasil = tengah;
        }
        else
        {
            if (angka[tengah] < cari)
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }

        i++;
    }

    return hasil;
}

int main()
{
    int cari, hasil, i, n;
    int angka[1000];

    cout << "Berapa data yang ingin di input (MAX = 1000): ";
    cin >> n;

    cout << "\nInput angka secara terurut menaik\n";

    for (i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    cout << "Berapa angka yang ingin dicari: ";
    cin >> cari;

    hasil = binarySearch(cari, n, angka);

    if (hasil == -1)
    {
        cout << "\nData tidak ditemukan!";
    }
    else
    {
        cout << "\nAngka " << cari << " ditemukan di indeks " << hasil + 1;
    }

    return 0;
}
