struct CMP {
	float real; 
	float imag;
};
CMP sum(CMP, CMP);
CMP sub(CMP, CMP);
void enter_cmp(CMP *);
void show_cmp(CMP);
CMP div_real_by_cmp(float, CMP);
