class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //1. 饼干和小孩排序
        //2. 找饼干最大的与和它数值最近的小孩i点，并匹配
        //3. 输出i-1个

        //小孩排序
        sort(g.begin(),g.end());
        //饼干排序
        sort(s.begin(), s.end());

        //从后向前遍历并比较
        //比较条件
        int my_Size = s.size() - 1;

        //小的为循环限制条件
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