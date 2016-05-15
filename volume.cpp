// (c) by Stefan Roettger, licensed under GPL 2+

// the global error handler for the volren library
void(*vrerrorhandler)(const char *file, int line, int fatal, const char *msg) = 0;

// set the global error handler for the volren library
void setvrerrorhandler(void(*handler)(const char *file, int line, int fatal, const char *msg))
{
    vrerrorhandler = handler;
}