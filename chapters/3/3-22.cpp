for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it ){
    *it = toupper(*it);
    cout << *it << endl;
}