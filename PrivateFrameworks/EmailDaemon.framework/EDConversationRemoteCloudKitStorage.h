/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/EDConversationRemoteStorage.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDConversationRemoteStorageDelegate;
@class EDCloudMirroringPersistentStore, NSFetchedResultsController, NSPersistentHistoryToken, EDTransactionService, NSString;

@interface EDConversationRemoteCloudKitStorage : NSObject <NSFetchedResultsControllerDelegate, EDConversationRemoteStorage, EFLoggable> {

	BOOL _initialized;
	EDCloudMirroringPersistentStore* _mirroringPersistentStore;
	id<EDConversationRemoteStorageDelegate> _delegate;
	NSFetchedResultsController* _fetchedResultsController;
	NSPersistentHistoryToken* _historyToken;
	EDTransactionService* _exportTransaction;
	EDTransactionService* _importTransaction;

}

@property (nonatomic,readonly) EDCloudMirroringPersistentStore * mirroringPersistentStore;              //@synthesize mirroringPersistentStore=_mirroringPersistentStore - In the implementation block
@property (assign,nonatomic,__weak) id<EDConversationRemoteStorageDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSFetchedResultsController * fetchedResultsController;                   //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                                     //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * historyToken;                                   //@synthesize historyToken=_historyToken - In the implementation block
@property (nonatomic,retain) EDTransactionService * exportTransaction;                                  //@synthesize exportTransaction=_exportTransaction - In the implementation block
@property (nonatomic,retain) EDTransactionService * importTransaction;                                  //@synthesize importTransaction=_importTransaction - In the implementation block
@property (assign,getter=isMigratedFromKVSStorage,nonatomic) BOOL migratedFromKVSStorage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)cloudKitAPSTopics;
-(void)refresh;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)removeDictionaryForKey:(id)arg1 ;
-(id)_conversationInfosWithUUID:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)arg1 ;
-(BOOL)isInitialized;
-(void)setInitialized:(BOOL)arg1 ;
-(id)enumerateChangeHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setExportTransaction:(EDTransactionService *)arg1 ;
-(void)_recoverHistoryToken;
-(void)_removeConversationInfoWithObjectId:(id)arg1 save:(BOOL)arg2 managedObjectContext:(id)arg3 ;
-(void)_handlePushNotification:(id)arg1 ;
-(id)storageName;
-(id)dictionaryForConversationInfo:(id)arg1 ;
-(BOOL)isMigratedFromKVSStorage;
-(void)_handleDidResetSyncDataNotification:(id)arg1 ;
-(void)setDelegate:(id<EDConversationRemoteStorageDelegate>)arg1 ;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(EDTransactionService *)importTransaction;
-(void)_handleWillResetSyncDataNotification:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSFetchedResultsController *)fetchedResultsController;
-(void)_initialSetup;
-(id)_conversationInfoWithUUID:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_removeConversationInfoWithId:(id)arg1 managedObjectContext:(id)arg2 ;
-(id<EDConversationRemoteStorageDelegate>)delegate;
-(void)_addOrUpdateConversationInfo:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_requestFirstSyncWithManagedObjectContext:(id)arg1 ;
-(NSPersistentHistoryToken *)historyToken;
-(id)_controlInManagedObjectContext:(id)arg1 ;
-(void)_requestExportWithManagedObjectContext:(id)arg1 ;
-(id)entityForConversationDictionary:(id)arg1 key:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_updateConversationInfo:(id)arg1 withAnotherConversationInfo:(id)arg2 ;
-(id)_conversationInfoWithObjectId:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_requestImportWithManagedObjectContext:(id)arg1 ;
-(id)allConversationInfosInManagedObjectContext:(id)arg1 ;
-(EDTransactionService *)exportTransaction;
-(id)_transactionHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)setMigratedFromKVSStorage:(BOOL)arg1 ;
-(void)setImportTransaction:(EDTransactionService *)arg1 ;
-(BOOL)synchronize;
-(void)persistHistoryToken;
-(EDCloudMirroringPersistentStore *)mirroringPersistentStore;
-(id)dictionaryForKey:(id)arg1 ;
-(void)_handleDuplicationsForConversationUUIDs:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)dictionaryRepresentation;
@end

