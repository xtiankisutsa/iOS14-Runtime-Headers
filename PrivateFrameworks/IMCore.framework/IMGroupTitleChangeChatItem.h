/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) IMHandle * sender;                  //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(IMHandle *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

