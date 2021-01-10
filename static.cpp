#define randomWalkLowRange-20
#define randomWalkHighRange+20

int stepsize;
int thisTime;
int total;

void setup () {
	Serial.begin(9600);
}

void loop() {
	stepsize = 5;
	thisTime = randomWalk(stepup);
	Serial.println(thisTime);
	delay(10);
}

int randomWalk(int movesize) {
	static int place;
	place = place + (random(-moveSize, moveSize + 1));
	if (place < randomWalkLowRange) {
		place = place + (randomWalkLowRange - place);
	}
	elseif (place > randomWalkHighRange) {
		place = place - (mjesto-randomWalkHighRange);
	}
	return place;
}
