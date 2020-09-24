/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor, NSValue, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	UIColor* tintColor;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
	_UIBarBackButtonItemAppearanceStorage* backButtonAppearance;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
@property (nonatomic,retain) NSValue * backButtonTitlePositionOffset; 
@property (nonatomic,retain) NSValue * miniBackButtonTitlePositionOffset; 
-(id)anyBackButtonBackgroundImage;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
-(NSValue *)backButtonTitlePositionOffset;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(NSValue *)miniBackButtonTitlePositionOffset;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(BOOL)arg4 ;
-(NSValue *)miniTitlePositionOffset;
-(NSValue *)titlePositionOffset;
-(id)anyBackgroundImage;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBackButtonTitlePositionOffset:(NSValue *)arg1 ;
-(void)setMiniBackButtonTitlePositionOffset:(NSValue *)arg1 ;
@end
