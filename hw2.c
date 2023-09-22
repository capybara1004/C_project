{
	double km;
	double mile;
	
	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	mile = (1 / 1.609) * km;
	printf("%.1f km is equal to %.1f miles.", km, mile);
	return 0;

}
