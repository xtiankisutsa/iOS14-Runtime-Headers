/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextEffectsWindow.h>
#import <UIKitCore/_UIContextCustomBinding.h>
#import <UIKitCore/_UIScreenBasedObject.h>

@class NSDictionary, UIScreen, FBSSceneLayer, FBSScene, CAContext, _UIContextBinder, NSString;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {

	NSDictionary* _perScreenOptions;
	UIScreen* _intendedScreen;
	BOOL _arePlaceholdersInitialised;
	FBSSceneLayer* _keyboardSceneLayer;
	FBSScene* _activeScene;
	BOOL _resetRequired;

}

@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@property (nonatomic,readonly) SCD_Struct_UI37 _bindingDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2 ;
-(BOOL)_isFullscreen;
-(BOOL)_matchingOptions:(id)arg1 ;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)shouldAttachBindable;
-(void)resetScene;
-(void)invalidate;
-(BOOL)_isAlwaysKeyboardWindow;
-(long long)_orientationInSceneSpace;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_isHostedInAnotherProcess;
-(void)dealloc;
-(void)attachBindable;
-(BOOL)_alwaysGetsContexts;
-(id)_layerForCoordinateSpaceConversion;
-(long long)_orientationForClassicPresentation;
-(void)endDisablingInterfaceAutorotation;
-(BOOL)_wantsSceneAssociation;
-(BOOL)shouldDetachBindable;
-(void)detachBindable;
-(BOOL)_canIgnoreInteractionEvents;
-(void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6 ;
-(void)_resetScene;
-(UIScreen *)_intendedScreen;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(double)_adjustedWindowLevelFromLevel:(double)arg1 ;
-(void)setWindowLevel:(double)arg1 ;
@end

