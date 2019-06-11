
   void findGrayCode(vector<int> &res, int n, int &num){
    if(n==0){
        res.push_back(num);
        return;
    }
       findGrayCode(res,n-1,num);
       num = num ^(1 << (n-1));
       findGrayCode(res,n-1,num);
   } 

    vector<int> grayCode(int n) {
        vector <int> res;   
        int num = 0;
        findGrayCode(res, n, num);
        return res;
    }

int main(){

}
