Sales_data first_item(cin);		//使用Sales_data(std::istream &is)，值均为未定义

int main(){
    Sales_data next;		//使用Sales_data(std::string s=" ")，值bookNo为空，其它为0
    Sales_data last("9-999-99999-9");//使用Sales_data(std::string s=" ")，值bookNo为“9-999-99999-9”，其它为0
}