import java.awt.*;

public class ScrollPaneTest 
{
	ScrollPane 	sp;
	Panel		mpanel, bpanel;
	TextArea	ta;
	Button		ok, cancel;
	
	public ScrollPaneTest()
	{
		Frame f = new Frame("ScrollPane Test");
		
		sp = new ScrollPane();
		sp.setSize(150,100);
		
		mpanel = new Panel();
		mpanel.setSize(500,450);
		mpanel.setLayout(new BorderLayout());
		
		ta = new TextArea();
		mpanel.add("Center", ta); //ta������ �ٽ� ����� �� ����ϴ� ��� / �̺�Ʈ �帮���Ϸ��� ��ü���� �̸��� �ִ� ���� ����
		//mpanel.add("Center", new TextArea());�� ������ �ڵ� / textarea�� �ٽ� ������� ���� �� ����ϴ� ���
		
		bpanel = new Panel();
		ok = new Button("OK");
		cancel = new Button("CANCEL");
		bpanel.add(ok); //bpanel.add(new Button("OK"))�� ���� �ڵ�
		bpanel.add(cancel); //bpanel.add(new Button("CANCEL"))�� ���� �ڵ�
		
		mpanel.add("South", bpanel);
		
		sp.add(mpanel);
		f.add("Center", sp); 
		f.setSize(200,200);
		f.setVisible(true);
	}
}
