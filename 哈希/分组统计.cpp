//http://codeup.cn/problem.php?cid=100000582&pid=1 
#include <iostream>
#include <algorithm>     //max_element,unique_copy
#include <cstring>
#include <vector>
using namespace std;
int main() {
    int M;
    while(cin>>M) {
        while (M--) {
            int N;                  //�������ݵĸ���
            cin >> N;
            int nums[N], cls[N];    //���ݺ����
            for (int i = 0; i < N; i++)
                cin >> nums[i];
            for (int i = 0; i < N; i++)
                cin >> cls[i];
            // ���ݵ����ֵ�����
            int max_cls = *max_element(cls, cls + N);
            int max_num = *max_element(nums, nums + N);
            // hash��ά�������
            int hashTable[max_cls + 1][max_num + 1];
            // ȫ����ʼ��
            memset(hashTable, 0, sizeof(hashTable));
            for (int i = 0; i < N; i++)
                hashTable[cls[i]][nums[i]]++;
            //������ȥ��
            vector<int> v2;
            sort(cls, cls+N);
            unique_copy(cls, cls + N, back_inserter(v2));
            //nums����ȥ��
            vector<int> v;
            sort(nums, nums + N);
            unique_copy(nums, nums + N, back_inserter(v));
            for (int i = 0; i < v2.size(); i++) {
                cout << v2[i] << "={";
                for (int j = 0; j < v.size(); j++) {
                    cout << v[j] << '=' << hashTable[v2[i]][v[j]];
                    if (j < v.size() - 1) cout << ',';
                }
                cout << '}' << endl;
            }
        }
    }
    return 0;
}
