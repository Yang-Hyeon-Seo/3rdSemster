import java.awt.*;
import java.awt.event.*;

public class RacingTestMain2 
{
	public static void main(String args[])
	{
		EventQueue.invokeLater(new Runnable(){
			public void run()
			{
				try {
					RacingTest2 frame = new RacingTest2();
					frame.setVisible(true);
				} catch(Exception e)
				{
					e.printStackTrace();
				}
			}
		});
	}
}
