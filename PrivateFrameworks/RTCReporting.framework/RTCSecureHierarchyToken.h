/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RTCReporting/RTCReporting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding> {

	NSString* _token;
	int _level;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int level;                   //@synthesize level=_level - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)level;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(id)initWithToken:(id)arg1 level:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLevel:(int)arg1 ;
-(id)description;
@end
