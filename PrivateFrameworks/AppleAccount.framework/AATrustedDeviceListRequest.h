/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest {

	AAGrandSlamSigner* _grandSlamSigner;
	NSString* _heartbeatToken;

}

@property (nonatomic,copy) NSString * heartbeatToken;              //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3 ;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
@end
