public class Split_test{
	public static void main(String args[]){
		String str="hello anryan, it's 2017/08/17 and it's your fourth day of working";
		String split_char=" ";
		String[] after_split=str.split(split_char);
		
		for(String x:after_split){
			System.out.println(x.toUpperCase());
			System.out.println("");
		}
		
		
	}
}