#include <iostream>
#include <vector>

using std::cout;using std::cin;using std::endl;using std::vector;

int main(){
    int num;
    vector<int> ivec;
    while (cin >> num)
        ivec.push_back(num);

    if(ivec.size()<2){
        cout << "need more num" <<endl;
        return -1;
    }

    for (size_t i = 0; i < ivec.size()/2 ; ++i)
        cout << ivec[i] + ivec[ivec.size()-1-i] << " ";
    // If the vector has odd size, need cout the element in the middle 
    if (ivec.size() %2 != 0)
        cout << ivec[ivec.size()/2] << " ";

    system("pause");
    return 0;
}
