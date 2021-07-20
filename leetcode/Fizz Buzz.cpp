class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<int> arr;
        for(int i=0;i<n;i++)
            arr.push_back(i+1);
    
        vector<string> str(n);
        
        for(int i=0;i<n;i++){
            if(arr[i]%3==0 && arr[i]%5==0)
                str[i]="FizzBuzz";
            else if(arr[i]%3==0)
                str[i]="Fizz";
            else if(arr[i]%5==0)
                str[i]="Buzz";
            else
                str[i]=to_string(i+1);
        }
        
        return str;
    }
};