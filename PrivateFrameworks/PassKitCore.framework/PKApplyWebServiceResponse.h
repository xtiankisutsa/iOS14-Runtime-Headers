/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse {

	NSString* _conversationIdentifier;

}

@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)conversationIdentifier;
@end
