int	ft_iterative_power(int nb, int power)
{
	int power_result;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	power_result = 1;

	while (power > 0)
	{
		power_result *= nb;
		power--;
	}

	return (power_result);
}