#include<iostream>
using namespace std;
class student {
    private:
        int scores[5];
    public:
        void input(int scores[]) {
            for(int i = 0; i < 5; i++) {
                this->scores[i] = scores[i];
            }
        }
        int calculateTotalScore() {
            int sum = 0;
            for(int i = 0; i < 5; i++) {
                sum += scores[i];
            }
            return sum;
        }
};
int main() {
    student s1;
    int scores[5];
    int anna[5] = {10, 20, 30, 40, 50};
    int anna_sum = 0;
    int counter = 0;
    for(int i = 0; i < 5; i++) {
        anna_sum += anna[i];
    }
    int n;
    cout << "Total students in anna's class: ";
    cin >> n;
    cout<<"Enter scores: "<<endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> scores[j];
        }
        s1.input(scores);
        if(s1.calculateTotalScore() > anna_sum) {
            counter++;
        }
    }
    cout << "Total students having scores greater than Anna: " << counter << endl;
    return 0;
}
