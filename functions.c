int boolToInt(bool input) {
    if(input) {
        return 1;
    }
    else {
        return 0;
    }
}

float mecSpeed(int side, float speed, float angle, float turn) {
	if(side == 0) {
			return speed*sin(angle+(PI/4))+turn;
		}
		else {
			return speed*cos(angle+(PI/4))+turn;
		}
}


float stickAngle(float x, float y) {
	return atan2(x,y);
}

float pointDistance(float x1,float y1,float x2,float y2) {
		return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

float degToRad(int deg) {
	return deg * PI/180;
}
