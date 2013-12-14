// <Include>
///////////////////////////////////////////////////////////////////////////////
//
// This file is automatically generated.  However, the file needs to be
// modified in order to accomodate changes needed for for the device host
// creation to use WSDCreateDeviceHost2 instead with customized parameters,
// or for the device proxy creation to use WSDCreateDeviceProxy2 instead with
// customized parameters.
//
///////////////////////////////////////////////////////////////////////////////
// </Include>

// <Include>
#pragma once
// </Include>

// <NamespaceDeclarations>
// 
// Namespace http://www.example.com/ncd/FileServiceSecure
// 
#define NAMESPACE_ENCODING_FILE_SERVICE_SECURE WSDXML_NAMESPACE_ENCODING(0,1)
extern WSDXML_NAME Names_FileServiceSecure[];
extern WSDXML_NAMESPACE Namespace_FileServiceSecure;


#define FILESERVICESECURE_FileChangeEventType                               WSDXML_NAME_ENCODING(0,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_GetFileRequest                                    WSDXML_NAME_ENCODING(1,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_GetFileResponse                                   WSDXML_NAME_ENCODING(2,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_GetFileListResponse                               WSDXML_NAME_ENCODING(3,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileChangeEvent                                   WSDXML_NAME_ENCODING(4,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileServiceSecure                                 WSDXML_NAME_ENCODING(5,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileServiceSecure_GetFileList_InputMessage        WSDXML_NAME_ENCODING(6,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileServiceSecure_GetFileList_OutputMessage       WSDXML_NAME_ENCODING(7,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_GetFileList                                       WSDXML_NAME_ENCODING(8,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileList                                          WSDXML_NAME_ENCODING(9,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_Element                                           WSDXML_NAME_ENCODING(10,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_Parameters                                        WSDXML_NAME_ENCODING(11,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileServiceSecure_GetFile_InputMessage            WSDXML_NAME_ENCODING(12,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileServiceSecure_GetFile_OutputMessage           WSDXML_NAME_ENCODING(13,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_GetFile                                           WSDXML_NAME_ENCODING(14,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FilePath                                          WSDXML_NAME_ENCODING(15,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_Attachment                                        WSDXML_NAME_ENCODING(16,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileServiceSecure_FileChangeEvent_OutputMessage   WSDXML_NAME_ENCODING(17,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_EventType                                         WSDXML_NAME_ENCODING(18,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileName                                          WSDXML_NAME_ENCODING(19,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_Result                                            WSDXML_NAME_ENCODING(20,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)
#define FILESERVICESECURE_FileDeviceSecure                                  WSDXML_NAME_ENCODING(21,NAMESPACE_ENCODING_FILE_SERVICE_SECURE)

// 
// Namespace http://www.w3.org/2001/XMLSchema
// 
#define NAMESPACE_ENCODING_XML_SCHEMA WSDXML_NAMESPACE_ENCODING(1,1)
extern WSDXML_NAME Names_XMLSchema[];
extern WSDXML_NAMESPACE Namespace_XMLSchema;


#define XMLSCHEMA_AnyType   WSDXML_NAME_ENCODING(0,NAMESPACE_ENCODING_XML_SCHEMA)

extern WSDXML_NAMESPACE* FileServiceSecureNamespaces[2];
#define FileServiceSecureRegisterNamespaces(pContext) pContext->SetNamespaces(FileServiceSecureNamespaces,(sizeof(FileServiceSecureNamespaces) / sizeof(FileServiceSecureNamespaces[0])),1)

// </NamespaceDeclarations>

// <NamespaceNameMacros>

