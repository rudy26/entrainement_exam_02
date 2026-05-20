unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	char res= 0;

	while(i--)
	{
		res = ((octet &1) | (res <<1));
		octet >>=1;
	}
	return(res);


}