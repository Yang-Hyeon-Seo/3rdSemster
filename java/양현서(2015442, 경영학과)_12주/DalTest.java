import java.awt.Color;
import java.awt.Graphics;
import javax.swing.*;

public class DalTest extends JFrame
{
	Dal a, b, c, d;//쓰레드
	ImageIcon back, img1, img2, img3, img4;
	
	public DalTest()
	{
		super("Thread Test");
		
		setTitle("Dal 양현서");
		setSize(500,400);
		setVisible(true);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		
		a = new Dal(this, 30,30);
		b = new Dal(this, 30,110);
		c = new Dal(this, 30,210);
		d = new Dal(this, 30,310);
		
		a.start();
		b.start();
		c.start();
		d.start();
	}
	
	public void paint(Graphics g)
	{
		back = new ImageIcon("image/pic.jpg");
		img1 = new ImageIcon("image/pikmin.png");
		img2 = new ImageIcon("image/pikmin_yellow.png");
		img3 = new ImageIcon("Image/pikmin_blue.png");
		img4 = new ImageIcon("Image/pikmin_rock.png");
		
		g.drawImage(back.getImage(), 0, 30, null);
		g.drawImage(img1.getImage(), a.x, a.y, null);
		g.drawImage(img2.getImage(), b.x, b.y, null);
		g.drawImage(img3.getImage(), c.x, c.y, null);
		g.drawImage(img4.getImage(), d.x, d.y, null);
	}
}
