#include <iostream>
using namespace std;
namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;
    cout << x << "\n";
    return 0;
}