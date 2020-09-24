/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchDatabaseChangesOperationCallbacks.h>

@class CKServerChangeToken, CKFetchDatabaseChangesOperationInfo;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation <CKFetchDatabaseChangesOperationCallbacks> {

	BOOL _fetchAllChanges;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _recordZoneWithIDWasPurgedBlock;
	/*^block*/id _changeTokenUpdatedBlock;
	/*^block*/id _fetchDatabaseChangesCompletionBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _serverChangeToken;
	long long _status;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                                                  //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) id<CKFetchDatabaseChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchDatabaseChangesOperationInfo * operationInfo; 
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;                                            //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                                          //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                                     //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                                                            //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                                                         //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                                                          //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id changeTokenUpdatedBlock;                                                                 //@synthesize changeTokenUpdatedBlock=_changeTokenUpdatedBlock - In the implementation block
@property (nonatomic,copy) id fetchDatabaseChangesCompletionBlock;                                                     //@synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)performCKOperation;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(long long)status;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)init;
-(id)activityCreate;
-(BOOL)hasCKOperationCallbacksSet;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setChangeTokenUpdatedBlock:(id)arg1 ;
-(void)setFetchDatabaseChangesCompletionBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(id)fetchDatabaseChangesCompletionBlock;
-(id)changeTokenUpdatedBlock;
-(void)handleChangeForRecordZoneID:(id)arg1 ;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 databaseChangesStatus:(long long)arg2 error:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleDeleteForRecordZoneID:(id)arg1 ;
-(void)handlePurgeForRecordZoneID:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)fillOutOperationInfo:(id)arg1 ;
@end
