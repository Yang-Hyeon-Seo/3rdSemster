import javax.swing.JFrame;

public class KeyTypeEventMain 
{
	JFrame f;
	
	public KeyTypeEventMain(String msg)
	{
		f = new JFrame(msg);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setSize(800,900);
		f.add(new KeyTypeEvent());
		f.setVisible(true);
	}
	
	public static void main(String argsp[])
	{
		KeyTypeEventMain s = new KeyTypeEventMain("Key Type Event ¾çÇö¼­");
	}
}
