/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSTimer.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, PCPersistentTimer;

@interface BSPersistentTimer : NSObject <BSTimer> {

	double _fireInterval;
	NSString* _serviceIdentifier;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	/*^block*/id _handler;
	os_unfair_lock_s _lock;
	PCPersistentTimer* _timer;

}

@property (getter=isScheduled,nonatomic,readonly) BOOL scheduled; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double fireInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cancel;
-(double)fireInterval;
-(void)schedule;
-(void)_timerFired:(id)arg1 ;
-(void)dealloc;
-(double)startTime;
-(id)initWithFireInterval:(double)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)isScheduled;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

