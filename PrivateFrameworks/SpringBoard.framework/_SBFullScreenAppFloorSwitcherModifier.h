/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface _SBFullScreenAppFloorSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _activeAppLayout;

}
-(long long)homeScreenBackdropBlurType;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)topMostLayoutElements;
-(double)reopenClosedWindowsButtonAlpha;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(long long)plusButtonStyle;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)isContainerStatusBarVisible;
-(id)appLayoutsToCacheSnapshots;
-(long long)dockUpdateMode;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)_isActiveAppLayoutAtIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)homeScreenDimmingAlpha;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToResignActive;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)wantsSwitcherDimmingView;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(double)switcherDimmingAlpha;
-(double)homeScreenBackdropBlurProgress;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)fullyPresentedFrameForAppLayout:(id)arg1 ;
-(double)dockProgress;
-(double)containerStatusBarAnimationDuration;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionCompletionOptions;
-(id)appLayoutForReceivingHardwareButtonEvents;
-(double)wallpaperScale;
-(double)homeScreenAlpha;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsSwitcherBackdropBlur;
-(double)reopenClosedWindowsButtonScale;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)dockWindowLevel;
-(long long)preferredSnapshotOrientationForAppLayout:(id)arg1 ;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)switcherDimmingViewBlocksTouches;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(double)plusButtonAlpha;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(BOOL)wantsDockWindowLevelAssertion;
-(BOOL)wantsHomeScreenPointerInteractions;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(BOOL)isIndexSelectable:(unsigned long long)arg1 ;
-(long long)switcherBackdropBlurType;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(double)switcherBackdropBlurProgress;
-(long long)shadowStyleForAppLayout:(id)arg1 ;
-(id)initWithActiveAppLayout:(id)arg1 ;
-(unsigned long long)dockWindowLevelPriority;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldAllowContentViewTouchesForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(double)contentViewScale;
-(id)keyboardSuppressionMode;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
@end
