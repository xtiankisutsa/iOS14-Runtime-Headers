/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSString;

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate> {

	long long _direction;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) long long direction;                 //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)direction;
-(void)_updateColors;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)initWithDirection:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)backgroundView;
-(void)_setupPanImages;
@end
