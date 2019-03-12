package a;
	

	import java.awt.Font;

	import java.awt.Graphics;

	import java.applet.Applet;

	public class qqq extends Applet {

	  public void paint(Graphics g) { 

		  g.setFont( new Font( "Dialog", Font.PLAIN, 20 ) );

	   
	    g.drawLine(400,10,433,10);

	    g.drawLine(400,15,466,15);

	    g.drawLine(400,20,500,20);
	    
	    g.drawRect(10,50,100,50);
	    
	    g.fillRect(400,50,100,25);
	  }
}


