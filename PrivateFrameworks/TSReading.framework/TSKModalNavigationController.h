/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController {

	UIView* mTopSeparator;
	BOOL mShowTopSeparator;
	BOOL mIsFullscreenViewController;

}

@property (assign,nonatomic) BOOL showTopSeparator; 
@property (assign,nonatomic) BOOL isFullscreenViewController; 
-(void)dealloc;
-(id)initWithRootViewController:(id)arg1 ;
-(void)viewDidLoad;
-(long long)positionForBar:(id)arg1 ;
-(BOOL)showTopSeparator;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)layoutViews;
-(void)setIsFullscreenViewController:(BOOL)arg1 ;
-(void)p_statusBarWillChange:(id)arg1 ;
-(BOOL)isFullscreenViewController;
@end
