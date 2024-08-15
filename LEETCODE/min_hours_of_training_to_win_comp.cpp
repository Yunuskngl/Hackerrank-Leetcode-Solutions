//SOLUTION:

//https://leetcode.com/problems/minimum-hours-of-training-to-win-a-competition/description/

/*class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sum = 0;
        int sum2 = 0;
        for(int i = 0; i < energy.size(); i++){
            sum += energy[i];
        }
        int ant = 0; 
        if(sum >= initialEnergy){
            ant = sum - initialEnergy; 
            ant += 1;         
        }
        for(int i = 0; i < experience.size(); i++){ 
            sum2 += experience[i];   
        }
        if(initialExperience > sum2)
            return ant;
        else {
            for(int j = 0; j < experience.size(); j++){ 
                if(initialExperience <= experience[j]){ 
                    int temp = experience[j] - initialExperience ; 
                    temp += 1;
                    ant += temp;
                }
                initialExperience += experience[j];
            }
        }
        return ant;
    }
};*/






// SOLUTION 2:
/*
class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sum = 0,energyRequired=0,expRequired=0;
        for(int i=0;i<energy.size();i++){
            sum = sum + energy[i];
        }
        if(initialEnergy <= sum){
            energyRequired = sum - initialEnergy + 1;
        }
        int expMax = 0;
        for(int i=0;i<experience.size();i++){
            if(initialExperience <= experience[i]){
                expRequired = experience[i] - initialExperience + 1;
                if(expRequired > expMax){
                    expMax = expRequired;
                }
            }
            initialExperience = initialExperience + experience[i];
        }
        return energyRequired+expMax;
    }
}; */