#include "tm.h"
#include <math.h>
#include <stdio.h>

uint32_t tempo_medio(uint32_t acesso_l1, float t_miss_l1, uint32_t acesso_l2,  
	float t_miss_l2, uint32_t acesso_l3, float t_miss_l3, uint32_t acesso_mem){
		
	if (t_miss_l1 < 0 || t_miss_l1 > 100){
		return 0;
	}else{	
		if (acesso_l1 == 0){ //se tempo de acesso de l1 for igual a zero
			return acesso_mem; //retorna tempo de acesso a memoria principal
		}else{
			if (acesso_l2 == 0){
				return ceil (acesso_l1 + (t_miss_l1/100) * acesso_mem); //retorna apenas primeiro nivel de cache
			}else{
				if (acesso_l3 == 0){ //se tempo de acesso l3 == zero, retorna l2 senao retorna l3
					return ceil (acesso_l1 + (t_miss_l1/100) * (acesso_l2 + (t_miss_l2/100) * acesso_mem)); 
				}else{
					return ceil (acesso_l1 + (t_miss_l1/100) * (acesso_l2 + (t_miss_l2/100) * (acesso_l3 + (t_miss_l3/100) * acesso_mem))); 
				}
			}
		}
	}
}
