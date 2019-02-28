#ifndef __HTTP_CURL_H__
#define __HTTP_CURL_H__
 
#include <string>
 
class CHttpClient
{
public:
	CHttpClient(void);
	~CHttpClient(void);
 
public:
	/**
	* @brief HTTP POST����
	* @param strUrl �������,�����Url��ַ,��:http://www.baidu.com
	* @param strPost �������,ʹ�����¸�ʽpara1=val1?2=val2&��
	* @param strResponse �������,���ص�����
	* @return �����Ƿ�Post�ɹ�
	*/
	int post(const std::string & strUrl, const std::string & strPost, std::string & strResponse);
 
	/**
	* @brief HTTP GET����
	* @param strUrl �������,�����Url��ַ,��:http://www.baidu.com
	* @param strResponse �������,���ص�����
	* @return �����Ƿ�Post�ɹ�
	*/
	int get(const std::string & strUrl, std::string & strResponse);
 
	/**
	* @brief HTTPS POST����,��֤��汾
	* @param strUrl �������,�����Url��ַ,��:https://www.alipay.com
	* @param strPost �������,ʹ�����¸�ʽpara1=val1?2=val2&��
	* @param strResponse �������,���ص�����
	* @param pCaPath �������,ΪCA֤���·��.�������ΪNULL,����֤��������֤�����Ч��.
	* @return �����Ƿ�Post�ɹ�
	*/
	int posts(const std::string & strUrl, const std::string & strPost, std::string & strResponse, const char * pCaPath = NULL);
 
	/**
	* @brief HTTPS GET����,��֤��汾
	* @param strUrl �������,�����Url��ַ,��:https://www.alipay.com
	* @param strResponse �������,���ص�����
	* @param pCaPath �������,ΪCA֤���·��.�������ΪNULL,����֤��������֤�����Ч��.
	* @return �����Ƿ�Post�ɹ�
	*/
	int gets(const std::string & strUrl, std::string & strResponse, const char * pCaPath = NULL);
 
public:
	void setDebug(bool bDebug);
 
private:
	bool m_bDebug;
};
 
#endif