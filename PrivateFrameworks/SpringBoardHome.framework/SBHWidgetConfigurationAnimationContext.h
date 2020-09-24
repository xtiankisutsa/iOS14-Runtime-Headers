/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, SBIconView, MTMaterialView;


@protocol SBHWidgetConfigurationAnimationContext
@property (nonatomic,readonly) long long operation; 
@property (nonatomic,readonly) BOOL wantsAnimation; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGRect contentBoundingRect; 
@property (nonatomic,readonly) UIView * homeScreenContentView; 
@property (nonatomic,readonly) SBIconView * sourceView; 
@property (nonatomic,readonly) SBIconView * referenceView; 
@property (nonatomic,readonly) CGRect sourceContentFrame; 
@property (nonatomic,readonly) UIView * targetView; 
@property (nonatomic,readonly) CGRect targetContentFrame; 
@property (nonatomic,readonly) MTMaterialView * backgroundView; 
@property (nonatomic,readonly) UIView * backgroundTintView; 
@required
-(UIView *)targetView;
-(SBIconView *)referenceView;
-(UIView *)containerView;
-(SBIconView *)sourceView;
-(BOOL)wantsAnimation;
-(long long)operation;
-(MTMaterialView *)backgroundView;
-(UIView *)backgroundTintView;
-(CGRect)contentBoundingRect;
-(CGRect)sourceContentFrame;
-(CGRect)targetContentFrame;
-(UIView *)homeScreenContentView;

@end
