/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {

	MFMailMessage* _message;
	unsigned long long _clientID;
	NSString* _bodyData;

}
-(id)to;
-(id)cc;
-(id)bcc;
-(id)clientID;
-(id)from;
-(id)body;
-(id)messageIDHeader;
-(id)date;
-(id)subject;
-(void)setClientID:(unsigned long long)arg1 ;
-(id)replyTo;
-(id)serverID;
-(int)bodyType;
-(id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2 ;
@end
