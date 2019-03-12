package a;


	import java.awt.Font;

	import java.awt.Graphics;

	import java.applet.Applet;

	public class qq extends Applet {

	  public void paint(Graphics 繪圖區) { 

	    繪圖區.setFont( new Font( "Dialog", Font.PLAIN, 20 ) );

	    繪圖區.drawString( "繪製直線:drawLine(x1,y1,x2,y2)", 10, 15 );

	    繪圖區.drawLine(400,10,433,10);

	    繪圖區.drawLine(400,15,466,15);

	    繪圖區.drawLine(400,20,500,20);
	  }
}
