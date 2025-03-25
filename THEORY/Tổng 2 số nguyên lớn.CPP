string calculateSum(string a, string b){
    ll carry = 0, sum;
    string ans;
	// Xử lí 2 xâu a và b để chúng = nhau
    for (int i = 0; i < max(a.size(), b.size()); i++){
        if (a.size() == b.size()) break; // Nếu = nhau thì dừng
        else if (a.size() < b.size()){
            a = '0' + a;
        }
        else{
            b = '0' + b;
        }
    }
    ans = a; // Sau khi = nhau thì gán biến ans = a
    for (int i = a.size() - 1; i >= 0; i--){
        sum = a[i] - '0' + b[i] - '0' + carry; // - '0' chuỗi -> số
        carry = sum / 10;
        ans[i] = (sum % 10) + '0'; // + '0' số -> chuỗi
    }
    if (carry == 1) ans = '1' + ans; // Nếu nhớ = 1 thì thêm '1' trước ans
    return ans;
}
