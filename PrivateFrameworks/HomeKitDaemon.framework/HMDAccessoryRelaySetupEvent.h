/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDAccessoryRelaySetupEvent : HMDLogEvent <HMDAWDLogEvent> {

	HMDAccessory* _hmdAccessory;
	unsigned long long _actionType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HMDAccessory * hmdAccessory;              //@synthesize hmdAccessory=_hmdAccessory - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                   //@synthesize actionType=_actionType - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySetupEventWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2 ;
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2 ;
-(HMDAccessory *)hmdAccessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end
