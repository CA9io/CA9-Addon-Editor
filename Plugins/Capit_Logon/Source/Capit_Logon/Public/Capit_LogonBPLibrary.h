// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/DataTable.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "Misc/FileHelper.h"
#include "EngineMinimal.h"
#include "Modules/ModuleManager.h"
#include "Misc/SecureHash.h"
#include "Async/AsyncWork.h"
#include "Online/HTTP/Public/Interfaces/IHttpRequest.h"
#include "Online/HTTP/Public/Interfaces/IHttpResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Capit_LogonBPLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(Capit, Log, All);

/* 
FlatcapIT Plugin for internal Use only! All rights reserved.
*/

/*
ENUMS
All used Enums for the Plugin





*/
UENUM(BlueprintType)
enum EPermissions
{
	VE_Read = 0 UMETA(Displayname = "Read"),
	VE_ReadWrite = 1 UMETA(Displayname = "ReadWrite")
};

UENUM(BlueprintType)
enum EChatroomRole
{
	VE_Admin = 0 UMETA(Displayname = "Admin"),
	VE_User = 1 UMETA(Displayname = "Member")
};

UENUM(BlueprintType)
enum EMessageTypes
{
	VE_Text = 0 UMETA(Displayname = "Read"),
	VE_Image = 1 UMETA(Displayname = "Image"),
	VE_Asset = 2 UMETA(Displayname = "Asset"),
	VE_Contact = 3 UMETA(Displayname = "Contact"),
	VE_SpeechNotify = 4 UMETA(Displayname = "Speech"),
	VE_Invitation = 5 UMETA(Displayname = "Invitation"),
	VE_Date = 6 UMETA(Displayname = "Date"),
	VE_FlatcapITAsset = 7 UMETA(Displayname = "CapitAsset")
};

UENUM(BlueprintType)
enum EPriority
{
	VE_Low = 0 UMETA(Displayname = "Low"),
	VE_Medium = 1 UMETA(Displayname = "Medium"),
	VE_High = 2 UMETA(Displayname = "High"),
	VE_VeryHigh = 3 UMETA(Displayname = "Very high")
};

UENUM(BlueprintType)
enum EProjectManagementType
{
	VE_Sprint = 0 UMETA(Displayname = "Sprint"),
	VE_Epic = 1 UMETA(Displayname = "Epic"),
	VE_Feature = 2 UMETA(Displayname = "Feature"),
	VE_Task = 3 UMETA(Displayname = "Task"),
	VE_Bug = 4 UMETA(Displayname = "Bug"),
	VE_Issue = 5 UMETA(Displayname = "Issue"),
	VE_UserStory = 6 UMETA(Displayname = "User Story"),
	VE_Other = 7 UMETA(Displayname = "Other")
};

UENUM(BlueprintType)
enum ECurrentState
{
	VE_Future = 0 UMETA(Displayname = "Future"),
	VE_ToDo = 1 UMETA(Displayname = "To-Do"),
	VE_Doing = 2 UMETA(Displayname = "Doing"),
	VE_Overdue = 3 UMETA(Displayname = "Overdue"),
	VE_Done = 4 UMETA(Displayname = "Done"),
	VE_Closed = 5 UMETA(Displayname = "Closed")
};

UENUM(BlueprintType)
enum ERelation
{
	VE_Parent = 0 UMETA(Displayname = "ParentOf"),
	VE_Child = 1 UMETA(Displayname = "ChildOf"),
	VE_Predecessor = 2 UMETA(Displayname = "Predecessor"),
	VE_Successor = 3 UMETA(Displayname = "Successor"),
	VE_Related = 4 UMETA(Displayname = "Related"),
	VE_ObligatoryFor = 5 UMETA(Displayname = "Obligatory for"),
	VE_Compulsory = 6 UMETA(Displayname = "Compulsory"),
	VE_SharedEnd = 7 UMETA(Displayname = "Shared End"),
	VE_SharedStart = 8 UMETA(Displayname = "Shared Start")
};

