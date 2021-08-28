import java.awt.*;
import java.awt.event.*;

import java.awt.image.*;

import java.io.*;

import javax.imageio.*;

import javax.swing.*;



public class MouseMoveEvent extends JPanel
{
	BufferedImage img = null;
	int img_x = 1; int img_y = 1;
	
	public MouseMoveEvent()
	{
		//이미지 가져오기
		try
		{
			img = ImageIO.read(new File("image/pikmin.png"));
		} catch(IOException e)
		{
			System.out.println("no image");
			System.exit(1);
		}
		
		//panel에 KeyEvent 등록
		addMouseListener(new MouseListener()
		{
			public void mousePressed(MouseEvent e)
			{
				img_x = e.getX();
				img_y = e.getY();
				repaint();
			}
			public void mouseReleased(MouseEvent e) {}
			public void mouseEntered(MouseEvent e) {}
			public void mouseExited(MouseEvent e) {}
			public void mouseClicked(MouseEvent e) {}
		});
	}
	
	public void paintComponent(Graphics g)
	{
		super.paintComponent(g);
		g.drawImage(img, img_x, img_y, null);
}
}
