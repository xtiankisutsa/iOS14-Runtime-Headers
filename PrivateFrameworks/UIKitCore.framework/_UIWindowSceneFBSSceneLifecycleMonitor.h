/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneLifecycleMonitor.h>

@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {

	NSNumber* _transitioningState;
	BOOL _transitioning;
	BOOL _connected;

}
-(void)willBecomeActive;
-(id)_windowScene;
-(long long)currentActivationState;
-(id)initWithScene:(id)arg1 ;
-(void)didEnterBackground;
-(void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(/*^block*/id)arg4 ;
@end
