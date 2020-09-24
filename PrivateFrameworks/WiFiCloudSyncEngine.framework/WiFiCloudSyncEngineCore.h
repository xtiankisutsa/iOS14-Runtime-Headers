/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSThread, NSObject;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	NSObject*<OS_dispatch_queue> clientQueue;
	BOOL iCloudSyncingEnabled;
	BOOL isKVSEncrypted;

}

@property (assign) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (assign) NSThread * clientThread; 
@property (assign) NSObject*<OS_dispatch_queue> clientQueue; 
@property (assign) BOOL iCloudSyncingEnabled; 
@property (assign) BOOL isKVSEncrypted; 
-(void)unSubscribeKVStoreNotfications;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)pruneKVSStore;
-(void)relayPruneKVSStore:(id)arg1 ;
-(id)initWithEncryptedKVS:(BOOL)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)synchronizeKVS;
-(/*function pointer*/void*)callback;
-(void)dealloc;
-(void)printCompleteKVStore;
-(BOOL)isKVSEncrypted;
-(void)registerCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setContext:(void*)arg1 ;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(BOOL)iCloudSyncingEnabled;
-(void)relayMergeNetworks:(id)arg1 ;
-(void)registerCallback:(/*function pointer*/void*)arg1 queue:(id)arg2 context:(void*)arg3 ;
-(void)relayKeychainSyncState:(id)arg1 ;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void*)context;
-(void)removeFromKVStore:(id)arg1 ;
-(void)clearKVS;
-(void)setClientThread:(NSThread *)arg1 ;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(void)addToKVStore:(id)arg1 ;
-(void)setIsKVSEncrypted:(BOOL)arg1 ;
-(NSThread *)clientThread;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)readStoreValueForKey:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)queryKeychainSyncState;
-(void)synchronizeAndCallMergeNetworks;
-(void)relayCloudEvent:(id)arg1 ;
@end
