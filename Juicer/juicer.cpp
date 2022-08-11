#include<iostream>

using namespace std;


int main(){
    int num_of_oranges, max_size, waste_section_size;
    cin >> num_of_oranges >> max_size>>waste_section_size;

    int result = 0;
    unsigned long long int sum_of_all_sizes = 0, orange_size;
    for(int i=0; i<num_of_oranges; i++){
        cin>>orange_size;
        if(orange_size >= max_size)
            continue;
        sum_of_all_sizes += orange_size;
        while(sum_of_all_sizes > waste_section_size){
            result++;
            sum_of_all_sizes =0;
        }
    }
    
        
    cout<<result<<endl;
    return 0;

} 

