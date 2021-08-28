import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class Car2 extends JButton implements Runnable
{
	public static int rank1;
	private int rank2;
	private ImageIcon name;
	public JPanel lane = new JPanel();
	private int x, y;
	
	public Car2(ImageIcon name, int x, int y)
	{
		lane.setLayout(null);
		int r, g, b;
		r = (int)(Math.random()*256);
		g = (int)(Math.random()*256);
		b = (int)(Math.random()*256);
		lane.setBackground(new Color(r, g, b));
		this.name = name;
		this.setIcon(name);
		this.setBackground(Color.pink);
		this.setOpaque(false);
		this.setBounds(x, y, 100,150);
		lane.add(this);
	}
	
	public void run()
	{
		for(int i=0; i<1024; i++)
		{
			x = i;
			this.setBounds(x, y, 100, 150);
			try
			{
				Thread.sleep((int)(Math.random()*20));
			} catch (InterruptedException e)
			{
				e.printStackTrace();
			}
		}
		rank1++;
		rank2 = rank1;
		(lane.getGraphics()).drawString(rank2 + "Rank", 800, 30);
	}
}