/*
STRUCTS
All used Structs for the Plugin









*/

/*
Last Edited
Used in Object Datatable

*/

USTRUCT(BlueprintType)
struct FLastEdited : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Date;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Author;

};

USTRUCT(BlueprintType)
struct FFileHandler
{
	GENERATED_USTRUCT_BODY()

		IFileHandle* FileHandle;


};

/*
Chatroom
Used in Chatdatatable

*/

USTRUCT(BlueprintType)
struct FChatroom_Capit : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<EChatroomRole> Role;

};

USTRUCT(BlueprintType)
struct FURL_Query : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString SearchParameter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString SearchValue;

};

/*
User
Used in Object Datatable. Permissionmanagement

*/

USTRUCT(BlueprintType)
struct FUser : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<EPermissions> Permission;

};

/*
Comments for Projectmanagement
Used in Projectmanagement

*/

USTRUCT(BlueprintType)
struct FComment : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Comment;

};

/*
Dependencies Tasks
Used in Projectmanagement

*/

USTRUCT(BlueprintType)
struct FTaskDependencies : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<ERelation> Relation;

};

/*
Users
Datatable Struct

*/

USTRUCT(BlueprintType)
struct FUserTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString MailAddress;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FChatroom_Capit> Chatrooms;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Role;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<int32> MessageIDs;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		float Budget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		bool CanUpload;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		bool CanManageAssets;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		bool CanManageBudget;

	FUserTable()
	{
		Username = "NULL";
		MailAddress = "NULL@DOMAIN.COM";
		Role = "NULL";
		Budget = 0.0;
		CanUpload = false;
		CanManageAssets = false;
		CanManageBudget = false;
	}

};

/*
Messages
Datatable Struct

*/
USTRUCT(BlueprintType)
struct FMessages : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString From;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString To;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<EMessageTypes> MessageType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Content;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Filename;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 Time;


	FMessages()
	{
		
	}

};

USTRUCT(BlueprintType)
struct FUnrealM : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		bool isPlaceable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		bool isMaterial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		bool isParent;

	FUnrealM()
	{

	}

};

USTRUCT(BlueprintType)
struct FAuthor : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Company;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Userid;

	FAuthor()
	{

	}

};


/*
Project-Management
Datatable Struct

*/

USTRUCT(BlueprintType)
struct FProjectManagement : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString ItemName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString Description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FComment> Comments;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FString> AssignedUsers;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FString> CanRead;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString CreatedBy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 TimeStart;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 TimeEnd;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<EPriority> Priority;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<ECurrentState> CurrentState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FTaskDependencies> DependentTasks;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FString> DependentAssets;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TEnumAsByte<EProjectManagementType> Type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FUnrealM UnrealVariables;


	FProjectManagement()
	{

	}

};

/*
Metadata
user in the Datatableobject

*/
USTRUCT(BlueprintType)
struct FObject_MetaData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	//Packetname has to be unique
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	Source;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	Price;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	Author;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	Date;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		UTexture2D* Texture;

	//Use the custom strings for special Metadata or fileinformation you want to append.
	//E.G. You have a custom menu for a new item and you need specific metadata information to it
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	CustomString1;

	//Use the custom strings for special Metadata or fileinformation you want to append.
	//E.G. You have a custom menu for a new item and you need specific metadata information to it
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	CustomString2;

	//Use the custom strings for special Metadata or fileinformation you want to append.
	//E.G. You have a custom menu for a new item and you need specific metadata information to it
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MetaData_Struct")
		FString	CustomString3;

	

	FObject_MetaData()
	{

	}
};

/*
Datatable Struct


*/
USTRUCT(BlueprintType)
struct FDatatableStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	//Packetname has to be unique
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Parsed_Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Pretty_Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Category;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int32 Price;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	Longdescription;

	//Important for the interpreter to choose
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FString	ItemType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FString> Media;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FString> Tags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		int64 Size;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		TArray<FString>	Version;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FAuthor	Author;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Datatable_Struct")
		FLastEdited	LastEdited;

	FDatatableStruct()
	{
		
	}
};

