 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
// int add(int num1, int num2){
//         int sum=num1+num2;
//         return sum;
// }
// void sortbyparity(vector<int> &v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;
//    while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//             swap(v[left_ptr],v[right_ptr]);
//             left_ptr++; right_ptr--;
//         }
//         if(v[left_ptr]%2==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }

// } 

// process 1
// int largestelementindex(int array[],int size){
//     int max=INT16_MIN;
//     int maxindex=-1;
// for(int i=0;i<size;i++){
//     if(array[i]>max){              
//         max=array[i];  
//         maxindex=i;  
//     }
// }
// return maxindex;
// }
// process 2
// int secondlargestelement(int array[],int size){
//     int max=INT16_MIN;
//     int secondmax=INT16_MIN;
//     for(int i=0;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(array[i]>secondmax && array[i]!=max){
//             secondmax=array[i];
//         }
//     }
//     return secondmax;
// }

                        // sort an array function//
//  void sortanarray(vect   or<int> &v){
//    int left_ptr=0;
//    int right_ptr=v.size()-1;

//    while(left_ptr<right_ptr){
//     if(v[left_ptr]==1 && v[right_ptr]==0){
//         v[left_ptr]=0;
//         v[right_ptr]=1;
//     }
//     if(v[left_ptr]==0){
//         left_ptr++;
//     }
//     if(v[right_ptr]==1){
//         right_ptr++;
//     }
//    }
//  }

