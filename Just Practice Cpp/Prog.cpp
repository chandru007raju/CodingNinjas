// int subset(int * a,int n){ // 2 3 4 0 -4 2 3 --> 2,5 9,9, 5
// // 6 3 -1 2  -4 3 1 -2 20
//     unordered_map<int,int> mapp;
//     int maxcount = 0;
//     int numindex;
//     int sum = 0;
//     mapp[0] = -1; // meaning sum is zero for the index -1
//     for(int i = 0;i< n;i++){
//         int count = 0;
//         sum += a[i];
//         if(mapp.count(sum) > 0){
//             numindex = mapp[sum];
//             count = i - numindex;
//             if(count > maxcount){
//                 maxcount = count;
//             }
//         }
//         else{
//             mapp[sum] = i;
//         }
//     }
//     return maxcount;
// }