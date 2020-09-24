/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField {

	NSString* _rubyText;

}

@property (nonatomic,copy) NSString * rubyText;                  //@synthesize rubyText=_rubyText - In the implementation block
@property (nonatomic,readonly) NSString * baseText; 
@property (nonatomic,readonly) int baseTextScript; 
-(BOOL)allowsEditing;
-(int)elementKind;
-(id)text;
-(void)dealloc;
-(id)copyWithContext:(id)arg1 ;
-(unsigned)attributeArrayKind;
-(int)styleAttributeArrayKind;
-(NSString *)rubyText;
-(int)baseTextScript;
-(BOOL)canCopy:(NSRange)arg1 ;
-(void)setRubyText:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 rubyText:(id)arg2 ;
-(NSString *)baseText;
@end
