# include <stdio.h>

void Attack()
{
	while(1)
	{
		printf("��������\n");

	}
	getchar();
	
}

int main(int argc,char* argv[])
{

	int arr[5]={0};
	arr[6]=(int)Attack;
	/*
		����ѭ����ԭ��
			arr[6]Ϊebp+4��main�����ķ��ص�ַ��
			���޸�ΪAttack�ĵ�ַ
			ִ�з��ص�ַ��ִ��attack����
	*/
	return 0;
}



