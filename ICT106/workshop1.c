// ICT106 Workshop
// Alby Chawula

int LED1pin = 0;
int LED2pin = 1;
int LED3pin = 2;

int LED1delay, LED2delay, LED3delay;

int LED1state = 0;
int LED2state = 0;
int LED3state = 0;

/* Prototypes */

void LEDblink(int LEDpin, int LEDdelay, int state);
void selector(int LEDpin, int LEDdelay, int state);

/*************/


void setup()
{
	pinMode(LED1pin, OUTPUT);
	pinMode(LED2pin, OUTPUT);
	pinMode(LED3pin, OUTPUT);
}

void loop()
{
	LED1delay = 0;
	LED2delay = 0;
	LED3delay = 0;

	selector(LED1pin, LED1delay, LED1state);
	selector(LED2pin, LED2delay, LED2state);
	selector(LED3pin, LED3delay, LED3state);
	
}

/* FUNCTIONS */

void selector(int LEDpin, int LEDdelay, int state)
{
	if(LEDdelay > 0 && LEDdelay < 10)
	{
		LEDblink(LEDpin, LEDdelay, LEDstate);
	}
	else if(LEDdelay == 10)
	{
		digitalWrite(LEDpin, HIGH);
		state = 1;
	}
}

void LEDblink(int LEDpin, int LEDdelay, int state)
{
	time = millis();

	if(time % (LEDdelay * 100) == 0)
	{
		if(state == 0)
		{
			digitalWrite(LEDpin, HIGH);
			state = 1;
		}
		else
		{
			digitalWrite(LEDpin, LOW);
			state = 0;
		}
			
	}
}