package polymorphism;

public class ShapeTest {

	public static void main(String[] args) {
		final int MAX = 100;
		Shape shapes[] = new Shape[MAX];
		int shapeCount = 0;
		shapes[shapeCount++] = new Rect(6,10);
		shapes[shapeCount++] = new Rect(8,8);		
		shapes[shapeCount++] = new Vtri(5,1);
		shapes[shapeCount++] = new Vtri(5,2);
		shapes[shapeCount++] = new Vtri(5,3);
		shapes[shapeCount++] = new Vtri(5,4);
		
		
		for(int i=0;i<shapeCount;i++) {
			shapes[i].draw();
			System.out.println(shapes[i]);
		}

	}

}

/*
 * 
 * Rect rect = new Rect(height, width); rect.draw();
 * 
 */