#define NAME_FILESERVICESECURE_FileChangeEventType                               (&(Names_FileServiceSecure[0]))
#define NAME_FILESERVICESECURE_GetFileRequest                                    (&(Names_FileServiceSecure[1]))
#define NAME_FILESERVICESECURE_GetFileResponse                                   (&(Names_FileServiceSecure[2]))
#define NAME_FILESERVICESECURE_GetFileListResponse                               (&(Names_FileServiceSecure[3]))
#define NAME_FILESERVICESECURE_FileChangeEvent                                   (&(Names_FileServiceSecure[4]))
#define NAME_FILESERVICESECURE_FileServiceSecure                                 (&(Names_FileServiceSecure[5]))
#define NAME_FILESERVICESECURE_FileServiceSecure_GetFileList_InputMessage        (&(Names_FileServiceSecure[6]))
#define NAME_FILESERVICESECURE_FileServiceSecure_GetFileList_OutputMessage       (&(Names_FileServiceSecure[7]))
#define NAME_FILESERVICESECURE_GetFileList                                       (&(Names_FileServiceSecure[8]))
#define NAME_FILESERVICESECURE_FileList                                          (&(Names_FileServiceSecure[9]))
#define NAME_FILESERVICESECURE_Element                                           (&(Names_FileServiceSecure[10]))
#define NAME_FILESERVICESECURE_Parameters                                        (&(Names_FileServiceSecure[11]))
#define NAME_FILESERVICESECURE_FileServiceSecure_GetFile_InputMessage            (&(Names_FileServiceSecure[12]))
#define NAME_FILESERVICESECURE_FileServiceSecure_GetFile_OutputMessage           (&(Names_FileServiceSecure[13]))
#define NAME_FILESERVICESECURE_GetFile                                           (&(Names_FileServiceSecure[14]))
#define NAME_FILESERVICESECURE_FilePath                                          (&(Names_FileServiceSecure[15]))
#define NAME_FILESERVICESECURE_Attachment                                        (&(Names_FileServiceSecure[16]))
#define NAME_FILESERVICESECURE_FileServiceSecure_FileChangeEvent_OutputMessage   (&(Names_FileServiceSecure[17]))
#define NAME_FILESERVICESECURE_EventType                                         (&(Names_FileServiceSecure[18]))
#define NAME_FILESERVICESECURE_FileName                                          (&(Names_FileServiceSecure[19]))
#define NAME_FILESERVICESECURE_Result                                            (&(Names_FileServiceSecure[20]))
#define NAME_FILESERVICESECURE_FileDeviceSecure                                  (&(Names_FileServiceSecure[21]))


#define NAME_XMLSCHEMA_AnyType   (&(Names_XMLSchema[0]))

// </NamespaceNameMacros>

// <StructDeclarations>
typedef struct _PWCHAR_LIST PWCHAR_LIST;
typedef struct _GET_FILE_LIST_RESPONSE GET_FILE_LIST_RESPONSE;
typedef struct _GET_FILE_REQUEST GET_FILE_REQUEST;
typedef struct _GET_FILE_RESPONSE GET_FILE_RESPONSE;
typedef struct _FILE_CHANGE_EVENT FILE_CHANGE_EVENT;

// </StructDeclarations>

// <StructDefinitions>
// 
// Structure definition PWCHAR_LIST
// 
struct _PWCHAR_LIST
{
    struct _PWCHAR_LIST* Next;
    const WCHAR* Element;
};

// 
// Structure definition GET_FILE_LIST_RESPONSE
// 
struct _GET_FILE_LIST_RESPONSE
{
    PWCHAR_LIST* FileList;
};

// 
// Structure definition GET_FILE_REQUEST
// 
struct _GET_FILE_REQUEST
{
    const WCHAR* filePath;
};

// 
// Structure definition GET_FILE_RESPONSE
// 
struct _GET_FILE_RESPONSE
{
    IWSDAttachment* Attachment;
};

// 
// Structure definition FILE_CHANGE_EVENT
// 
struct _FILE_CHANGE_EVENT
{
    const WCHAR* EventType;
    const WCHAR* FileName;
};

// </StructDefinitions>

// <EnumerationValueDeclarations>
// 
// FileChangeEventType Values
// 
#define FileChangeEventType_Added            L"Added"
#define FileChangeEventType_Removed          L"Removed"
#define FileChangeEventType_Modified         L"Modified"
#define FileChangeEventType_RenamedOldName   L"RenamedOldName"
#define FileChangeEventType_RenamedNewName   L"RenamedNewName"

