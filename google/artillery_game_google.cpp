/*Artillery War Game
 * One canon to shoot ant any angle and 
 * kill as many enemies as you can  */

#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;

int enemy_pos, enemy_count, shoot_count, dist_shoot;
float diference, ang_in, time_s;

void Intro(){
   cout << "*****************************************************************************" << '\n'
	<< "*                     Welcome to Artillery.                                 *" << '\n'
	<< "* You are in the middle of a war and being charged by thousands of enemies. *" << '\n'
       	<< "* You have one cannon, which you can shoot at any angle. The damage radio   *" << '\n'
	<< "*          	is 100m and  the initial speed of the ball is 220m/s            *" << '\n'
	<< "*        You only have 10 cannonballs for this target...                    *" << '\n' 
	<< "*                          Let's begin...                                   *" << '\n'
	<< "*****************************************************************************" << '\n'
	<< endl;
}

int enemy_gen(){
	//This function generates a random distance enemy
	srand (time(NULL));
	enemy_pos = rand () % 4900 + 1;
}

int shoot(){
	//This function calculates the distace of the shoot
	float angle;
	angle = (ang_in * 3.14) / 180.0;
	time_s = ((2 * 220 * sin(angle)) / 9.81);
	dist_shoot = round((220 * cos(angle)) * time_s);
	diference =abs(dist_shoot - enemy_pos);
}
void fire(){
	
	int shoot_count = 0;

	cout << "The enemy is in: " << enemy_pos << "m" << endl;

	cout << "Write your angle (from 0.00º to 90.00º): " << endl;
		do{
			if (!(cin >> ang_in)) {
      			cout << "You entered a non-numeric. Exiting..." << endl;
			cin.clear();
     			cin.ignore(10000,'\n');
		} else {
			shoot();

			if (dist_shoot < enemy_pos){

				cout << "You under shot by "<< diference << endl;

			} else if (dist_shoot > enemy_pos){

				cout << "You over shot by " << diference << endl;
			}

			++shoot_count;
		}
	} while((diference > 100) && (shoot_count < 10 ));
	
	if (shoot_count < 10){
	cout << "Congratulations! You hit him!!! It takes you " << shoot_count << " shots" <<  endl;
	++enemy_count;
	cout << "You have already killed " << enemy_count << " enemies" << endl;
	} else{
		cout << "You do not have more shoots, the enemy will kill you :_( " << endl;
		}
	}

int main(){
	char resp;

	Intro();
	while(1){	
	  enemy_gen();
	  fire();
	  cout << "I am seeng an other enemy, do youu want to continue 'y/n' " << endl;
	  cin >> resp;
	  if (resp ==  'n')
		 break; 
	}
	return 0;
}

