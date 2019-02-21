
int     t_atoi(const char *argv)
{
        int i;
        int num;
        int sign;

        i = 0;
        num = 0;
        sign = 1;
        if (argv[i] == '-')
                sign = -1;
        if (argv[i] == '-' || argv[i] == '+')
                i++;

        while (argv[i] == ' ' || argv[i] == '\t' || argv[i] ==  '\n' && argv[i] == '\r' && argv[i] == '\b' // 
                                && argv[i] !=  '\f')
                i++;    

        while(argv[i] && argv[i] >= '0' && argv[i] <= '9') 
        {       
                num = ((num * 10) + (argv[i] - '0'));
                i++;    
        }       

        return (num * sign);
        ft_putchar('\n');
}
