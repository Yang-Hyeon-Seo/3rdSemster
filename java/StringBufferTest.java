
public class StringBufferTest 
{
	public static void main(String[] args)
	{
		StringBuffer buf = new StringBuffer();//buf : class Instance Object >>>Object
	
		buf.append("Hello ");				//Object-Oriented : buf라는 객체의 function을 실행시킴
		buf.append("Yang Hyeons Seo");
		
		System.out.println(buf.toString());
	}
}
