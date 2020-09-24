/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _enableManualMode;
	NEFilterProviderConfiguration* _provider;
	long long _grade;

}

@property (assign) BOOL enableManualMode;                               //@synthesize enableManualMode=_enableManualMode - In the implementation block
@property (getter=isEnabled) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEFilterProviderConfiguration * provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) long long grade;                           //@synthesize grade=_grade - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)grade;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NEFilterProviderConfiguration *)provider;
-(BOOL)enableManualMode;
-(void)setEnableManualMode:(BOOL)arg1 ;
-(id)init;
-(void)setProvider:(NEFilterProviderConfiguration *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setGrade:(long long)arg1 ;
@end
