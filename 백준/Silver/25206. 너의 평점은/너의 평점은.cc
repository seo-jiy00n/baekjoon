#include <stdio.h>

struct student{
	char subject[50];   //과목명 
	float score;   //학점 
	char grade[2];   //등급 
};

int main(){
	float score_sum=0; 
	float sum=0;
	float result; 
	
	struct student s[20];
	for(int i=0; i<20; i++){
		scanf("%s", s[i].subject);
		scanf("%f", &s[i].score);
		scanf("%s", s[i].grade);
		float grade_score=0.0;
        
		if(s[i].grade[0]==65){
			if(s[i].grade[1]==43) grade_score=4.5;
			else grade_score=4.0;
		}
		else if(s[i].grade[0]==66){
			if(s[i].grade[1]==43) grade_score=3.5;
			else grade_score=3.0;
		}
		else if(s[i].grade[0]==67){
			if(s[i].grade[1]==43) grade_score=2.5;
			else grade_score=2.0;
		} 
		else if(s[i].grade[0]==68){
			if(s[i].grade[1]==43) grade_score=1.5;
			else grade_score=1.0;
		}
		
		if(s[i].grade[0]!=80){
			score_sum += s[i].score;
    		sum += s[i].score * grade_score; 
		}
	}

    result = sum / score_sum;
	printf("%.6f", result);
	
	return 0;
}