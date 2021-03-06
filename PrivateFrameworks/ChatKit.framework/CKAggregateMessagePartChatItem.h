/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy) NSArray * subparts;                     //@synthesize subparts=_subparts - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(NSArray *)subparts;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(NSString *)title;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(id)composition;
-(id)pasteboardItems;
-(id)loadTranscriptText;
-(void)setSubparts:(NSArray *)arg1 ;
@end

