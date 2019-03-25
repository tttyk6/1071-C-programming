package revised;

public class ShapeTest {

	public static void main(String[] args) {
		final int MAX = 100;
		Shape shapes[] = new Shape[MAX];
		int shapeCount = 0;
		shapes[shapeCount++] = new Rect(6,10,true);
		shapes[shapeCount++] = new Rect(6,10,false,"#");
		shapes[shapeCount++] = new Rect(8,8,false);
		shapes[shapeCount++] = new Rect(8,8,true,"#");
		shapes[shapeCount++] = new Vtri(5,1,true);
		shapes[shapeCount++] = new Vtri(5,1,false);
		shapes[shapeCount++] = new Vtri(5,1,true,"@");
		shapes[shapeCount++] = new Vtri(5,1,false,"@");
		
		
//		shapes[shapeCount++] = new Vtri(5,2,false);
//		shapes[shapeCount++] = new Vtri(5,3,true);
//		shapes[shapeCount++] = new Vtri(5,4,false);
		
		
		for(int i=0;i<shapeCount;i++) {
			shapes[i].draw();
			System.out.println(shapes[i]);
			System.out.println();
		}

	}

}

/*
 * 
 * Rect rect = new Rect(height, width); rect.draw();
 * 
 */
