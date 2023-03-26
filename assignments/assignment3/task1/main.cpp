#include <iostream>

using namespace std;

class Marks {
    private:
        int mark;
    
    public:
        Marks() {
            mark = 0;
        }

        Marks(int mark){
            this->mark = mark;
        }

        Marks operator+ (Marks const& obj){
            Marks temp;
            temp.mark = this->mark + obj.mark;
            return temp;
        }

        int getMark(){
            return mark;
        }
};


int main() {
    int q1, q2, lab, mid, final;
    cout << "Quiz 1 (out of 10): ";
    cin >> q1;
    cout << "Quiz 2 (out of 10): ";
    cin >> q2;
    cout << "Lab (out of 30): ";
    cin >> lab;
    cout << "Mid (out of 20): ";
    cin >> mid;
    cout << "Final (out of 30): ";
    cin >> final;
    Marks Q1(q1), Q2(q2), Lab(lab), Mid(mid), Final(final);
    Marks total = Q1 + Q2 + Lab + Mid + Final;
    cout << "Total marks: " << total.getMark() << endl;

    return 0;
}
