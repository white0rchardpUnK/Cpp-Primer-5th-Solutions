#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::ostream;
#include <string>
using std::string; using std::stoi;
#include <array>
using std::array;

class Date{
    friend ostream &print(ostream &os, const Date &d);
public:
    explicit Date(const string &s);
    explicit Date(unsigned d = 0, unsigned m = 0, unsigned y = 0)
                 : day(d), month(m), year(y){};
private:
    unsigned day;
    unsigned month;
    unsigned year;

    static const array<string, 12> monthS;
    static const array<string, 12> monthL;
    static const string alPha;
    static const string numbers;
};

const array<string, 12> Date::monthS = {"Jan", "Feb", "Mar", "Apr", "May",
                            "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

const array<string, 12> Date::monthL = {"January", "February", "March", "April", "May", "June",
                                        "July", "August", "September", "October", "November", "December"};

const string Date::alPha = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

const string Date::numbers = {"0123456789"};

Date::Date(const string &s) : Date() {
    //处理January 1, 1900和Jan 1 1900等全写/缩写形式
    if (s.find_first_of(alPha) != string::npos){
        //搜寻月份，从缩写开始搜寻
        for (decltype(monthS.size()) pos = 0; pos != monthS.size(); ++pos){
            //找到简写月份
            if (s.find(monthS[pos]) != string::npos){
                //检测缩写后是否正确，如JanFeb这类格式将非法
                auto postmp = pos + monthS[pos].size();
                if (s[postmp] != ' ' && (monthL[pos].find(s[postmp]) == string::npos)){
                    cout << "Ilegal month input!" << endl;
                    break;
                } else {
                    month = pos + 1;
                }
            } else if (s.find(monthL[pos]) != string::npos){
                //找到全写月份
                month = pos + 1;
                break;
            }
        }   //月份处理完成，从剩余string中处理日和年
        string tmp1 = s.substr(s.find_first_of(numbers));    //型如1,1900和31 1900等
        string tmp2 = tmp1.substr(0,tmp1.find_first_not_of(numbers));   //仅剩日期数字
        day = stoi(tmp2);
        year = stoi(tmp1.substr(tmp1.find_first_not_of(numbers)));  //仅剩年份数字
    } else if (s.find_first_of('/') != string::npos){
        //处理1/1/1990形式
        string tmp3 = s.substr(s.find_first_of(numbers));
        day = stoi(tmp3);
        tmp3 = tmp3.substr(tmp3.find_first_not_of(numbers));
        tmp3 = tmp3.substr(tmp3.find_first_of(numbers));
        month = stoi(tmp3);
        tmp3 = tmp3.substr(tmp3.find_first_not_of(numbers));
        tmp3 = tmp3.substr(tmp3.find_first_of(numbers));
        year = stoi(tmp3);
    } else {
        cerr << "Wrong Date input" << endl;
    }
}

ostream &print(ostream &os, const Date &d) {
    os << "Month: " << '\t' << d.month << '\n'
       << "Day: " << '\t' << d.day << '\n'
       << "Year: " << '\t' << d.year << '\n';
    return os;
}

int main() {
    print(cout, Date("January 1 1900")) << endl;
    print(cout, Date("Jan 1 1900")) << endl;
    print(cout, Date("1/1/1900")) << endl;

}
