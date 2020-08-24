// All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Online/HTTP/Public/Interfaces/IHttpRequest.h"
#include "Online/HTTP/Public/Interfaces/IHttpResponse.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/Class.h"
#include "DownloadClass.generated.h"

UENUM(BlueprintType)
enum ERequestHTTP
{
	VE_GET = 0 UMETA(Displayname = "GET"),
	VE_POST = 1 UMETA(Displayname = "POST"),
	VE_Default = 2 UMETA(Displayname = "Default"),
	VE_Put = 3 UMETA(Displayname = "PUT")
};

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownloadFileDelegate, int32, HttpResponseCode, int32, ContentLength, const FString, SavePath);

UCLASS()
class CAPIT_LOGON_API UDownloadClass : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()
	
public:
	/* Downloads a file over HTTP, intended to be used to download .pak files. SavePath specifies where to save the file. */
	UFUNCTION(BlueprintCallable, Category = "Capit", meta = (BlueprintInternalUseOnly = "true"))
		static UDownloadClass *DownloadFile(const FString &URL, const FString &SavePath, const FString &Arugments, const ERequestHTTP &Request);

	UPROPERTY(BlueprintAssignable)
		FDownloadFileDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
		FDownloadFileDelegate OnFail;

protected:
	void StartDownload(const FString &URL, const FString &SavePath, const FString &Arugments, const ERequestHTTP &Request);

private:
	void HandleDownloadComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);

	FString SaveFilePath;

};
