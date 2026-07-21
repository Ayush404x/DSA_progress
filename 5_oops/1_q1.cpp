#include <iostream>
using namespace std;
int main(){
class book{
    public:
    int no0fpage;
    char name;
    int price;
    int countBooks(int p){
        if (price<p)
        return 1;
        else
        return 0;
    }
    int isBookprsent(char book){
        if(name==book)
        return true;
        else
        return false;
    }
    
};
book harrypotter;
harrypotter.no0fpage=500;
harrypotter.price=1000;
harrypotter.name='H';
cout<<harrypotter.countBooks(1000)
}

