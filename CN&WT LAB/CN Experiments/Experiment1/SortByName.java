package day.seven;

import java.util.Comparator;

public class SortByName implements Comparator<Employee> {
	@Override
	public int compare(Employee str1, Employee str2) {
		return str1.getName().compareTo(str2.getName());  
	}
}
