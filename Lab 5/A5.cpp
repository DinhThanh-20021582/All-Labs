//bai5_bienthamchieu
#include<iostream>
using namespace std;
int main() {
    int n;
    
    cin >> n;
    cout << " n= " << n<< " at " << &n<< "\n";

    int &thamtri= N;
    cout << " thamtri = " << thamtri << " at " << &thamtri << "\n";

    //a. bien tham bien va bien chieu toi la 1 bien
   //b. Không khai báo  tham chieu mà chua chieu ngay nó tai mot bien 

/* c.Không chieu mot tham chieu tai 1 bien khac voi dich ban dau cua no
    
    int x;
    cin >> x;
    &thamtri=x;
*/
    
}

