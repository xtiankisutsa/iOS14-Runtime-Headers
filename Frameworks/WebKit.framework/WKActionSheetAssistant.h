/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKActionSheetDelegate.h>
#import <libobjc.A.dylib/DDDetectionControllerInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class NSString;

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate> {

	WeakObjCPtr<id<WKActionSheetAssistantDelegate> > _delegate;
	RetainPtr<WKActionSheet>* _interactionSheet;
	RetainPtr<_WKActivatedElementInfo>* _elementInfo;
	Optional<WebKit::InteractionInformationAtPosition>* _positionInformation;
	RetainPtr<UIContextMenuInteraction>* _dataDetectorContextMenuInteraction;
	WeakObjCPtr<UIView> _view;
	BOOL _needsLinkIndicator;
	BOOL _isPresentingDDUserInterface;
	BOOL _hasPendingActionSheet;

}

@property (assign,nonatomic,__weak) id<WKActionSheetAssistantDelegate> delegate; 
@property (assign,nonatomic) BOOL needsLinkIndicator;                                         //@synthesize needsLinkIndicator=_needsLinkIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)hostViewForSheet;
-(CGRect)initialPresentationRectInHostViewForSheet;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)removeContextMenuInteraction;
-(CGRect)_presentationRectForSheetGivenPoint:(CGPoint)arg1 inHostView:(id)arg2 ;
-(RetainPtr<NSArray<_WKElementAction *> >*)defaultActionsForImageSheet:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2 ;
-(void)dealloc;
-(id)currentAvailableActionTitles;
-(void)ensureContextMenuInteraction;
-(BOOL)synchronouslyRetrievePositionInformation;
-(CGRect)presentationRectForElementUsingClosestIndicatedRect;
-(BOOL)isShowingSheet;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)showLinkSheet;
-(id)suggestedActionsForContextMenuWithPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(void)setDelegate:(id<WKActionSheetAssistantDelegate>)arg1 ;
-(id)_elementActionForDDAction:(id)arg1 ;
-(void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(BOOL)arg3 ;
-(id)initWithView:(id)arg1 ;
-(void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3 ;
-(void)setNeedsLinkIndicator:(BOOL)arg1 ;
-(id<WKActionSheetAssistantDelegate>)delegate;
-(void)updateSheetPosition;
-(BOOL)presentSheet;
-(RetainPtr<NSArray<_WKElementAction *> >*)defaultActionsForLinkSheet:(id)arg1 ;
-(long long)_presentationStyleForPositionInfo:(const InteractionInformationAtPosition*)arg1 elementInfo:(id)arg2 ;
-(id)superviewForSheet;
-(CGRect)presentationRectInHostViewForSheet;
-(BOOL)needsLinkIndicator;
-(CGRect)presentationRectForIndicatedElement;
-(void)cleanupSheet;
-(void)updatePositionInformation;
-(BOOL)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3 ;
-(void)handleElementActionWithType:(long long)arg1 element:(id)arg2 needsInteraction:(BOOL)arg3 ;
-(void)showImageSheet;
-(Optional<WebKit::InteractionInformationAtPosition>*)currentPositionInformation;
-(void)interactionDidStartWithPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(BOOL)hasContextMenuInteraction;
-(void)showDataDetectorsUIForPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
@end
