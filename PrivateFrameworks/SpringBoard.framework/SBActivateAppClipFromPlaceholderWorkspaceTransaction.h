/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAppToAppWorkspaceTransaction.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@class SBRotateScenesWorkspaceTransaction, NSString;

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver> {

	SBRotateScenesWorkspaceTransaction* _rotateScenesTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(unsigned long long)_concurrentOverlayDismissalOptions;
-(void)_begin;
-(void)transactionDidComplete:(id)arg1 ;
@end

