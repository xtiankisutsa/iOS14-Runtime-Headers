/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _PSMessagesPinningSuggestion : NSObject <NSSecureCoding> {

	NSString* _chatGuid;

}

@property (nonatomic,readonly) NSString * chatGuid;              //@synthesize chatGuid=_chatGuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithChatGuid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)chatGuid;
-(unsigned long long)hash;
-(id)description;
@end

