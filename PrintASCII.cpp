#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i < 128; ++i) {

        cout << setw(3) << i << ": ";
        cout << left << setw(4);
        switch (i) 
        {
            case 0:
                cout << "NUL";
                break;
            case 1:
                cout << "SOH";
                break;
            case 2:
                cout << "STX";
                break;
            case 3:
                cout << "ETX";
                break;
            case 4:
                cout << "EOT";
                break;
            case 5:
                cout << "ENQ";
                break;
            case 6:
                cout << "ACK";
                break;
            case 7:
                cout << "BEL";
                break;
            case 8:
                cout << "BS";
                break;
            case 9:
                cout << "TAB";
                break;
            case 10:
                cout << "LF";
                break;
            case 11:
                cout << "VT";
                break;
            case 12:
                cout << "FF";
                break;
            case 13:
                cout << "CR";
                break;
            case 14:
                cout << "SO";
                break;
            case 15:
                cout << "SI";
                break;
            case 16:
                cout << "DLE";
                break;
            case 17:
                cout << "DC1";
                break;
            case 18:
                cout << "DC2";
                break;
            case 19:
                cout << "DC3";
                break;
            case 20:
                cout << "DC4";
                break;
            case 21:
                cout << "NAK";
                break;
            case 22:
                cout << "SYN";
                break;
            case 23:
                cout << "ETB";
                break;
            case 24:
                cout << "CAN";
                break;
            case 25:
                cout << "EM";
                break;
            case 26:
                cout << "SUB";
                break;
            case 27:
                cout << "ESC";
                break;
            case 28:
                cout << "FS";
                break;
            case 29:
                cout << "GS";
                break;
            case 30:
                cout << "RS";
                break;
            case 31:
                cout << "US";
                break;
            case 32:
                cout << "SPACE";
                break;
            case 127:
                cout << "DEL";
                break;
            default:
                cout << static_cast<char>(i);
                break;
        }
        cout << right << setw(1);
        if ((i + 1) % 16 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}