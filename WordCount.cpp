#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int ch, count = 1;
	FILE* pt;    //�ļ�ָ��

	// �ж��Ƿ������ļ�
	if (argc != 3) {
		printf("��ʹ�ø�ʽ: %s �ļ���", argv[0]);
		exit(1);    //�������˳�
	}

	// �ж��ܷ�ɹ����ļ�
	if ((pt = fopen(argv[2], "r")) == NULL) {  //��argv[1]��ֵ��ָ��pt
		printf("���ļ� %s ʧ��", argv[2]);
		exit(1);
	}

	if (strcmp(argv[1], "-c") == 0) {
		count = 0;
		while ((ch = getc(pt)) != EOF) {  //EOF ��ʾ�ļ�����
			count++;
		}
		printf("�ַ�����%d��\n", count);
	}
	else {
		while ((ch = getc(pt)) != EOF) {
			if ((ch == ' ') || (ch == ','))
				count++;
		}
		printf("��������%d��\n", count);
	}
	fclose(pt);
	return 0;
}
# WordCount
