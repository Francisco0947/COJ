//Begin page main
float toGo[3];
float myPos[3];
float myState[12];
float poiT[3];
float vectorBetween[3];
float axis[3];
float earth[3];
float auxT[3];
float destino[3];
unsigned int estado, pasos;
int poiTarget;
bool uploading;
bool start;
bool danger;
int seconds;
float radio;
int s;
float distance;
void init(){
    estado = 0;
    s=0;
    start=true;
    seconds=0;
	assign(axis,0.0f,0.0f,0.0f);
    assign(earth,.64,0.0f,0.0f);
    assign(toGo,-.38,0.0f,-.38f);
    api.getMyZRState(myState);
    uploading=false;
    danger = false;
    radio=.4f;
    
}

void loop(){
    seconds++;
    dangerTurn();
    poiTarget = 2;
    api.getMyZRState(myState);
    game.getPOILoc(poiT, poiTarget);
    assign(myPos,myState[0],myState[1],myState[2]);
    if(start){
        api.setPositionTarget(toGo);
        pointTo(axis);
        if(enPosicion(toGo))
            start=false;
    }else{
        if(danger){
            pointTo(earth);
        	game.uploadPic();
        	if (game.getMemoryFilled()==0) uploading = false;
        }else if(uploading){
            assign(toGo,0.0f,0.0f,-.55f);
            pointTo(earth);
        	game.uploadPic();
        	if (game.getMemoryFilled()==0) uploading = false;
        }else{
            setTarget();
            pointTo(axis);
        	takePicture();
        }
        goTo(toGo);  
    }
    
    
	
    
}
void assign(float *vec, float x, float y, float z){
    vec[0] = x;
    vec[1] = y;
    vec[2] = z;
}
void setTarget(){
    
}
void goTo(float target[3]){
    float myAngs[3];
    float targetAngs[3];
    vectorgrados(myAngs,myPos);
    vectorgrados(target,targetAngs);
    float diference =  targetAngs[0] - myAngs[0];
    //angulo 0 es el que se mueve
    if(diference<0){
        if(myAngs[0]-(10*PI/180)>targetAngs[0]){
            api.setPositionTarget(target);
	    }else{
    	    myAngs[0]-=(10*PI/180);
    	    myAngs[2]=targetAngs[2];
    	    gradosvector(myAngs,target);
    	    //api.setForces(target);
    	    api.setPositionTarget(target);
        }
    }else{
        if(myAngs[0]+(10*PI/180)>targetAngs[0]){
            api.setPositionTarget(target);
	    }else{
    	    myAngs[0]+=(10*PI/180);
    	    myAngs[2]=targetAngs[2];
    	    gradosvector(myAngs,target);
    	    //api.setForces(target);
    	    api.setPositionTarget(target);
        }
    }
    
    
}
void pointTo(float target[3]){
    mathVecSubtract(vectorBetween, target, myPos, 3);
	mathVecNormalize(vectorBetween, 3);
	api.setAttitudeTarget(vectorBetween);
}
void dangerTurn() {
    if(game.getNextFlare() == 15) 
    {
        assign(toGo,.55f,0.0f,0.0f);
        danger=true;
        s = seconds+18;
    }
    else if(s==seconds) {danger=false;}
}

void takePicture(){
    if(isInRange(poiTarget) && game.alignLine(poiTarget)  )
    {
        game.takePic(poiTarget);
    }
    switch(game.getMemoryFilled()){
        case 0:
            assign(toGo,-.38,0.0f,-.38f);
        break;
        case 1:
            if(seconds>235)
                uploading=true;
            assign(toGo,-.05,0.0f,-.4f);
        break;
        case 2:
             uploading=true;
        break;
    }
    
}
bool isInRange(int poi){
    float poit[3];
    float poitAngs[3];
    float myAngs[3];
    game.getPOILoc(poit,poi);
    vectorgrados(poit,poitAngs);
    vectorgrados(myPos,myAngs);
    return ((poitAngs[1]+.2)>myAngs[1]) && ((poitAngs[1]-.2)<myAngs[1]);
}
int masCerca()
{
    float poi[3];
	float d;
	int i = 0;
    game.getPOILoc(poi,0);
	d = distancia(poi);
    game.getPOILoc(poi,1);
    
	if (d < distancia(poi)) {

		i = 1;
		d = distancia(poi);
	}
    game.getPOILoc(poi,2);
    if (d < distancia(poi)) i = 2;
    return i;
}

bool enPosicion(float destino[3])
{
    float x = myPos[0];
   float xmas = destino[0] + 0.05;
   float xmenos = destino[0] - 0.05;
   float y = myPos[1];
   float ymas = destino[1] + 0.05;
   float ymenos = destino[1] - 0.05;
   float z = myPos[2];
   float zmas = destino[2] + 0.05;
   float zmenos = destino[2] - 0.05;
   
   if( ((x >= xmenos) && (x <= xmas)) && ((y >= ymenos) && (y <= ymas)) && ((z >= zmenos) && (z <= zmas)) )
   return true;
   return false;
}

bool cutway(float in[3], float out[3])//origen, destino
{
    float angle;
    angle = (in[0]*out[0]+in[1]*out[1]+in[2]*out[2]) / (sqrtf(powf(in[0],2)+powf(in[1],2)+powf(in[2],2))*sqrtf(powf(out[0],2)+powf(out[1],2)+powf(out[2],2)));;
    angle = acosf(angle);
    angle = angle * 57.29577951308f;
    if(angle>90) return true;
    else return false;

}

void vectorgrados(float in[3],float *out)//out[0] = anguloxy; out[1] = anguloyz; out[2] = r 
{
    float aux;
    aux = (powf(in[0],2)) + powf(in[1],2);
    out[2] = powf((aux + powf(in[2],2)), .5);//El radio es calculado para la operacion inversa de los angulos
    out[1] = atan2f(powf(aux, .5), in[2]);//**
    out[0] = atan2(in[1], in[0]);//**
}

void gradosvector(float in[3],float *out)//in[0] = anguloxy; in[1] = anguloyz; in[2] = r 
{
    out[0] = in[2]*sinf(in[1])*cosf(in[0]);
    out[1] = in[2]*sinf(in[1])*sinf(in[0]);
    out[2] = in[2]*cosf(in[1]);
    
}

float distancia(float poi[])
{
    return sqrtf(powf((poi[0]-myState[0]),2)+powf((poi[1]-myState[1]),2)+powf((poi[2]-myState[2]),2));
}

//End page main
