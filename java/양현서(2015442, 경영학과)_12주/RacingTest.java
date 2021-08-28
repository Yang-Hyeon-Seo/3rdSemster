import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class RacingTest extends JFrame
{
	JPanel contentPane;
	JPanel menuPanel;
	JPanel centerPanel;
	JButton startBt;
	Thread[] ths;
	
	Car[] cars = new Car[]
			{
					new Car(new ImageIcon("image/pikmin.png"), 0, 10),
					new Car(new ImageIcon("image/pikmin_blue.png"), 0, 10),
					new Car(new ImageIcon("image/pikmin_rock.png"), 0, 10),
					new Car(new ImageIcon("image/pikmin_yellow.png"), 0, 10),
					new Car(new ImageIcon("image/pikmin.png"), 0, 10)
			};
	
	public RacingTest()
	{
		super("Runnable Test 양현서");
		ths = new Thread[cars.length];//한번에 쓰레드 만들기
	
		setBounds(100,10,1800,800);
		contentPane = new JPanel();
		contentPane.setLayout(new BorderLayout(0,0));
		setContentPane(contentPane);
		
		menuPanel = new JPanel();
		menuPanel.setLayout(new GridLayout(1,4,5,5));//1행 4열 5개로 나눈 위치
		startBt = new JButton("Play");
		menuPanel.add(startBt);
		contentPane.add("North", menuPanel);
		
		centerPanel = new JPanel();
		centerPanel.setLayout(new GridLayout(cars.length, 1, 5, 5));
		contentPane.add("Center", centerPanel);
		
		startBt.addActionListener(new ActionListener()
				{
					public void actionPerformed(ActionEvent arg0)
					{
						for(int i=0; i<cars.length;i++)
						{
							centerPanel.add(cars[i].lane);
						}
						centerPanel.updateUI();
						Car.rank1 = 0;
						game_play();
					}
				});
	}
	
	public void game_play()
	{
		makeThread();
		for(int i=0; i<cars.length;i++)
		{
			ths[i].start();
		}
	}
	
	public void makeThread()
	{
		for(int i=0; i<cars.length;i++)
		{
			ths[i] = new Thread(cars[i]);
		}
	}
}
