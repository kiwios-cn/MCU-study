void
delayms( unsigned int ms) {
    unsigned int i,j;
    for(i = ms ; i > 0 ; i--) {
        for( j = 114 ; j > 0 ; j--);
    }
}

void 
num_show(int num){
  switch (num) {
    case 0: P0 = 0x3f;
            break;
    case 1: P0 = 0x06;
            break;
    case 2: P0 = 0x5B;
            break;
    case 3: P0 = 0x4f;
            break;
    case 4: P0 = 0x66;
            break;
    case 5: P0 = 0x6d;
            break;
    case 6: P0 = 0x7d;
            break;
    case 7: P0 = 0x07;
            break;
    case 8: P0 = 0x7f;
            break;
    case 9: P0 = 0x6f;
            break; 
    default:
						break;
  }
}

void
set_place(int num_digital){
	p2_4 = 0;
  p2_5 = 0;
  p2_6 = 0;
  p2_7 = 0;
	if(num_digital == 0){
    p2_7 = 1;
  } else if (num_digital == 1) {
    p2_6 = 1;
  } else if (num_digital == 2) {
    p2_5 = 1;
  } else if (num_digital == 3) {
    p2_4 = 1;
  }
}

void
digital_show (unsigned int num){
  unsigned int i;
	for( i = 0 ; i < 4 ; i++ ){
        num_show(num%10);
		set_place(i);
        num = num/10;
        delayms(20);
    }
}
void main()
{
   unsigned int time = 0;
   while (1)
   {
    digital_show(time);
    delayms(1000);
    time++;
   }
   
}
