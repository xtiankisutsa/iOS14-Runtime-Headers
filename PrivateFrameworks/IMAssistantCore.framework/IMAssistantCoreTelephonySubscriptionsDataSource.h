/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMAssistantCoreTelephonySubscriptionsDataSource <NSObject>
@property (nonatomic,readonly) BOOL deviceHasMultipleSubscriptions; 
@required
-(BOOL)deviceHasMultipleSubscriptions;
-(id)bestSenderIdentityForChatWithHandleIDs:(id)arg1;
-(id)handleIDForSenderIdentity:(id)arg1;
-(id)simIDForSenderIdentity:(id)arg1;

@end
