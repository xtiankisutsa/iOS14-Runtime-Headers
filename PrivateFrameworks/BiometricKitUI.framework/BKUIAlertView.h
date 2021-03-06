/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol OS_os_log;
@class UIAlertController, NSObject, UIView, UILabel;

@interface BKUIAlertView : UIView {

	UIAlertController* _alertController;
	double _alertHudTextStartTime;
	NSObject*<OS_os_log> bkui_alert_view_log;
	id _parent;
	SEL _cancelButtonSelector;
	SEL _otherButtonSelector;
	UIView* _alertHudView;
	UILabel* _alertHudText;
	double _alertHudTimeout;
	double _alertHudMinDisplayTime;

}

@property (assign,nonatomic,__weak) id parent;                           //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) SEL cancelButtonSelector;                   //@synthesize cancelButtonSelector=_cancelButtonSelector - In the implementation block
@property (assign,nonatomic) SEL otherButtonSelector;                    //@synthesize otherButtonSelector=_otherButtonSelector - In the implementation block
@property (assign,nonatomic,__weak) UIView * alertHudView;               //@synthesize alertHudView=_alertHudView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * alertHudText;              //@synthesize alertHudText=_alertHudText - In the implementation block
@property (assign,nonatomic) double alertHudTimeout;                     //@synthesize alertHudTimeout=_alertHudTimeout - In the implementation block
@property (assign,nonatomic) double alertHudMinDisplayTime;              //@synthesize alertHudMinDisplayTime=_alertHudMinDisplayTime - In the implementation block
-(void)setParent:(id)arg1 ;
-(id)parent;
-(void)_init;
-(id)init;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 otherButtonTitle:(id)arg6 otherButtonSelector:(SEL)arg7 viewController:(id)arg8 ;
-(void)_hideAlertHudView;
-(void)_setFadeAnimation:(id)arg1 ;
-(void)showAlert:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 viewController:(id)arg5 ;
-(void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 viewController:(id)arg4 ;
-(void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 viewController:(id)arg6 ;
-(BOOL)isAlertHidden;
-(SEL)cancelButtonSelector;
-(void)setCancelButtonSelector:(SEL)arg1 ;
-(SEL)otherButtonSelector;
-(void)setOtherButtonSelector:(SEL)arg1 ;
-(UIView *)alertHudView;
-(void)setAlertHudView:(UIView *)arg1 ;
-(UILabel *)alertHudText;
-(void)setAlertHudText:(UILabel *)arg1 ;
-(double)alertHudTimeout;
-(void)setAlertHudTimeout:(double)arg1 ;
-(double)alertHudMinDisplayTime;
-(void)setAlertHudMinDisplayTime:(double)arg1 ;
@end