int main(){
    // int a=20;
    // int b=4;
    // cout<<add(a,b)<<endl;

                                       //this is to get size and length of an array 
    // int array[]={1,2,3,4};
    // cout<<sizeof(array)<<endl;
    // cout<<sizeof(array)/sizeof(array[2])<<endl;
     
                            //  calculate the sum of all the elements in the given array
    //    int array[]={4,5,10,11};
    //    int size=sizeof(array)/sizeof(array[0]);
    //    int sum=0;
    //    for(int i=0;i<size;i++){
    //     sum+=array[i];
    //    }
    //    cout<<sum<<endl;
                          //find the maximum value out of all element in the array.
    // int array[]={5,7,10,15,18};
    // int size=sizeof(array)/sizeof(array[0]);
    // int max=array[0];
    // for(int i=0;i<size;i++){
    //     if(array[i]>max){
    //         max=array[i];
    //     }
    // }
    // cout<<max<<endl;
    
    // int array[]={2,4,7,12,18};
    // int key=11;
    //  int ans=-1;
    //  for(int i=0;i<5;i++){
    //     if (array[i]==key){
    //         ans=i;
    //     }                             finding given element is presnt or not
    //  }
    //  cout<<ans<<endl;
    
//     vector<int> v;
// cout<<"size: "<<v.size()<<endl;
// cout<<"capacity: "<<v.capacity()<<endl;
                                          //  to get size and capacity
// v.push_back(1);
// cout<<"size: "<<v.size()<<endl;
// cout<<"capacity: "<<v.capacity()<<endl;

// v.push_back(2);
// cout<<"size: "<<v.size()<<endl;
// cout<<"capacity: "<<v.capacity()<<endl;

// v.push_back(3);
// cout<<"size: "<<v.size()<<endl;
// cout<<"capacity: "<<v.capacity()<<endl;

// vector<int> v;
//                                      //for loop
// for(int i=0;i<5;i++){
//     int element;
//     cin>>element;
//     v.push_back(element);
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<"";
// }
// cout<<endl;
//                                   //insert operator
// v.insert(v.begin()+2,6);
//                                   //for each loop
// for(int ele:v){
//     cout<<ele<<"";
// }
// cout<<endl;
//                                    //erase operator
// v.erase(v.end()-3);
//                                     //while loop
// int idx=0;9
// while(idx<v.size()){
//     cout<<v[idx++]<<"";
// }
// cout<<endl;
 
                         // find the last occurance of an element x in an given array.
// vector<int> v(8);
// //12321012
// for(int i=0;i<8;i++){
//     cin>>v[i];
// }
// cout<<"enter x:";
// int x;
// cin>>x;   

//     int occurance;
// for(int i=0;i<v.size();i++){
//     if(v[i]==x){               // ye vector ke sabhi element ko check karta h 
//         occurrence=i;
//     }
// }
// // but what if we calculate from last either, then we dont have to check all elements//
// for(int i=v.size()-1;i>0;i--){
//     if(v[i]==x){
//     occurrence=i;
//     break;
//     }                               //ye last element se check karna start kart h
// }
// cout<<occurrence<<endl;

//count the number of occurrences of a particular element x//
// vector<int> v(6);
// for(int i=0;i<6;i++){
//     cin>>v[i];
// }
// cout<<"enter x:";
// int x;
// cin>>x;
// int occurrence=0;
//  for(int i=0;i<v.size();i++){
//     if(v[i]==x){
//         occurrence++;
//     }
//  }
//  cout<<occurrence<<endl;

// count the number of element strictly greater then value x//
// vector<int> v(4);
// for(int i=0;i<4;i++){
//     cin>>v[i];
// }
// cout<<"enter x:";
// int x;
// cin>>x;

// int value;
//  for(int i=0; i<v.size();i++){
//     if(v[i]>x){
//     value=v[i];
//     break;
//     }
//  }
//  cout<<value<<endl;
          //find the total no of pair in the arraY whose sum is equal to the given value x 
// int array[]={3,4,5,2,1,7};
// int size=6;
// int x=7;
// int pairs=0;
// for(int i=0;i<size;i++){                 need to do by my self
//     for(int j=i+1;j<size;j++){
//         if (array[i]+array[j]==x){
//        pairs++;
//         }
//     }
// }
// cout<<pairs<<endl;
              // find the number of pairs whose sum is equal to the given value x;//
// int array[6]={2,4,1,3,0,6};
// int size=6;
// int x=8;
// int nsum=0;
// for(int i=0;i<size;i++){
//     for(int j=i+1;j<size;j++){
//         if(array[i]+array[j]==x){
//             nsum++;
//         }
//     }
// }
// cout<<nsum<<endl;

// int array[7]{2,4,5,2,4,5,3};
// for(int i=0;i<7;i++){
//     for(int j=i+1;j<7;j++){
//         if (array[i]==array[j]){
//             array[i]=array[j]=-1;  
//         }
//     }                this is to find the unique no in the array.
// }
// int num=0;
// for(int i=0;i<7;i++){
//     if (array[i]>0){
//  cout<<array[i]<<endl;
//     }
// }

                 // this is to find the largest and second largest element in the is array
                //  funcion code is on number 9 to 36
// process 1
// int array[6]={2,3,5,7,6,1};
// int indexoflargest=largestelementindex(array,6);
// cout<<array[indexoflargest]<<endl;
// array[indexoflargest]=-1;
// int indexofsecondlargest=largestelementindex(array,6);
// cout<<array[indexofsecondlargest]<<endl;
// process 2
// int array[7]={2,3,5,7,6,1,7};
// cout<<secondlargestelement(array,7)<<endl;

    //rotate the given array'a'by k steps,where k is non negative .
//     int array[]={1,2,3,4,5};
//     int k=4;
//     int n=5;
//      //k can be greater then n;
//      k=k%n;
// int ansarray[5];
// //inserting last k elements in ansarray
//     int j=0;
// for(int i=n-k;i<n;i++){
//    ansarray[j++]=array[i];
// }
// //inserting first n-k element in ansarray
// for(int i=0;i<=k;i++){
//     ansarray[j++]=array[i];
// }
//  for(int i=0;i<n;i++){
//     cout<<ansarray[i]<<" ";
//  }
//  cout<<endl;

// sort an  array consisting of only 0s and 1s;
// int n;
// cin>>n;
// vector<int> v;

// for(int i=0;i<n;i++){
//     int ele;cin>>ele;
//     v.push_back(ele);
// }

// sortanarray(v);
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }cout<<endl;
       //short an array by parity(odd even)
// int n;
// cin>>n;
// vector<int> v;
// for(int i=0;i<n;i++){
//     int ele;cin>>ele;
//     v.push_back(ele);
// }
// sortbyparity(v);
// for(int i=0;i<n;i++){
// cout<<v[i]<<" ";
// }
// cout<<endl;
return 0;
} 
