/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface DEWorkQueues : NSObject {

	NSMutableDictionary* _queues;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (retain) NSMutableDictionary * queues;                            //@synthesize queues=_queues - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(NSMutableDictionary *)queues;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)on:(id)arg1 enqueue:(/*^block*/id)arg2 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(void)advance:(id)arg1 ;
@end

