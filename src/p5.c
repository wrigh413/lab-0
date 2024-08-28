int p5(){
    int x = 0;
    int y = 0;

    for(int i=0; i < 50; i++){
        x++;
        if(x == 10){
            y++;
            x = 0;
        }
    }
}