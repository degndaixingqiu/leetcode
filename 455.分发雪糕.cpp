class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //1. ���ɺ�С������
        //2. �ұ��������������ֵ�����С��i�㣬��ƥ��
        //3. ���i-1��

        //С������
        sort(g.begin(),g.end());
        //��������
        sort(s.begin(), s.end());

        //�Ӻ���ǰ�������Ƚ�
        //�Ƚ�����
        int my_Size = s.size() - 1;

        //С��Ϊѭ����������
        int sum = 0;
        for (int i = g.size()-1; i >= 0; i--)
        {
            if ((my_Size>=0)&&(s[my_Size] >=g[i]))
            {
                sum++;
                my_Size--;


            }
        }



        return sum;


    }
};