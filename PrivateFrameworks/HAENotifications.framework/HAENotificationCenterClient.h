/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HAENotifications/HAENotificationCenterDelegate.h>

@class NSXPCConnection, NSString;

@interface HAENotificationCenterClient : NSObject <HAENotificationCenterDelegate> {

	NSXPCConnection* connection;
	BOOL connectionDidInvalidate;
	NSString* bundleID;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)setupConnection;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)addHAENotificationEvent:(id)arg1 ;
-(NSString *)bundleID;
@end

