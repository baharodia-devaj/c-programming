#include <iostream>
using namespace std;

void update(int *pa,int *pb) {
    // Complete this function
    cout<<*pa + *pb<<endl;
}
void sub(int *pa,int *pb){
    cout<<abs(*pa - *pb);
}

int main() {
    int *pa;
    int *pb;
    int a, b;
    pa = &a, pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa,pb);
    sub(pa,pb);
    
    return 0;
}
