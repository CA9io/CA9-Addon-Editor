// All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Online/HTTP/Public/Interfaces/IHttpRequest.h"
#include "Online/HTTP/Public/Interfaces/IHttpResponse.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UploadClass.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUploadFileDelegate, int32, HttpResponseCode, int32, ContentLength);

UCLASS()
class CAPIT_LOGON_API UUploadClass : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Capit", meta = (BlueprintInternalUseOnly = "true"))
		static UUploadClass *UploadFile(const FString &URL, const FString &File, const TMap<FString, FString> &Body);

	UPROPERTY(BlueprintAssignable)
		FUploadFileDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FUploadFileDelegate OnFail;

protected:
	void StartDownload(const FString &URL, const FString File, const TMap<FString, FString> Body);

private:
	void HandleDownloadComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);


	/*void* TCHAR_TO_ANSI(ANSICHAR param1)
	{
		throw std::logic_error("The method or operation is not implemented.");
	}*/
};
