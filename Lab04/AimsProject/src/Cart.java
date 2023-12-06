
public class Cart {

	public static final int MAX_NUMBERS_ORDERED = 20;
	private DigitalVideoDisc itemOrdered[] =
			new DigitalVideoDisc[MAX_NUMBERS_ORDERED];
	private int qtyOrdered = 0;
	
	// 	Add 1 DISC to the cart
	public boolean addDigitalVideoDisc(DigitalVideoDisc disc) {
		if(qtyOrdered < MAX_NUMBERS_ORDERED) {
			itemOrdered[qtyOrdered++] = disc;
			System.out.println("The disc has been added.");
			return true;
		} else {
			System.out.println("The cart is almost full! Can not add!!!");
			return false;
		}
	}
	
	// Remove 1 DISC from the cart 
	public void removeDigitalVideoDisc(DigitalVideoDisc disc) {
		if(qtyOrdered == 0) {
			System.out.println("Cart is empty!");
		} else {
			boolean checkRemove = false;
			for(int i = 0; i< qtyOrdered; i++) {
				if(itemOrdered[i].equals(disc)) {
					for(int j = i; j < qtyOrdered - 1; j++) {
						itemOrdered[i] = itemOrdered[i+1];
					}
					qtyOrdered--;
					itemOrdered[qtyOrdered] = null;
					checkRemove = true;
					break;
				}
			}
			if(checkRemove) {
				System.out.println("The disc has been removed");
			} else {
				System.out.println("Not found!");
			}
		}
		return;
	}
	
	// Total cost of all DVDs in the cart 
	public float totalCost() {
		float sumCost = 0;
		for(int i = 0; i < qtyOrdered; i++) {
			sumCost += itemOrdered[i].getCost();
		}
		return sumCost;
	}
	
	// Print information of all DVDs in the cart 
	public void showAllDvdInCart() {
		for(int i = 0; i < qtyOrdered; i++) {
			itemOrdered[i].showInformationDVD();
		}
	}

}