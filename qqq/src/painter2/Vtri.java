package painter2;

public class Vtri extends Shape {

	private int type; // 1, 2, 3, 4

	final int UpLeft = 1;
	final int UpRight = 2;
	final int DownLeft = 3;
	final int DownRight = 4;

	public Vtri(int height, int type) {
		super(height);
		this.type = type;
	}

	public Vtri(int height, int type, boolean filled) {
		super(height, filled);
		this.type = type;
	}
	
	public Vtri(int height, int type, boolean filled, String c) {
		super(height, filled, c);
		this.type = type;
	}
	
	public int getType() {
		return type;
	}

	public void setType(int type) {
		this.type = type;
	}

	@Override
	public String toString() {
		return  String.format("Height: %d; Type: %d; Filled: %s; Char: %s", height, type, filled, c);
	}

	public void upLeft() {
		if (filled) {
			for (int i = 1; i <= height; i++) {
				prchar(c, i);
				System.out.println();
			}
		} else {
          for(int i=1;i<=height;i++) {
        	  if(i==1 || i==height) {
        		  prchar(c,i);
        		  System.out.println();
        	  }else {
        		  System.out.print(c);
        		  prchar(" ", i-2);
        		  System.out.println(c);  
        	  }
          }
		}

	}
	
	public void upRight() {
		if (filled) {
			for (int i = 1; i <= height; i++) {
				prchar(" ", height - i);
				prchar("*", i);
				System.out.println();
			}
		} else {

		}

	}

	public void downLeft() {
		if (filled) {
			for (int i = 1; i <= height; i++) {
				prchar("*", height - i + 1);
				System.out.println();
			}
		} else {

		}

	}
	
	public void downRight() {
		if (filled) {
			for (int i = 1; i <= height; i++) {
				prchar(" ", i - 1);
				prchar("*", height - i + 1);
				System.out.println();
			}
		} else {

		}

	}
	public void draw() {
		switch (type) {
		case UpLeft:
			upLeft();
			break;
		case UpRight:
			upRight();
			break;
		case DownLeft:
			downLeft();
			break;
		case DownRight:
			downRight();
			break;
		}
	}

	void prchar(String c, int n) {
		for (int i = 1; i <= n; i++)
			System.out.print(c);
	}

}
