/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol MessageItemViewModelBuilder <MessageItemFlagsViewModelBuilder>
@property (assign,getter=isBlockedSender,nonatomic) BOOL blockedSender; 
@property (assign,nonatomic) BOOL hasAttachments; 
@property (nonatomic,copy) NSDate * dateReceived; 
@required
-(NSDate *)dateReceived;
-(BOOL)hasAttachments;
-(void)setHasAttachments:(BOOL)arg1;
-(void)setDateReceived:(id)arg1;
-(BOOL)isBlockedSender;
-(void)setBlockedSender:(BOOL)arg1;

@end

