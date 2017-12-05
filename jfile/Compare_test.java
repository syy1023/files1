public class Compare_test{
	public static void main(String args[]){
	
	long start_time=System.nanoTime();
	for(int i=0;i<=500;i++){
		String str1="what"+"a"+"wonderful"+"place";
		String str2="how"+"old"+"are"+"you";
		
	}
	long end_time=System.nanoTime();
	System.out.println("total time is "+(end_time-start_time));
	
	
	
	long start_time1=System.nanoTime();
	for(int i=0;i<=500;i++){
		StringBuffer str21=new StringBuffer("what");
		str21.append("a");
		str21.append("wonderful");
		str21.append("place");
		str21.append("how");
		str21.append("old");
		str21.append("are");
		str21.append("you");
	}
	
	long end_time1=System.nanoTime();
	
	System.out.println("total time2 is "+(end_time1-start_time1));
	
	
	
	
	}



}