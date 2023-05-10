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

//sum it
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int a,b,c,sum;
	    scanf("%d%d%d\n",&a,&b,&c);
	    sum=a+b;
	    if(c==sum){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}
{
//parity
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x;
	    scanf("%d\n",&x);
	    if(x%2==0){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}
}
{//bull bear
	#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,diff;
	    scanf("%d%d\n",&x,&y);
	    diff=x-y;
	    if(diff<0){
	        printf("%s\n","profit");
	    }else if(diff==0){
	        printf("%s\n","neutral");
	    }else{
	        printf("%s\n","loss");
	    }
	}
	return 0;
}

}
{// candy division
	#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x;
	    scanf("%d\n",&x);
	    if(x%3==0){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}
}
{//tour of king
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,total;
	    scanf("%d%d\n",&x,&y);
	    total=x*5+y*7;
	    printf("%d\n",total);
	}
	return 0;
}

}
{//code and chef brain speed
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d\n",&T);
    while(T--){
        int x,y;
        scanf("%d%d\n",&x,&y);
        if(x>y){
            printf("%s\n","NO");
        }else {
            printf("%s\n","yes");
        }
        }
    
	return 0;
}

}
{//IPL TICKET RUSH
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,z;
	    scanf("%d%d\n",&x,&y);
	    if(x>y){
	        z=x-y;
	        printf("%d\n",z);
	    }else{
	        printf("%d\n",0);
	    }
	        
	    
	}
	return 0;
}
}
{//kitchen timmings
	#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,z;
	    scanf("%d%d\n",&x,&y);
	    z=y-x;
	    printf("%d\n",z);
	}
	return 0;
}
	{//kitchen timmings
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int x,y,z;
	    scanf("%d%d\n",&x,&y);
	    z=y-x;
	    printf("%d\n",z);
	}
	return 0;
}
	}
	{//masterchef finals
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int X;
	    scanf("%d\n",&X);
	    if(X<=10){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}
	}
{// RATING IMPROVEMENT
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d\n",&T);
	while(T--){
	    int X,Y,z;
	    scanf("%d%d\n",&X,&Y);
	    z=X+200;
	    if(X<Y && Y<=z){
	        printf("%s\n","yes");
	    }else{
	        printf("%s\n","no");
	    }
	}
	return 0;
}
}
	{
		#include <stdio.h>

int main(void) {
    int T;
    scanf("%d\n",&T);
    while(T--){
        int x,y,z;
        scanf("%d%d%d\n",&x,&y,&z);
        if(x<=z && z<y){
            printf("%s\n","yes");
        }else{
            printf("%s\n","no");
        }
    }
	return 0;
}
	}




	









