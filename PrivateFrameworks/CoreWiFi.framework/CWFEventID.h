/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFEventID : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _interfaceName;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)eventIDWithType:(long long)arg1 interfaceName:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToEventID:(id)arg1 ;
@end
