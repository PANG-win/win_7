#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//����ð������
//void maopao_paixu(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	maopao_paixu(arr, sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}
//���´�ӡͼ��;
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//			printf("\n");
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf(" ");
//		for (j = 1; j <= 7 - 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//�����������10������
//int main()
//{
//	int i = 0, arr[10] = { 0 };
//	printf("������10���������enter��\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	for (i = 9; i >= 0; i--)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}
//
//���һ��4*5����
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			int ret = 2 * (j + i) + 10 * i;
//			printf("%3d", ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//0-200�ﲻ������3������
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 0; i <= 200; i++)
//	{
//		if (0 != i % 3)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//��Sn=a+aa+aaa+aaaa+aaaaa�ĺͣ�
//int main()
//{
//	int i = 0, a = 0, n = 0, sum = 0, temp = 0;
//	printf("������a��n��ֵ�����enter��\n");
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		temp=10 * temp + a;
//		sum += temp;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//�����������ж�λ����������λ��
//int main()
//{
//	char arr[] = { "\0" };
//	int sz = 0;
//		printf("������������ֲ����enter��\n");
//	scanf("%s", &arr);
//	sz = strlen(arr);
//	printf("����λ��=%d\n", sz);
//	printf("���λ����Ϊ��%c\n", arr[0]);
//	return 0;
//}
//int main()
//{
//	int count = 0, temp, a = 0;
//	long long i = 0;
//	printf("������������ֲ����enter��\n");
//	scanf("%d", &i);
//	if (0 == i)
//	{
//		printf("���ֵ�λ��Ϊ 1\n");
//		printf("���ֵ����λΪ 0\n");
//	}
//	else if (i != 0)
//	{
//		while (i)
//		{
//			i /= 10;
//			count++;
//		}
//		printf("���ֵ�λ��Ϊ%d\n", count);
//	}
//	while (i > 9)
//		i /= 10;
//	printf("���λ����Ϊ:%d", i);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while(num > 9)
//	{
//		num /= 10;
//	}
//	printf("num=%d\n",num);
//	return 0;
//}
//int main()
//{
//	printf("������������ֲ����enter��\n");
//	int num = 0, count = 0;
//	scanf("%ld", &num);
//	if (num >= 0 && num <= 9)
//	{
//		printf("���ֵ�λ��Ϊ1λ\n");
//		printf("���ֵ����λΪ��%d\n", num);
//	}
//	else
//	{
//		while (num>9)
//		{
//			num /= 10;
//			count++;
//		}
//		printf("���ֵ����λΪ��%d\n", num);
//		printf("���ֵ�λ��Ϊ��%d\n", count+1);
//	}
//	return 0;
//}
//����ʵ���Ƿ�Ϊ������
//int  sweap(int x)
//{
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (0 == x % j)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == sweap(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}
//����ʵ���Ƿ�Ϊ����
//int sweap(int x)
//{
//	if (0 == x % 4 && x % 100 != 0 || 0 == x % 400)
//		return 1;
//		return 2;
//}
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == sweap(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//����ʵ������������ֲ��ң�
//int sweap(int arr[], int key, int left, int right)
//{
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//			left = mid + 1;
//		else if (arr[mid] > key)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = sweap(arr, key, 0, sz - 1);
//	if (-1 == ret)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ�%d\n", ret);
//	return 0;
//}
