/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>

@class NSString;

@interface BNSceneSettings : UIApplicationSceneSettings

@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,readonly) int viewControllerAppearState; 
@property (nonatomic,readonly) int bannerAppearState; 
@property (nonatomic,copy,readonly) NSString * revocationReason; 
@property (getter=isUserInteractionInProgress,nonatomic,readonly) BOOL userInteractionInProgress; 
-(CGSize)containerSize;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)presentationSize;
-(BOOL)isUserInteractionInProgress;
-(int)bannerAppearState;
-(int)viewControllerAppearState;
-(NSString *)revocationReason;
@end

