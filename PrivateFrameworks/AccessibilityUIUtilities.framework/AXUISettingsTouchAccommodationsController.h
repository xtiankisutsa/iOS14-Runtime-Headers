/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>
#import <libobjc.A.dylib/AXUISettingsEditableTableCellWithStepperDelegate.h>

@class NSArray, PSSpecifier, NSString;

@interface AXUISettingsTouchAccommodationsController : AXUISettingsBaseListController <AXUISettingsEditableTableCellWithStepperDelegate> {

	BOOL _touchAccommodationsEnabled;
	BOOL _touchAccommodationsAreConfigured;
	BOOL _touchAccommodationsHoldDurationEnabled;
	BOOL _touchAccommodationsIgnoreRepeatEnabled;
	BOOL _touchAccommodationsAllowsSwipeGesturesToBypass;
	double _touchAccommodationsHoldDuration;
	double _touchAccommodationsIgnoreRepeatDuration;
	double _touchAccommodationsTapActivationTimeout;
	long long _touchAccommodationsTapActivationMethod;
	NSArray* _tapTimeoutSpecifiers;
	PSSpecifier* _holdDurationPickerSpecifier;
	PSSpecifier* _ignoreRepeatPickerSpecifier;
	NSArray* _swipeGesturesSpecifiers;

}

@property (nonatomic,retain) NSArray * tapTimeoutSpecifiers;                                   //@synthesize tapTimeoutSpecifiers=_tapTimeoutSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * holdDurationPickerSpecifier;                        //@synthesize holdDurationPickerSpecifier=_holdDurationPickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * ignoreRepeatPickerSpecifier;                        //@synthesize ignoreRepeatPickerSpecifier=_ignoreRepeatPickerSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * swipeGesturesSpecifiers;                                //@synthesize swipeGesturesSpecifiers=_swipeGesturesSpecifiers - In the implementation block
@property (assign,nonatomic) BOOL touchAccommodationsEnabled;                                  //@synthesize touchAccommodationsEnabled=_touchAccommodationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL touchAccommodationsAreConfigured;                          //@synthesize touchAccommodationsAreConfigured=_touchAccommodationsAreConfigured - In the implementation block
@property (assign,nonatomic) BOOL touchAccommodationsHoldDurationEnabled;                      //@synthesize touchAccommodationsHoldDurationEnabled=_touchAccommodationsHoldDurationEnabled - In the implementation block
@property (assign,nonatomic) BOOL touchAccommodationsIgnoreRepeatEnabled;                      //@synthesize touchAccommodationsIgnoreRepeatEnabled=_touchAccommodationsIgnoreRepeatEnabled - In the implementation block
@property (assign,nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;              //@synthesize touchAccommodationsAllowsSwipeGesturesToBypass=_touchAccommodationsAllowsSwipeGesturesToBypass - In the implementation block
@property (assign,nonatomic) double touchAccommodationsHoldDuration;                           //@synthesize touchAccommodationsHoldDuration=_touchAccommodationsHoldDuration - In the implementation block
@property (assign,nonatomic) double touchAccommodationsIgnoreRepeatDuration;                   //@synthesize touchAccommodationsIgnoreRepeatDuration=_touchAccommodationsIgnoreRepeatDuration - In the implementation block
@property (assign,nonatomic) double touchAccommodationsTapActivationTimeout;                   //@synthesize touchAccommodationsTapActivationTimeout=_touchAccommodationsTapActivationTimeout - In the implementation block
@property (assign,nonatomic) long long touchAccommodationsTapActivationMethod;                 //@synthesize touchAccommodationsTapActivationMethod=_touchAccommodationsTapActivationMethod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)touchAccommodationsTapActivationTimeout;
-(void)setTouchAccommodationsHoldDuration:(double)arg1 ;
-(void)setTouchAccommodationsTapActivationTimeout:(double)arg1 ;
-(void)setTouchAccommodationsTapActivationMethod:(long long)arg1 ;
-(BOOL)touchAccommodationsIgnoreRepeatEnabled;
-(long long)touchAccommodationsTapActivationMethod;
-(void)setTouchAccommodationsEnabled:(BOOL)arg1 ;
-(void)setTouchAccommodationsIgnoreRepeatDuration:(double)arg1 ;
-(BOOL)touchAccommodationsHoldDurationEnabled;
-(void)setTouchAccommodationsIgnoreRepeatEnabled:(BOOL)arg1 ;
-(BOOL)touchAccommodationsEnabled;
-(void)setTouchAccommodationsHoldDurationEnabled:(BOOL)arg1 ;
-(BOOL)touchAccommodationsAllowsSwipeGesturesToBypass;
-(void)setTouchAccommodationsAllowsSwipeGesturesToBypass:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)touchAccommodationsIgnoreRepeatDuration;
-(id)stringValueForSpecifier:(id)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(BOOL)touchAccommodationsAreConfigured;
-(void)_updateMasterSwitchFooterTextForSpecifier:(id)arg1 shouldReload:(BOOL)arg2 ;
-(void)setTouchAccommodationsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)touchAccommodationsEnabled:(id)arg1 ;
-(id)_holdDurationSpecifiers;
-(BOOL)_shouldShowSwipeGesturesSpecifiersWithHoldDuration;
-(id)_swipeGesturesSpecifiers;
-(id)_ignoreRepeatSpecifiers;
-(id)_tapActivationMethodSpecifiers;
-(BOOL)_shouldShowSwipeGesturesSpecifiersWithTapAssistance;
-(void)_updateMasterSwitchFooterText;
-(void)_showOrHideTapTimeoutAnimated:(BOOL)arg1 ;
-(void)_updateSwipeGesturesSpecifiers;
-(PSSpecifier *)ignoreRepeatPickerSpecifier;
-(id)holdDuration:(id)arg1 ;
-(PSSpecifier *)holdDurationPickerSpecifier;
-(NSArray *)tapTimeoutSpecifiers;
-(void)setTapTimeoutSpecifiers:(NSArray *)arg1 ;
-(void)_updateDelayPickerSpecifier:(id)arg1 additionalSpecifiers:(id)arg2 afterSpecifierWithIdentifier:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setIgnoreRepeatPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)_setIgnoreRepeatEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_ignoreRepeatEnabled:(id)arg1 ;
-(id)_durationSpecifiersWithName:(id)arg1 groupIdentifier:(id)arg2 footerText:(id)arg3 set:(SEL)arg4 get:(SEL)arg5 previousSpecifierIdentifier:(id)arg6 conditionalSpecifiers:(id)arg7 ;
-(void)setHoldDurationPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)_setHoldDurationEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_holdDurationEnabled:(id)arg1 ;
-(NSArray *)swipeGesturesSpecifiers;
-(id)_swipeGesturesEnabled:(id)arg1 ;
-(Class)touchAccomodationsSwipeGestureViewControllerClass;
-(void)setSwipeGesturesSpecifiers:(NSArray *)arg1 ;
-(id)ignoreRepeat:(id)arg1 ;
-(id)activationMethod:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(double)touchAccommodationsHoldDuration;
@end
