/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInput/TextInput-Structs.h>
@class NSString;

@interface TIWordTokenizer : NSObject {

	NSString* m_string;
	SCD_Struct_TI18* m_inlineBuffer;
	NSRange m_tokenRange;
	NSRange m_searchRange;
	unsigned long long m_bufferOffset;

}
-(id)init;
-(NSRange)rangeOfCurrentToken;
-(NSRange)advanceToNextToken;
-(void)setString:(id)arg1 withSearchRange:(NSRange)arg2 ;
-(id)allTokensForString:(id)arg1 ;
@end

