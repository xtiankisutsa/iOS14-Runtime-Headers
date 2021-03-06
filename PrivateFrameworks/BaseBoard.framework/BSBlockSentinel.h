/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BSAction, NSObject;

@interface BSBlockSentinel : NSObject {

	BSAction* _sentinelAction;
	/*^block*/id _handler;
	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _explicitQueue;

}
+(id)sentinelWithQueue:(id)arg1 signalHandler:(/*^block*/id)arg2 ;
+(id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(/*^block*/id)arg3 ;
+(id)sentinelWithExceptionReason:(id)arg1 ;
+(id)sentinelWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2 ;
-(BOOL)signalWithContext:(id)arg1 ;
-(BOOL)signal;
@end

