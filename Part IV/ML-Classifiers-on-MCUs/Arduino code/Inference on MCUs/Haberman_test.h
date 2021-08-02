#define FEATURES_DIMEN 3
#define DATASET_SIZE 100

float X[DATASET_SIZE][FEATURES_DIMEN] = {
//1. Age of patient at time of operation (numerical)
//2. Patient's year of operation (year - 1900, numerical)
//3. Number of positive axillary nodes detected (numerical)
{30,64,1},
{30,62,3},
{30,65,0},
{31,59,2},
{31,65,4},
{33,58,10},
{33,60,0},
{34,59,0},
{34,66,9},
{34,58,30},
{34,60,1},
{34,61,10},
{34,67,7},
{34,60,0},
{35,64,13},
{35,63,0},
{36,60,1},
{36,69,0},
{37,60,0},
{37,63,0},
{37,58,0},
{37,59,6},
{37,60,15},
{37,63,0},
{38,69,21},
{38,59,2},
{38,60,0},
{38,60,0},
{38,62,3},
{38,64,1},
{38,66,0},
{38,66,11},
{38,60,1},
{38,67,5},
{39,66,0},
{39,63,0},
{39,67,0},
{39,58,0},
{39,59,2},
{39,63,4},
{40,58,2},
{40,58,0},
{40,65,0},
{41,60,23},
{41,64,0},
{41,67,0},
{41,58,0},
{41,59,8},
{41,59,0},
{41,64,0},
{41,69,8},
{41,65,0},
{41,65,0},
{42,69,1},
{42,59,0},
{42,58,0},
{42,60,1},
{42,59,2},
{42,61,4},
{42,62,20},
{42,65,0},
{42,63,1},
{43,58,52},
{43,59,2},
{43,64,0},
{43,64,0},
{43,63,14},
{43,64,2},
{43,64,3},
{43,60,0},
{43,63,2},
{43,65,0},
{43,66,4},
{44,64,6},
{44,58,9},
{44,63,19},
{44,61,0},
{44,63,1},
{44,61,0},
{44,67,16},
{45,65,6},
{45,66,0},
{45,67,1},
{45,60,0},
{45,67,0},
{45,59,14},
{45,64,0},
{45,68,0},
{45,67,1},
{46,58,2},
{46,69,3},
{46,62,5},
{46,65,20},
{46,62,0},
{46,58,3},
{46,63,0},
{47,63,23},
{47,62,0},
{47,65,0},
{47,61,0},

};
//4. Survival status (class attribute)
//1 = the patient survived 5 years or longer
//2 = the patient died within 5 year
int y[DATASET_SIZE] = { 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1};