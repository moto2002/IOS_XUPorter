/* 106 228 203 199 203 251 69 164 171 249 223 147 102 233 72 177 92 124 113 87 79 17 155 171 239 138 133 88 235 28 112 146 102 93 52 214 131 240 31 138 179 248 115 127 118 107 31 112 91 111 14 243 1 121 131 22 69 144 19 214 101 65 133 253 32 122 175 12 198 63 134 23 240 109 90 59 142 194 194 160 148 139 101 68 220 217 181 32 240 36 47 59 74 18 182 145 116 17 29 255 115 236 11 29 111 122  */
/*
ProudNet 1.7.34387-dev003-10


�� ���α׷��� ���۱��� ���ټǿ��� �ֽ��ϴ�.
�� ���α׷��� ����, ���, ������ ���õ� ������ �� ���α׷��� �������ڿ��� ����� ������,
����� �ؼ����� �ʴ� ��� ��Ģ������ ���� ����� �����մϴ�.
���� ��뿡 ���� å���� �� ���α׷��� �������ڿ��� ��༭�� ���õǾ� �ֽ��ϴ�.

** ���� : ���۹��� ���� ���� ���ø� �������� ���ʽÿ�.


This program is soley copyrighted by Nettention.
Any use, correction, and distribution of this program are subject to the terms and conditions of the License Agreement.
Any violated use of this program is prohibited and will be cause of immediate termination according to the License Agreement.

** WARNING : PLEASE DO NOT REMOVE THE LEGAL NOTICE ABOVE.


���������??Nettention�������
?����������ǡ����ġ�?����?����?���������������?����??��
������???��?��������������ġ�
����������?��٥���?��������?��������?�졣

** ��������?�����ڪ��߾��٥�ơ�


���Ϋ׫�����������?��Nettention�˪���ު���
���Ϋ׫����������ᡢ���ġ����֪�?������������׫����������?���Ȫ���峪�?����
��峪��������ʪ����ꡢ����ܪ���?���Ī��ת��ު���
��?���Ī˪���������׫����������?���Ȫ��������٥�ƪ���ƪ��ު���

** �������ڪ��?����߾����٥�ƪ���۪��ʪ��Ǫ���������

*/

#pragma once

#ifdef _MSC_VER
#pragma pack(push,8)
#endif

namespace Proud
{
	/** \addtogroup net_group
	*  @{
	*/

	// ����: �̰͵� �ٲٸ� ProudClr namespace�� ���� �ɺ��� �����ؾ� �Ѵ�.

	/** 
	\~korean
	��ȣȭ �� ��ȣȭ �������Դϴ�.

	\~english
	Setup value of encryption and decryption

	\~chinese
	ʥ���������?��?��

	\~japanese
	��?�������?�����������Ǫ���
	\~
	*/
	enum EncryptMode
	{
		/** 
		\~korean
		��ȣȭ�� ���մϴ�.

		\~english
		Do not encrypt

		\~chinese
		��ʥ�ˡ�

		\~japanese
		��?���򪷪ު���
		\~
		*/
		EM_None,		
		/** 
		\~korean
		RSA�� AES�� ȥ���� ��ȣȭ�� �����մϴ�. �α׿� �� ���ȼ��� ���� �޽����� ���ʽÿ�.

		\~english
		Do encryption that mixture with RSA and AES. Do not use with secure message such as logon

		\~chinese
		?������RSA��AES��ʥ�ˡ��������?����������������߾��

		\~japanese
		RSA��AES�����Ī�����?�����������ު�����������ʪɫ������ƫ������Ԫ���ë�?�����Ūêƪ���������
		\~
		*/
		EM_Secure,		
		/** 
		\~korean
		RSA�� Fast�� ȥ���� ��ȣȭ�� �����մϴ�. ĳ���� �̵� �� �ణ�� ��ȣȭ�� �ʿ������� ���� ���� �����ؾ� �ϴ� ��Ȳ���� ���ʽÿ�.

		\~english
		Do encryption that mixture with RSA and Fast. Encryption is required like moving character but please consider about performance.

		\~chinese
		?������RSA��Fast��ʥ�ˡ��������?��?ʥ���������ԣ�ӣ����?������??��?�����۰���� 

		\~japanese
		RSA��Fast�����Ī�����?�����������ު�������髯��?��Ѫʪ�ᴪ�����?������驪Ǫ��������������窹�٪�?�Ϫ��Ūêƪ���������
		\~
		*/
		EM_Fast,			
		EM_LAST,
	};

	/**  @} */
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif