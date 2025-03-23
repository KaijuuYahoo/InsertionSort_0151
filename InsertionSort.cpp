#include <iostream>
using namespace std;

int arr[20]; //Membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input (){// Prosedur Input
    while(true){
        cout << "Masukkkan Jumlah Data Pada Array : "; //Membuat inputan jumlah elemen Array
        cin >> n; //Memanggil Variabel inputan n

        if (n <= 20)
        {//Membuat kondisi n tidak lebih dari 20
            break;
        }
        else{
            cout << "\nArray yang anda masukkan maksimal 20 elemen\n" ; //Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;
    cout << "======================" << endl; //Membuat tampilan susunan data elemen array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i=0; i<n; i++)//Menggunakan Perulangan For untuk menyimpan Data pada Array
    {
        cout << "Data ke-" << i+1 << ": ";//Memasukkan atau Menginputkan nilai data n 
        cin >> arr[i];//Menyimpan nilai data n kedalam array arr
    }
}
void InsertionSort()
{// Prosedur InsertionSort
    int temp; // Membuat Variable data temporer atau penyimpan data sementara
    int j,i; //Membuat Variabel j sebagai penanda

    for( int i=1; i<=n; i++)//Step 1
    {
        temp = arr[i]; //Step 2
        j = i - 1; //Step 3
        while (j >= 0 && arr[j])
        {
            arr[j+1] = arr[j];//Step 4a
            j--; //Step 4b
        }
        arr[j+1] = temp; //Step 5
    }
}  

void display(){
    cout << endl;// Output Baris Kosong
    cout << "=================================" << endl;
    cout << "Total Pass = " << n-1 << endl;//count elemen movement
    cout << "=================================" << endl;// Output ke Layar
    cout << "Element Array yang Telah Tersusun" << endl;// Output ke Layar
    cout << "=================================" << endl;// Output ke Layar

    for(int j=0; j<n; j++)
    {//Looping Dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;// Output ke Layar
    }
    cout<<endl;
}
int main (){
    input();
    InsertionSort();
    display();

}