#include <iostream> 
using namespace std;

int main (){
    int pilihan, jml_barang, harga, total, bayar, diskon;
    string item;

    cout << "                                ALFAMART                   " << endl;
    cout << "                           SMK 2 PRAYA TENGAH              " << endl;
    cout << "===========================================================" << endl;
    cout << "===========================================================" << endl;
    cout << "               DAFTAR MENU                " << endl << endl;
    cout << "1. Permen Mentos : RP. 6000  " <<endl;
    cout << "2. Minyak Wangi Axe : RP. 37.000"<<endl;
    cout << "3. Ultra Milk : RP. 7000" <<endl;
    cout << "===========================================================" << endl;

    do{
        cout << "Masukkan no pilihan : ";
        cin >> pilihan;

        switch(pilihan){
            case 1 :
                item = "Permen Mentos";
                harga = 6000; 
                cout << "jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item << " RP. " << harga * jml_barang << endl;
                break;
            case 2 :
                item = "Minyak Wangi Axe";
                harga = 37.000;
                cout << "jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item << " RP. " << harga * jml_barang<<"000"<< endl;
                break;
            case 3 :
                item = "Ultra Milk";
                harga = 7000;
                cout << "jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " :" << item << " RP. " << harga * jml_barang <<"000"<< endl;
                break;
        
                cout << "=================================================================" << endl;
                cout << "Jumlah Bayar : " << total << endl;

                if(total >= 10000){
                    diskon = 0.01 * total;
                }else if(total >= 50000){
                    diskon = 0.01 * total;
                }else if(total >= 25000){
                    diskon = 0.01 * total;
                }else {
                    diskon = 0;
                }
                cout << "Diskon         : " <<diskon << endl;
                cout << "Total Bayar    : " << total - diskon << endl;
                cout << "Bayar          : ";
                cin >> bayar;
                cout << "kembali        : " << (bayar - (total-diskon)) << endl << endl;
                break;
            default :
                cout << "pilihan anda salah!" << endl << endl;
                break;
        }
    } while(pilihan != 3);
    cout << "Terima Kasih! " <<endl;

}