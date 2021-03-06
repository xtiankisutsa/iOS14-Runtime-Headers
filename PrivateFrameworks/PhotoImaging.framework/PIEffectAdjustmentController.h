/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) double intensity; 
+(id)intensityKey;
+(id)kindKey;
+(id)versionKey;
-(long long)version;
-(void)setIntensity:(double)arg1 ;
-(NSString *)kind;
-(void)setVersion:(long long)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(double)intensity;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end

