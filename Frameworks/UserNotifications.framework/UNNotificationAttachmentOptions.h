/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _displayLocation;
	NSDictionary* _thumbnailGeneratorUserInfo;

}

@property (nonatomic,readonly) unsigned long long displayLocation;                          //@synthesize displayLocation=_displayLocation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * thumbnailGeneratorUserInfo;              //@synthesize thumbnailGeneratorUserInfo=_thumbnailGeneratorUserInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithOptions:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)displayLocation;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)thumbnailGeneratorUserInfo;
-(id)_initWithDisplayLocation:(unsigned long long)arg1 thumbnailGeneratorUserInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
