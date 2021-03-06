/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCloudHistoryPushAgent.h>

@class NSXPCConnection, NSString;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent> {

	NSXPCConnection* _agentConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(void)clearAcknowledgedPushNotifications;
-(void)dealloc;
-(id)queryMemoryFootprintWithError:(id*)arg1 ;
-(void)acknowledgePendingPushNotifications;
-(id)init;
-(void)getPushNotifications:(/*^block*/id)arg1 ;
@end

