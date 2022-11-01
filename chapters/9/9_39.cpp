vector<string> svec;	//定义svec为空，size为0，capacity为0
svec.reserve(1024);		//将svec的预分配容量调整为1024，capacity为1024
string word;
while (cin >> word)
    svec.push_back(word);	//从cin中读取输入到word中，并压入svec末尾
svec.resize(svec.size() + svec.size() / 2)	//将svec的size调整为当前size的1.5倍
