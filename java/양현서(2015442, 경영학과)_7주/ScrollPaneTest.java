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
		mpanel.add("Center", ta); //ta변수를 다시 사용할 때 사용하는 방법 / 이벤트 드리블하려면 객체에게 이름이 있는 것이 좋다
		//mpanel.add("Center", new TextArea());와 동일한 코드 / textarea를 다시 사용하지 않을 때 사용하는 방법
		
		bpanel = new Panel();
		ok = new Button("OK");
		cancel = new Button("CANCEL");
		bpanel.add(ok); //bpanel.add(new Button("OK"))와 같은 코드
		bpanel.add(cancel); //bpanel.add(new Button("CANCEL"))과 같은 코드
		
		mpanel.add("South", bpanel);
		
		sp.add(mpanel);
		f.add("Center", sp); 
		f.setSize(200,200);
		f.setVisible(true);
	}
}
