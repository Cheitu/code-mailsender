//DNS Query

/*		˵��
	1���� InitInstance() �����м������´��룺
WSADATA wsaData;
int err = WSAStartup( MAKEWORD( 2, 2 ), &wsaData );
if ( err )
{
	return FALSE;
}

	2���� ExitInstance() �����м������´��룺
	WSACleanup();

*/

#include <Afxtempl.h>
#include "NetAdapterInfo.h"

typedef struct _MXHostInfo
{
	char szMXHost[1024];
	int N;
} t_MXHostInfo;
typedef CArray<t_MXHostInfo,t_MXHostInfo&> t_Ary_MXHostInfos;

BOOL GetMX (
			char *pszQuery,							// Ҫ��ѯ������
			OUT t_Ary_MXHostInfos &Ary_MXHostInfos	// ��� Mail Exchange ������
			);

