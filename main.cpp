#include <iostream>
using namespace std;

void inputDataMahasiswa(string &name, string &placeOfBirth, int &age, int &weight)
{
    cout << "Masukkan Nama: ";
    cin >> name;
    cout << "Masukkan umur: ";
    cin >> age;
    cout << "Masukkan Tempat Lahir: ";
    cin >> placeOfBirth;
    cout << "Masukkan Berat Badan: ";
    cin >> weight;
}

void outputDataMahasiswa(string &name, string &placeOfBirth, int &age, int &weight)
{
    cout << "\nNama Anda: " << name << endl;
    cout << "Umur Anda: " << age << endl;
    cout << "Tempat Lahir: " << placeOfBirth << endl;
    cout << "Berat badan: " << weight << endl;
}

int main()
{
    string name, placeOfBirth;
    int weight, age;

    inputDataMahasiswa(name, placeOfBirth, age, weight);
    outputDataMahasiswa(name, placeOfBirth, age, weight);

    return 0;
}