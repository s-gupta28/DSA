class Solution {
private:
    vector<int> nextSmallerElements(vector<int> arr, int n){
        stack <int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1; i>=0; i--){
            int curr=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top ();
            s.push(i);
        }
    return ans;}

     vector<int> prevSmallerElemets(vector<int> arr, int n){
        stack <int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0; i<n ;i++){
            int curr=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
   return ans; }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
         
        vector<int> next;
        next=nextSmallerElements(heights,n);

        vector<int> prev;
        prev=prevSmallerElemets(heights,n);

        int area=INT_MIN;

        for(int i=0; i<n; i++){
            int l= heights[i];
            
            
            //egde case
            //2 2 2 2
            if(next[i]==-1 ){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newArea=l*b;
            area=max(area,newArea);


        }
    return area;}
};