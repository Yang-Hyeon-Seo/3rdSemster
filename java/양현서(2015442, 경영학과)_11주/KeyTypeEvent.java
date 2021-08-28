import java.awt.*;
import java.awt.event.*;
/*import java.awt.Graphics;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;*/

import java.awt.image.*;
/*import java.awt.image.BufferedImage;*/

import java.io.*;
/*import java.io.File;
import java.io.IOException;*/

import javax.imageio.*;
//import javax.imageio.ImageIO;
import javax.swing.*;
//import javax.swing.JPanel;


public class KeyTypeEvent extends JPanel
{
	BufferedImage img = null;
	int img_x = 1; int img_y = 1;
	
	public KeyTypeEvent()
	{
		//�̹��� ��������
		try
		{
			img = ImageIO.read(new File("image/pikmin.png"));
		} catch(IOException e)
		{
			System.out.println("no image");
			System.exit(1);
		}
		
		//panel�� KeyEvent ���
		addKeyListener(new KeyListener()
		{
			public void keyPressed(KeyEvent e)
			{
				int keycode = e.getKeyCode();
				switch (keycode) {
				case KeyEvent.VK_UP:		img_y -= 10; break;
				case KeyEvent.VK_DOWN:		img_y += 10; break;
				case KeyEvent.VK_LEFT:		img_x -= 10; break;
				case KeyEvent.VK_RIGHT:		img_x += 10; break;
				}
				repaint();
			}
			public void keyReleased(KeyEvent arg0) {}
			public void keyTyped(KeyEvent arg0) {}
		});
		
		this.requestFocus();//KeyEvent�� ���� ������Ʈ ������ ����
		setFocusable(true);//KeyEvent�� Focus�� ���� �� �ֵ��� ����
	}
	
	public void paintComponent(Graphics g)
	{
		super.paintComponent(g);
		g.drawImage(img, img_x, img_y, null);
}
}
