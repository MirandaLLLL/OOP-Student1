#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
	int i, j;
	float aveF, aveS, aveT; //calculate the average scores of ten students;
	int minF, minS, minT;//find the minimum scores of ten students;
	int maxF, maxS, maxT;//find the maximum scores of ten students;
	int scoreF[10] = { 5,4,3,4,3,4,4,4,2,5 };//record all students' first scores;
	int scoreS[10] = { 5,3,4,3,4,2,2,4,3,4 };//record all students' second scores;
	int scoreT[10] = { 5,2,5,4,3,5,1,4,4,3 };//record all students' third scores;
	float average[10];//record all students' average score;
	string name[10] = { "K.Weng  ","T.Dixon ","V.Chu   ","L.Tson  ","L.Lee   ","I.Young ","K.Hiro  ","G.Ping  ","H.Gu    ","J.Jon   " };//record all students' name;

	aveF = aveS = aveT = 0;
	minF = scoreF[0];
	minS = scoreS[0];
	minT = scoreT[0];
	maxF = scoreF[0];
	maxS = scoreS[0];
	maxT = scoreT[0];        //initialize the min and max and average scores;
	for (i = 0; i < 10; i++) {
		float a = scoreF[i], b = scoreS[i], c = scoreT[i]; //convert the type of score;

		average[i] = (a + b + c) / 3;  //calculate each student's average score;
		aveF = aveF + a;
		aveS = aveS + b;
		aveT = aveT + c;    //calculate the sum of each score;
		if (scoreF[i] > maxF)
			maxF = scoreF[i];
		if (scoreT[i] > maxT)
			maxT = scoreT[i];
		if (scoreS[i] > maxS)
			maxS = scoreS[i];  //find the maximum scores;
		if (scoreF[i] < minF)
			minF = scoreF[i];
		if (scoreS[i] < minS)
			minS = scoreS[i];
		if (scoreT[i] < minT)
			minT = scoreT[i];  //find the minimum scores;
	}
	aveF = aveF / 10;
	aveS = aveS / 10;
	aveT = aveT / 10;  //calculate the average scores;

	cout << "no      name    score1  score2  score3  average" << endl;  //output the first line

	

	for (i = 0; i < 9; i++) {                //output the first nine students' records
		int num = i + 1;
		cout << num << "       " << name[i];    //output the No. and the name ;
		
		cout << scoreF[i] << "       " << scoreS[i] << "       " << scoreT[i] << "       " << average[i] << endl;
		//output three scores and the average score;
	}

	cout << "10      " << name[9];           //output the No. and the name of last student;
	
	cout << scoreF[9] << "       " << scoreS[9] << "       " << scoreT[9] << "       " << average[9] << endl;
	//output three scores and the average;
	cout << "        average ";
	cout << fixed << setprecision(1) << aveF << "     ";
	cout << fixed << setprecision(1) << aveS << "     ";
	cout << fixed << setprecision(1) << aveT << endl;     

	//output three average scores of ten students;
	cout << "        min     " << minF << "       " << minS << "       " << minT << endl;
	//output three minimum scores of ten students;
	cout << "        max     " << maxF << "       " << maxS << "       " << maxT << endl;
	//output three maximum scores of ten students;

	return 0;
}