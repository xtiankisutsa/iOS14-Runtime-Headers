/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>
#import <libobjc.A.dylib/WFSelectMusicActionUserInterface.h>

@class NSString;

@interface WFSelectMusicActionUIKitUserInterface : WFActionUserInterface <MPMediaPickerControllerDelegate, WFSelectMusicActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithSelectMultiple:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishWithOutput:(id)arg1 error:(id)arg2 ;
@end
