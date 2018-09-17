package overflow;

public class prueba {
	
	public static int entero(int v){
		//fibonacci para int
		
		int i=0;
		int j=1;
		int t=0;
		 
		for(int k=2;k<v;k++){
		    t=i+j;
		    i=j;
		    j=t;
		 
		}
		 
		return t;
		 
			
	}
	
	public static  short corto(int v){
		//fibonacci para short
		
		short i=0;
		short j=1;
		short t=0;
		
		 
		for(int k=2;k<v;k++){
			
		    t=(short)(i+j);
		    i=j;
		    j=t;
		 
		}
		 
		return t;
		 
			
	}
	
	public static  byte bites(int v){
		//fibonacci para byte
		
		byte i=0;
		byte j=1;
		byte t=0;
		
		 
		for(int k=2;k<v;k++){
			
		    t=(byte)(i+j);
		    i=j;
		    j=t;
		 
		}
		 
		return t;
		 
			
	}
	
	public static  long largo(int v){
		//fibonacci para long
		
		long i=0;
		long j=1;
		long t=0;
		
		 
		for(int k=2;k<v;k++){
			
		    t=(long)(i+j);
		    i=j;
		    j=t;
		 
		}
		 
		return t;
		 
			
	}
	
	
	public static void verentero( int n){
		int c=  entero(n);
		if(c<0){
			System.out.printf("el entero %d llego a overflow \n",n);
		}else{
			System.out.printf("el fibonacci de %d es:  %d \n", n-1,c);
		}
		 
			
	}
	
	public static void vershort( int n){
		short c=  corto(n);
		if(c<0){
			System.out.printf("el short %d llego a overflow \n",n);
		}else{
			System.out.printf("el fibonacci del short  %d es:  %d \n", n-1,c);
		}
		 
			
	}
	
	public static void verbyte( int n){
		byte c=  bites(n);
		if(c<0){
			System.out.printf("el byte %d llego a overflow \n",n);
		}else{
			System.out.printf("el fibonacci del byte  %d es:  %d \n", n-1,c);
		}
		 
			
	}
	
	public static void verlong( int n){
		long c=  largo(n);
		if(c<0){
			System.out.printf("el long %d llego a overflow \n",n);
		}else{
			System.out.printf("el fibonacci del long  %d es:  %d \n", n-1,c);
		}
		 
			
	}
	
	
	

	public static void main(String[] args) {
		//overflow para enteros
		verentero(47);
		verentero( 48);
		//overflow para short
		vershort(24);
		vershort(25);
		//overflow para byte
		verbyte(12);
		verbyte(13);
		//overflow para long
		verlong(93);
		verlong(94);
		
		
		
	}

}
