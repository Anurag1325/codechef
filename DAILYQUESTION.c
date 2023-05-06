// tax saving
#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int X,Y;
        scanf("%d%d\n",&X,&Y);
        int amount=X-Y;
            printf("%d\n",&amount);
    }
    

    return 0;
}

// water consumption
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	    while(T--){
	        int x;
	        scanf("%d\n",&x);
	        if(x>=2000){
	            printf("%s\n","yes");
	        }else{
	            printf("%s\n","no");
	        }
	    
	}
	return 0;
}

//GOOD TURN
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,total;
	    scanf("%d%d",&x,&y);
	    total=x+y;
	    if(total>6){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}

//battery health
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X;
	    scanf("%d",&X);
	    if(X>=80){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}

//squats
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,squats;
	    scanf("%d\n",&X);
	    squats=X*15;
	    printf("%d\n",squats);
	}
	return 0;
}

//four tickets
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,amount;
	    scanf("%d\n",&x);
	    amount=x*4;
	    if(amount<=1000){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}

//chef and donation
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,donate;
	    scanf("%d%d\n",&x,&y);
	    if(y>x){
	        donate=y-x;
	        printf("%d\n",donate);
	    }else{
	        donate=0;
	        printf("%d\n",donate);
	        
	    }
	}
	return 0;
}






