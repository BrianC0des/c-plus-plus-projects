#include <iostream>
#include <vector>
using std::string;
using std::cout;

/*typedef std::vector<std::pair<std::string, int>> pairlist_t;*/
/*typedef string text_t;
typedef int age_t;*/

using text_t = string;
using num_t = int;

int main(){

    text_t firstName = "Bro";
    num_t age = 18;
    
    cout<< firstName << "\n"; 
    cout<< age << "\n"; 
    return 0;   

}