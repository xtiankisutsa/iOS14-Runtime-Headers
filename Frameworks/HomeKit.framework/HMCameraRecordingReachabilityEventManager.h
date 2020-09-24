/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMContext, NSUUID, NSNotificationCenter, HMFUnfairLock, NSHashTable, NSString;

@interface HMCameraRecordingReachabilityEventManager : NSObject <HMFMessageReceiver, HMFLogging> {

	_HMContext* _context;
	NSUUID* _uniqueIdentifier;
	NSNotificationCenter* _notificationCenter;
	HMFUnfairLock* _lock;
	NSHashTable* _observers;

}

@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (readonly) NSHashTable * observers;                                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSNotificationCenter *)notificationCenter;
-(void)configure;
-(void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCountOfEventsWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSHashTable *)observers;
-(void)fetchAllEventsWithCompletion:(/*^block*/id)arg1 ;
-(HMFUnfairLock *)lock;
-(void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCountOfAllEventsWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(id)initWithContext:(id)arg1 uniqueIdentifier:(id)arg2 notificationCenter:(id)arg3 ;
-(void)handleDidChangeEventsMessage:(id)arg1 ;
-(void)fetchEventsBeforeDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchEventsAfterDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)unsubscribe;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)subscribe;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(_HMContext *)context;
-(id)logIdentifier;
-(void)handleDaemonReconnectedNotification:(id)arg1 ;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
@end
