/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, UITouchForceGestureRecognizer, NSString, UIGestureRecognizer;

@interface _UIForceClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {

	unsigned long long _currentState;
	BOOL _cancelsTouchesInView;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	UITouchForceGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UITouchForceGestureRecognizer * gestureRecognizer;                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) double touchForce; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                               //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) BOOL cancelsTouchesInView;                                          //@synthesize cancelsTouchesInView=_cancelsTouchesInView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout; 
@property (nonatomic,readonly) double maximumEffectProgress; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (assign,nonatomic) unsigned long long behavior; 
+(BOOL)prefersCancelsTouchesInView;
+(BOOL)requiresForceCapability;
-(unsigned long long)inputPrecision;
-(BOOL)cancelsTouchesInView;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(BOOL)isCurrentlyAcceleratedByForce;
-(void)setGestureRecognizer:(UITouchForceGestureRecognizer *)arg1 ;
-(double)maximumEffectProgress;
-(void)cancelInteraction;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(UITouchForceGestureRecognizer *)gestureRecognizer;
-(UIView *)view;
-(BOOL)hasExceededAllowableMovement;
-(double)touchDuration;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1 ;
-(BOOL)allowsRepeatedClicks;
-(void)setView:(UIView *)arg1 ;
-(id)init;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(void)setDelegate:(id<_UIClickInteractionDriverDelegate>)arg1 ;
-(double)touchForce;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
@end
