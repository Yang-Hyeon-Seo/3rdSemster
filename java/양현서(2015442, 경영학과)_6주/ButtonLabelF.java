import java.awt.*;

public class ButtonLabelF extends Frame
{
	//Frame�� ��ӹ޴´�>>ButtonLabelF�� �ϳ��� �������� �ȴ�
	//���� Frame�� ����ų� �Լ��� ����� �� f�� ����� �ʿ䰡 ����
	//������ Frame�� ��ӹ����� �ٸ� Ŭ������ ��ӹ��� �� ����(���ϻ��)
	//����� ���� �ʴ´ٴ� ���� �Ͽ� ����ؾ� �Ѵ�
	
	//Button  b;
	//Label l;
	//�̷��� l�� b�� ���� ������ �� �ִ�
	//�̴� ��������ó�� �����ϴ� ȿ���� �ִ�
	
	ButtonLabelF()
	{

		super("Button Label Test F Frame");
		setLayout(new FlowLayout());
		
		Button  b = new Button("OK");
		Label l = new Label("���� ���Դϴ�");
		
		add(b);
		add(l);
		
		setSize(400,400);
		setVisible(true);
	}
	ButtonLabelF(String msg)
	{
		super(msg);
		setLayout(new FlowLayout());
		
		Button  b = new Button("OK");
		Label l = new Label("���� ���Դϴ�");
		
		add(b);
		add(l);
		
		setSize(400,400);
		setVisible(true);
	}
}
