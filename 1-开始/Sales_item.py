class SalesItem:
    def __init__(self, book_no='', units_sold=0, revenue=0.0):
        self.book_no = book_no
        self.units_sold = units_sold
        self.revenue = revenue

    @classmethod
    def from_input(cls):
        """Mimic the input stream reading in C++."""
        data = input("Enter book number, units sold and price separated by space: ").split()
        book_no = data[0]
        units_sold = int(data[1])
        price = float(data[2])
        return cls(book_no, units_sold, units_sold * price)

    def isbn(self):
        return self.book_no

    def avg_price(self):
        return self.revenue / self.units_sold if self.units_sold else 0

    def __iadd__(self, other):
        """Simulates the += operator overloading in C++."""
        if self.isbn() != other.isbn():
            raise ValueError("Cannot add items with different ISBNs")
        self.units_sold += other.units_sold
        self.revenue += other.revenue
        return self

    def __eq__(self, other):
        """Simulates the == operator."""
        return (self.isbn() == other.isbn() and
                self.units_sold == other.units_sold and
                self.revenue == other.revenue)

    def __ne__(self, other):
        """Simulates the != operator."""
        return not self == other

    def __add__(self, other):
        """Simulates the + operator in C++."""
        if self.isbn() != other.isbn():
            raise ValueError("Cannot add items with different ISBNs")
        result = SalesItem(self.book_no)
        result += self
        result += other
        return result

    def __str__(self):
        """Simulates the << operator for output in C++."""
        return f"{self.isbn()} {self.units_sold} {self.revenue} {self.avg_price():.2f}"

# Example usage
if __name__ == "__main__":
    # Mimics input (>> operator) in C++
    item1 = SalesItem.from_input()
    item2 = SalesItem.from_input()

    # Mimics output (<< operator) in C++
    print("Item 1:", item1)
    print("Item 2:", item2)

    # Test addition
    try:
        item_sum = item1 + item2
        print("Sum:", item_sum)
    except ValueError as e:
        print(e)

    # Test equality
    print("Are items equal?", item1 == item2)