// </EnumerationValueDeclarations>

// <TypeTableDeclarations>
#define TYPE_ENCODING_GET_FILE_LIST_RESPONSE WSDXML_TYPE_ENCODING(0,1)
extern WSDXML_TYPE Type_GET_FILE_LIST_RESPONSE;

#define TYPE_ENCODING_GET_FILE_REQUEST WSDXML_TYPE_ENCODING(1,1)
extern WSDXML_TYPE Type_GET_FILE_REQUEST;

#define TYPE_ENCODING_GET_FILE_RESPONSE WSDXML_TYPE_ENCODING(2,1)
extern WSDXML_TYPE Type_GET_FILE_RESPONSE;

#define TYPE_ENCODING_FILE_CHANGE_EVENT WSDXML_TYPE_ENCODING(3,1)
extern WSDXML_TYPE Type_FILE_CHANGE_EVENT;


extern WSDXML_TYPE* FileServiceSecureTypes[4];

// FileServiceSecureRegisterTypes is used to register field types
// with an XML context so it can look up matching type tables.
#define FileServiceSecureRegisterTypes(pContext) pContext->SetTypes(FileServiceSecureTypes,(sizeof(FileServiceSecureTypes) / sizeof(FileServiceSecureTypes[0])),1)

// </TypeTableDeclarations>

// <MessageStructureDefinitions>
//
// Port type http://www.example.com/ncd/FileServiceSecure/FileServiceSecure
// Message structure definitions
//
typedef struct
{
    GET_FILE_LIST_RESPONSE* parameters;
}
RESPONSEBODY_FileServiceSecure_GetFileList;

typedef struct
{
    GET_FILE_REQUEST* parameters;
}
REQUESTBODY_FileServiceSecure_GetFile;

typedef struct
{
    GET_FILE_RESPONSE* parameters;
}
RESPONSEBODY_FileServiceSecure_GetFile;

typedef struct
{
    FILE_CHANGE_EVENT* result;
}
RESPONSEBODY_FileServiceSecure_FileChangeEvent;

//
// Port type http://www.example.com/ncd/FileServiceSecure/FileDeviceSecure
// Message structure definitions
//
// </MessageStructureDefinitions>

// <PortTypeDeclarations>
// 
// Port type http://www.example.com/ncd/FileServiceSecure/FileServiceSecure
// 
extern WSD_OPERATION Operations_FileServiceSecure[3];
extern WSD_PORT_TYPE PortType_FileServiceSecure;


// </PortTypeDeclarations>

// <RelationshipMetadataDeclaration>
extern WSD_HOST_METADATA hostMetadata;
// </RelationshipMetadataDeclaration>

// <ThisModelMetadataDeclaration>
extern WSD_THIS_MODEL_METADATA thisModelMetadata;
// </ThisModelMetadataDeclaration>

// <HostBuilderDeclaration>
HRESULT CreateFileServiceSecureHost(
                BOOL fIsCertAuth,
                BOOL fIsHttpAuth,
                BOOL fIsCertOrHttpAuth,
                LPCWSTR pszDeviceAddress,
                const WSD_THIS_DEVICE_METADATA* pThisDeviceMetadata,
                IFileServiceSecureService* pIFileServiceSecureService,
                IWSDDeviceHost** ppHostOut,
                IWSDXMLContext** ppContextOut);
// </HostBuilderDeclaration>

// <StubDeclarations>
HRESULT __stdcall
Stub_GetFileList
(   IUnknown* server
,   IWSDServiceMessaging* service
,   WSD_EVENT* event
);

HRESULT __stdcall
Stub_GetFile
(   IUnknown* server
,   IWSDServiceMessaging* service
,   WSD_EVENT* event
);

// </StubDeclarations>

// <StubDeclarations>
HRESULT __stdcall
Stub_FileChangeEvent
(   IUnknown* server
,   IWSDServiceMessaging* service
,   WSD_EVENT* event
);

// </StubDeclarations>

