#include<stdio.h>//ͷ�ļ�
#include<string.h>
#define LINEMAX 20//�����ַ�������󳤶�
int main() {
	void sort(char **point);//��������
	int i;//�������ͱ���
	char **point,*pstr[5],str[5][LINEMAX];//�������
	for(i=0; i<5; i++) {
		pstr[i]=str[i]; //����i���ַ������׵�ַ����ָ������pstr�ĵ�i��Ԫ��
	}
	printf("��������ַ�����\n");//��ʾ���
	for(i=0; i<5; i++) {
		scanf("%s",pstr[i]);
	}
	point=pstr;
	sort(point);//����sort����
	printf("������������������������\n");//��ʾ���
	printf("��������Ľ����\n");//��ʾ���
	for(i=0; i<5; i++) {
		printf("%s\n",pstr[i]);
	}
	return 0;//����������ֵΪ0
}
void sort(char **point) { //ð�������㷨ʵ��
	int i,j;//�������ͱ���
	for(i=0; i<5; i++) {
		for(j=i+1; j<5; j++) {
			if(strcmp(*(point+i),*(point+j))>0) { //�ȽϺ󽻻��ַ�����ַ
				temp=*(point+i);
				*(point+i)=*(point+j);
				*(point+j)=temp;
			}
		}
	}
}
