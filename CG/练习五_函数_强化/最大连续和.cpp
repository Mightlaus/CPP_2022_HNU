#  include  <iostream>

using namespace std;

void getMaxSum(int a[], int n, int &Left, int &Right);

int main() {
    int n;
    cin >> n;

    int *p = new int[n];

    for (int i = 0; i < n; i++)
        cin >> p[i];

    int Left, Right;
    // begin
    getMaxSum(p, n, Left, Right);
    // end
    cout << Left << "  " << Right << endl;
    delete[]  p;

    return 0;
}

void getMaxSum(int a[], int n, int &Left, int &Right) {
    // begin
    int max = 0;

    for (int begin = 0; begin < n-1; ++begin) {
        for (int end = 1; end < n; ++end) {
            int tmp_max=0;
            for (int i = begin; i <= end; ++i) {
                tmp_max+=a[i];
            }
            if(tmp_max>max){
                max = tmp_max;
                Left=begin;
                Right=end;
            }
        }
    }
    //end

}
