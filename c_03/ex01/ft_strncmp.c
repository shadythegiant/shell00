int ft_strncmp(char *s1, char *s2, unsigned int n) { 

    unsigned  i = 0;
    
    while(s1[i] && s2[i] && s1[i] == s2[i] && i < n) {
        
        s1[i]++; 
        s2[i]++; 

    }

    if(n == i) return 0; 

    return (s1[i] - s2[i]); 
}


int ft_strncmp(char *s1, char *s2) { 

    unsigned i = 0; 

    while(*s1 && *s2 &&  *s1 == *s2 && i < n ) { 
        *s1++; 
        *s2++; 
    }

    
}