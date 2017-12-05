/*
public class Runtime_test{
   public static void main(String[] args){      
      long startTime = System.nanoTime();
      for(int i=0;i<50000;i++){
         String s1 = "hello";
         String s2 = "hello"; 
      }
      long endTime = System.nanoTime();
      System.out.println( " : "+ (endTime - startTime) );
	  
      long startTime1 = System.nanoTime();
      for(int i=0;i<50000;i++){
         String s3 = new String("hello");
         String s4 = new String("hello");
      }
      long endTime1 = System.nanoTime();
      System.out.println(" : " + (endTime1 - startTime1)
      );
   }
}
*/























public class Runtime_test{
	public static void main(String args[]){
		long start_time=System.nanoTime();
		for(int i=0;i<=3;i++){
		String str1="it's 2017/08/18 and it is Friday";
		String str2="it's 2017/08/18 and it is Friday";
		String str3="it's 2017/08/18 and it is Friday";
		}
		long end_time=System.nanoTime();
	System.out.println("so the total time of creating string by string is :"+(end_time-start_time));
	
	long start_time1=System.nanoTime();
	for(int i=0;i<=3;i++){
	String str21=new String("it's 2017/08/18 and it is Friday");
	String str22=new String("it's 2017/08/18 and it is Friday");
	String str23=new String("it's 2017/08/18 and it is Friday");
	}
	long end_time1=System.nanoTime();
	
	System.out.println("so the total time of creating string by new string  is :"+(end_time1-start_time1));
	}

}