/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray, APLocationInfo, NSString;

@interface APClientInfo : NSObject <NSSecureCoding> {

	long long _orientation;
	long long _interfaceIdiom;
	long long _screenHeight;
	long long _screenWidth;
	NSNumber* _scale;
	NSArray* _keyboards;
	APLocationInfo* _locationInfo;
	NSString* _appVersion;

}

@property (assign) long long orientation;                      //@synthesize orientation=_orientation - In the implementation block
@property (assign) long long interfaceIdiom;                   //@synthesize interfaceIdiom=_interfaceIdiom - In the implementation block
@property (assign) long long screenHeight;                     //@synthesize screenHeight=_screenHeight - In the implementation block
@property (assign) long long screenWidth;                      //@synthesize screenWidth=_screenWidth - In the implementation block
@property (retain) NSNumber * scale;                           //@synthesize scale=_scale - In the implementation block
@property (retain) NSArray * keyboards;                        //@synthesize keyboards=_keyboards - In the implementation block
@property (retain) APLocationInfo * locationInfo;              //@synthesize locationInfo=_locationInfo - In the implementation block
@property (retain) NSString * appVersion;                      //@synthesize appVersion=_appVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setActiveClientInfo:(id)arg1 ;
+(id)activeClientInfo;
-(long long)interfaceIdiom;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setInterfaceIdiom:(long long)arg1 ;
-(NSString *)appVersion;
-(void)setScreenWidth:(long long)arg1 ;
-(NSNumber *)scale;
-(void)setScale:(NSNumber *)arg1 ;
-(long long)orientation;
-(long long)screenHeight;
-(APLocationInfo *)locationInfo;
-(void)setLocationInfo:(APLocationInfo *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setScreenHeight:(long long)arg1 ;
-(void)setKeyboards:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)keyboards;
-(long long)screenWidth;
-(id)nonUICopy;
-(void)updateActiveClientInfo;
@end

