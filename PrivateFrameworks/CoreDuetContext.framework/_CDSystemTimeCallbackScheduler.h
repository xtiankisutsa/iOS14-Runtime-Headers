/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject {

	NSString* _eventNameRoot;

}

@property (nonatomic,copy,readonly) NSString * eventNameRoot;              //@synthesize eventNameRoot=_eventNameRoot - In the implementation block
+(id)sharedInstance;
-(void)scheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(NSString *)eventNameRoot;
-(void)unscheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(id)initWithEventNameRoot:(id)arg1 ;
-(void)_handleCallbackAtDate:(id)arg1 ;
@end
