import java.awt.Color;
import java.awt.Graphics;
import javax.swing.*;

public class Dal extends Thread
{
	int x, y;//X, Y좌표값
	int speed;//시간마다 움직이도록
	JFrame app;
	
	public Dal( JFrame _app, int w, int h)
	{
		app = _app;
		x = w;
		y = h;
	}
	
	public void run()
	{
		while(x < 400)
		{
		speed = (int)(Math.random()*50);//0~4임의의 수 - random -> 0.0~1.0까지
		x += speed;
		app.repaint();
		
		try {
			sleep(speed * 100);
		} catch(Exception e)
		{}
		}
	}
}
