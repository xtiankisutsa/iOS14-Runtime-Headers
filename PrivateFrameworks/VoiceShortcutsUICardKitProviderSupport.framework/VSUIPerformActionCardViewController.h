/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUICardKitProviderSupport.framework/VoiceShortcutsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutsUICardKitProviderSupport/VSUIProgressCardViewController.h>
#import <libobjc.A.dylib/WFLWorkflowControllerDelegate.h>

@class WFLWorkflowController, NSMutableDictionary, NSString;

@interface VSUIPerformActionCardViewController : VSUIProgressCardViewController <WFLWorkflowControllerDelegate> {

	WFLWorkflowController* _currentWorkflowController;
	NSMutableDictionary* _commandWorkflowControllersDictionary;
	NSMutableDictionary* _commandCompletionBlocksDictionary;

}

@property (nonatomic,retain) WFLWorkflowController * currentWorkflowController;                       //@synthesize currentWorkflowController=_currentWorkflowController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandWorkflowControllersDictionary;              //@synthesize commandWorkflowControllersDictionary=_commandWorkflowControllersDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandCompletionBlocksDictionary;                 //@synthesize commandCompletionBlocksDictionary=_commandCompletionBlocksDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2 ;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2 ;
-(id)progress;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setUpHelpers;
-(NSMutableDictionary *)commandWorkflowControllersDictionary;
-(void)_handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_commandIdentifierForWorkflowController:(id)arg1 ;
-(NSMutableDictionary *)commandCompletionBlocksDictionary;
-(void)_releaseWorkflowController:(id)arg1 ;
-(WFLWorkflowController *)currentWorkflowController;
-(void)setCurrentWorkflowController:(WFLWorkflowController *)arg1 ;
-(void)setCommandWorkflowControllersDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommandCompletionBlocksDictionary:(NSMutableDictionary *)arg1 ;
@end
