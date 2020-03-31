#include <iostream>
using namespace std;

bool isEaven(int &a){
    if((a % 2) == 0){
        if(a != 2){
            return true;
        }
        return false;
    }
    return false;
}

int main() {
    int w;
    cin  >> w;
    if(w <= 100 && w >= 1) {
      if(isEaven(w)){
        cout << "Yes";
      } else{
          cout << "No";
      }
    }
    return 0;
}
