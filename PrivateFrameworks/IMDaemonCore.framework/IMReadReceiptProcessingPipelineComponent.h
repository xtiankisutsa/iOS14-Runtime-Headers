/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageStore, IMDChatRegistry, IMDMessageSuppressionController, IMDRecentsController, IDSService;

@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDMessageStore* _messageStore;
	IMDChatRegistry* _chatRegistry;
	IMDMessageSuppressionController* _messageSuppressionController;
	IMDRecentsController* _recents;
	IDSService* _service;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)_markMessagesUpToGUID:(id)arg1 forChat:(id)arg2 isFromMe:(BOOL)arg3 date:(id)arg4 ;
-(id)initWithMessageStore:(id)arg1 chatRegistry:(id)arg2 messageSuppressionController:(id)arg3 recents:(id)arg4 IDSService:(id)arg5 ;
@end