/*
FUNCTIONS
All Plugin Functions









*/

UCLASS()
class UCapit_LogonBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	//Clears all Datatable Entries
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Empty_Datatable", Keywords = "Empty Clear Datatable Capit"), Category = "Capit Functions")
		static void EmptyDatatable(UDataTable* Datatable);

	//Adds a new Datatable Row to the datatable.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add_Datatable_Object", Keywords = "Add Datatable Row Object Capit"), Category = "Capit Functions")
		static void AddDatatableObject(UDataTable* Datatable, FDatatableStruct RowToAdd, FName &ID);

	//Merges two Datatables. Adds all entries from the DatatableToMerge Table to the DatatableToMergeTo Datatable
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Merge_Datatable", Keywords = "Merge Datatable Capit"), Category = "Capit Functions")
		static void MergeDatatable(UDataTable* DatatableToMergeTo, UDataTable* DatatableToMerge);

	//Filename with .txt extension
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Write_To_Text_File", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static void WritetoTextfile(FString Path, FString Filename, FString Text);

	//Path with filename and extension appended
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read_From_TextFile", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static void ReadFromTextfile(FString Path, FString &Text);

	//Path with filename and extension appended
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete_File", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static void DeleteFile(FString Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get_Files_In_Directory", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static bool GetFilesInDirectory(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get_File_Size", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static bool GetFileSize(FString PathToFile, int64 &Size);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get_Folder_Size", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static bool GetFolderSize(FString PathToFolder, FString Filter, int64 &Size);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "int64_to_string", Keywords = "int64 Capit"), Category = "Capit Functions")
		static void int64_to_String(int64 Int64, FString& String);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Directory Recursive", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static bool delete_DirectoryRecursive(FString Directory);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Directory Tree", Keywords = "Filemanagement Capit"), Category = "Capit Functions")
		static bool Create_Directory_tree(FString Directory);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read File with Offset", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static bool Read_File_Offset(int64 NumberOfBytesToRead, TArray<uint8> &Bytes, int64 Offset, FString Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Write File with Offset", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static bool Write_File_Offset(TArray<uint8> Source, FString Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "add new Message", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void add_New_Message(UDataTable* Datatable, FMessages Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "edit Object", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void edit_Object(UDataTable* Datatable, FDatatableStruct NewRowObject, FName RowToEdit);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "edit Project-Management", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void edit_Project(UDataTable* Datatable, FDatatableStruct NewRowObject, FName RowToEdit);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "add Project-Management", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void add_Project(UDataTable* Datatable, FProjectManagement NewRowObject);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "add User", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void add_User(UDataTable* Datatable, FUserTable NewRowObject, FName Username);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "edit User", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void edit_User(UDataTable* Datatable, FUserTable NewRowObject, FName RowToEdit);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "UrlEncode", Keywords = "HTTP Capit"), Category = "Capit Functions Filemanagement")
		static void encode_url(TArray<FURL_Query> Query,FString BaseURL, FString &URL_Encoded);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "calculate Array Min, Max", Keywords = "Filemanagement Capit"), Category = "Capit Functions AssetManagement")
		static void calculate_Actor_snapping(TArray<FVector> Vertices, FVector& Min, FVector& Max);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open File", Keywords = "Filemanagement Capit"), Category = "Capit Functions AssetManagement")
		static void open_file(const FString& File);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "File Signature", Keywords = "Filemanagement Capit"), Category = "Capit Functions AssetManagement")
		static FString file_signature(FString File);

	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "create File Writer", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void Create_File_Writer(FFileHandler& FileHandle, FString Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "create File Reader", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void Create_File_Reader(FFileHandler& FileHandle, FString Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "delete Filehandler", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void delete_Filehandle(FFileHandler FileHandle);*/

	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Flush File", Keywords = "Filemanagement Capit"), Category = "Capit Functions Filemanagement")
		static void flush_Filehandle(FFileHandler FileHandle);
		*/

};
