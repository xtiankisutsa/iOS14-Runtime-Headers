/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSMutableDictionary;

@interface _SYSharedServiceDB : NSObject {

	os_unfair_lock_s _lock;
	sqlite3Ref _db;
	NSString* _name;
	NSMutableDictionary* _schemaSetupCallbacks;

}

@property (getter=_dbPath,nonatomic,readonly) NSString * dbPath; 
+(void)initialize;
+(id)sharedInstanceForServiceName:(id)arg1 ;
+(void)pairingStorePathWasReset;
+(void)_releaseSharedInstanceForServiceName:(id)arg1 ;
-(BOOL)inTransaction:(/*^block*/id)arg1 ;
-(BOOL)_runTransactionBlock:(/*^block*/id)arg1 exclusive:(BOOL)arg2 ;
-(void)updateSchemaForClient:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_LOCKED_ensureDBExists;
-(BOOL)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id*)arg2 ;
-(void)setSchemaVersion:(long long)arg1 forClient:(id)arg2 ;
-(void)dealloc;
-(void)_LOCKED_runSchemaUpdate:(/*^block*/id)arg1 forClientNamed:(id)arg2 ;
-(void)withDBRef:(/*^block*/id)arg1 ;
-(void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2 ;
-(long long)schemaVersionForClient:(id)arg1 ;
-(BOOL)_LOCKED_hasSchemaVersionForClient:(id)arg1 ;
-(long long)_LOCKED_getClientVersion:(id)arg1 ;
-(void)_LOCKED_ensureSchemaVersionsTableInDB:(sqlite3Ref)arg1 ;
-(id)_dbPath;
-(BOOL)_ensureParentExists:(id)arg1 error:(id*)arg2 ;
-(BOOL)inExclusiveTransaction:(/*^block*/id)arg1 ;
-(BOOL)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)_ensureSchemaVersionsTable;
@end
