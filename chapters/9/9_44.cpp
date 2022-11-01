#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

void repS(string &s, const string &oV, const string &nV){
    cout << "Old Value String: " << s << endl;
    //最外层循环控制s中的迭代器；无需至s的尾后位置，假如至s尾位置比oV大小小1处则必无匹配
    for (auto itSb = s.begin(); itSb != s.end() - oV.size() + 1;){
        auto itoVb = oV.cbegin();
        //字符匹配则开始检测oV剩余字符与s之后的字符是否匹配
        if (*itSb == *itoVb){
            //使用临时量记录s迭代器位置，循环检测剩余字符是否匹配
            for (auto itSbtmp = itSb; itoVb != oV.cend(); ++itSbtmp, ++itoVb){
                if (*itSbtmp != *itoVb)
                    break;
            }
            //若oV迭代器至尾后位置，证明序列匹配成功
            if (itoVb == oV.cend()){
                //计算并使用索引位置，不能直接使用迭代器，迭代器会在删除/插入操作后失效
                auto pos = itSb - s.begin();
                s.replace(pos, oV.size(), nV);
                //此时因string容量改变，迭代器itSb已失效，需要重新定义位置
                itSb = s.begin() + pos + nV.size();
            } else {
                ++itSb;     //匹配失败
            }
        } else {
            ++itSb;
        }
    }
    cout << "New Value String: " << s << endl;
    cout << "Using " << nV << " replacing " << oV << endl;
}

int main() {
    string s = {"qthwepthoriurtythrasdfglkthrujhzxcvb"};
    repS(s, "tho", "though");
    repS(s, "thru", "through");
}
