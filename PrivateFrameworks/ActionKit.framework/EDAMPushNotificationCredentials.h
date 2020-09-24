/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject {

	NSData* _iosDeviceToken;
	NSString* _gcmRegistrationId;

}

@property (nonatomic,retain) NSData * iosDeviceToken;                   //@synthesize iosDeviceToken=_iosDeviceToken - In the implementation block
@property (nonatomic,retain) NSString * gcmRegistrationId;              //@synthesize gcmRegistrationId=_gcmRegistrationId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSData *)iosDeviceToken;
-(void)setIosDeviceToken:(NSData *)arg1 ;
-(NSString *)gcmRegistrationId;
-(void)setGcmRegistrationId:(NSString *)arg1 ;
@end
