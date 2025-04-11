void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_max;
	int	y_max;

	x_max = x;
	y_max = y;
	while (y > 0)
	{
		while (x > 0)
		{
			if((x == x_max || x == 1) && (y == y_max || y == 1))
				ft_putchar('o');
			if((y == y_max || y == 1) && (x != x_max && x != 1))
				ft_putchar('-');
			if((y != y_max && y != 1) && (x == x_max || x == 1))
				ft_putchar('|');
			if((y != y_max && y != 1) && (x != x_max && x != 1))
				ft_putchar(' ');
			x--;
		}
		x = x_max;
		if (x != 0 && y > 0)
			ft_putchar('\n');
		y--;
	}
}
