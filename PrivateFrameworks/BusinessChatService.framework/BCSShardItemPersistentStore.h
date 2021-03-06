/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <BusinessChatService/BCSPersistentStore.h>
#import <libobjc.A.dylib/BCSShardCacheQueryable.h>

@class NSString;

@interface BCSShardItemPersistentStore : BCSPersistentStore <BCSShardCacheQueryable> {

	long long _schemaVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)debugQueueName;
-(const char*)schema;
-(id)databasePath;
-(long long)schemaVersion;
-(id)init;
-(id)_databasePath;
-(void)deleteShardItemsOfType:(long long)arg1 ;
-(void)updateShardItem:(id)arg1 withShardIdentifier:(id)arg2 ;
-(long long)countOfShardsOfType:(long long)arg1 ;
-(long long)countOfExpiredShardsOfType:(long long)arg1 ;
-(id)initWithSchemaVersion:(long long)arg1 ;
-(void)schemaVersionWillChangeForDatabase:(sqlite3Ref)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3 ;
-(void)deleteShardItemMatching:(id)arg1 ;
-(BOOL)_updateShardItem:(id)arg1 withShardIdentifier:(id)arg2 ;
-(id)_executeFetchPersistentShardItemObjectSQLQuery:(const char*)arg1 ;
-(id)_extractShardItemFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)_executeDeleteBusinessItemSQLQuery:(const char*)arg1 ;
-(long long)_executeCountSQLQuery:(const char*)arg1 ;
-(id)shardItemMatching:(id)arg1 ;
-(void)deleteExpiredShardItemsOfType:(long long)arg1 ;
@end

