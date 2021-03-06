/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDProcessMemoryPressureNotificationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDAWDLogEvent> {

	NSString* _processMemoryState;
	NSString* _dataSyncState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * processMemoryState;              //@synthesize processMemoryState=_processMemoryState - In the implementation block
@property (nonatomic,readonly) NSString * dataSyncState;                   //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)createEventWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2 ;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2 ;
-(NSString *)processMemoryState;
@end

