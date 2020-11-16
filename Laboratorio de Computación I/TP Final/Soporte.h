
void Gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}


void Say(const char *txt)
{
	printf("%s",txt);
}

void Skip()
{
    printf("\n");
}

void Say(int x,int y,const char *txt)
{
	Gotoxy(x,y);printf("%s",txt);
}


void Say(int x,int y,int ascii)//ascii
{
	Gotoxy(x,y);printf("%c",ascii);
}

void SetColorA(int color,int colorf)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | colorf | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
}

void SetColorB(int color,int colorf)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | colorf | BACKGROUND_INTENSITY );
}

void SetColorC(int color,int colorf)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | colorf);
}


void TextColor(int color)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}



void Msg(const char *txt)
{   int con=strlen(txt);
	int centro=(int)(con/2)
	;
	SetColorA(15,21);
	Say(40-centro,24,txt);
}


void Cls()
{
	system("cls");
}


void ClsSet(int ForgC, int BackC)
 {
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    SetConsoleTextAttribute(hStdOut, wColor);
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
          SetConsoleCursorPosition(hStdOut, coord);
     }
    return;
}

void Replicate(const char c, int can){
	for(int i=0;i<can;i++)
	 {
		printf("%c",c);
	 }
}
void ReplicateH (int x , int y ,const char *c,int can){
	for(int i=0;i<can;i++)
	 {
		Say(x+i,y,c);
	 }
}

void ReplicateV (int x , int y ,const char *c,int can){
	for(int i=0;i<can;i++)
	 {
		Say(x,y+i,c);
	 }
}

void ReplicateH (int x, int y, int ascii,int can){
	for(int i=0;i<can;i++)
	 {
		Gotoxy(x+i,y);printf("%c",ascii);
	 }
}
void ReplicateV (int x, int y, int ascii,int can){
	for(int i=0;i<can;i++)
	 {
		Gotoxy(x,y+i);printf("%c",ascii);
	 }
}
void Rectangulo(int x, int y, int w, int h, int ascii[8]){
	ReplicateV(x,y,ascii[7],h);
	ReplicateV(x+w,y,ascii[3],h);
	ReplicateH(x,y,ascii[1],w);
	ReplicateH(x,y+h,ascii[5],w);
	Say(x,y,ascii[0]);
	Say(x+w,y,ascii[2]);
	Say(x+w,y+h,ascii[4]);
	Say(x,y+h,ascii[6]);
}

void Unsolojugador()

{
int REC1[8]={201,205,187,186,188,205,200,186};
int REC2[8]={218,196,191,179,217,196,192,179};
int REC3[8]={220,220,220,219,223,223,233,219};
int REC4[8]={177,178,177,178,177,178,177,178};

char nom[64];

    SetColorA(9,22);
    Rectangulo(55,9,50,4,REC1);
    TextColor(10);
    Say(55,8,"*INGRESE UN NOMBRE*");
    TextColor(14);
    Say(58,11,"NOMBRE :"); cin>>nom;
    for(int i=1; i<7; i=i+1)
{
        SetColorA( 1,0);
         Rectangulo(55,19,15,3,REC1);
          TextColor(5);
          Say(58,20,"ROMDA:"); cout<<i;


    }




}

void DOSJUGADORES(){
    char n1[64],n2[64];
    int REC3[8]={220,220,220,219,223,223,233,219};
     SetColorA(1,22);
      Rectangulo(55,3,50,6,REC3);
    TextColor(13);
    Say(65,3,"INGRESAR NOMBRES");
    TextColor(14);
    Say(58,5,"*NOMBRES DEL PRIMER JUGADOR*:"); cin>>n1;
    Say(58,5,"*NOMBRE DEL SEGUNDO JUGADOR*:"); cin>>n2;
}

void Puntuacionmasalta(){
    int n1;
    int s=2,f=10;
    if(f>s){cout<<"EL JUGADOR CON EL PUNTAJE MAS ALTO ES:"<<n1;}

}








