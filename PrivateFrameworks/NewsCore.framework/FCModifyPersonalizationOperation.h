/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, FCPersonalizationTreatment, CKRecord, NTPBPersonalizationProfile, NSError;

@interface FCModifyPersonalizationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	NSArray* _changeGroups;
	FCPersonalizationTreatment* _treatment;
	CKRecord* _remoteRecord;
	/*^block*/id _saveCompletionHandler;
	NTPBPersonalizationProfile* _savedProfile;
	CKRecord* _savedRecord;
	NSError* _resultError;

}

@property (nonatomic,retain) NTPBPersonalizationProfile * savedProfile;              //@synthesize savedProfile=_savedProfile - In the implementation block
@property (nonatomic,retain) CKRecord * savedRecord;                                 //@synthesize savedRecord=_savedRecord - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                  //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSArray * changeGroups;                                 //@synthesize changeGroups=_changeGroups - In the implementation block
@property (nonatomic,retain) FCPersonalizationTreatment * treatment;                 //@synthesize treatment=_treatment - In the implementation block
@property (nonatomic,retain) CKRecord * remoteRecord;                                //@synthesize remoteRecord=_remoteRecord - In the implementation block
@property (nonatomic,copy) id saveCompletionHandler;                                 //@synthesize saveCompletionHandler=_saveCompletionHandler - In the implementation block
+(void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(BOOL)arg4 ;
+(id)personalizationProfileFromRecord:(id)arg1 ;
+(void)pruneAggregates:(id)arg1 ;
+(void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(BOOL)arg4 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(FCCKPrivateDatabase *)database;
-(BOOL)validateOperation;
-(void)resetForRetry;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(CKRecord *)savedRecord;
-(NSError *)resultError;
-(void)setSavedProfile:(NTPBPersonalizationProfile *)arg1 ;
-(void)setSavedRecord:(CKRecord *)arg1 ;
-(id)saveCompletionHandler;
-(NTPBPersonalizationProfile *)savedProfile;
-(void)setChangeGroups:(NSArray *)arg1 ;
-(void)setSaveCompletionHandler:(id)arg1 ;
-(void)setResultError:(NSError *)arg1 ;
-(unsigned long long)maxRetries;
-(CKRecord *)remoteRecord;
-(FCPersonalizationTreatment *)treatment;
-(void)setTreatment:(FCPersonalizationTreatment *)arg1 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(NSArray *)changeGroups;
@end

