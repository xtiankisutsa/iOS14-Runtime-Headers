/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {

	int mHorizontalAlignment;
	int mVerticalAlignment;
	int mIndent;
	int mTextRotation;
	BOOL mTextWrapped;
	BOOL mHorizontalAlignOverridden;
	BOOL mVerticalAlignOverridden;
	BOOL mIndentOverridden;
	BOOL mTextWrappedOveridden;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alignmentInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)indent;
-(int)verticalAlignment;
-(void)setIndent:(int)arg1 ;
-(id)init;
-(void)setVerticalAlignment:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)horizontalAlignment;
-(unsigned long long)hash;
-(void)setHorizontalAlignment:(int)arg1 ;
-(NSString *)description;
-(BOOL)isVerticalAlignOverridden;
-(BOOL)isHorizontalAlignOverridden;
-(BOOL)isTextWrapped;
-(int)textRotation;
-(BOOL)isTextWrappedOverridden;
-(BOOL)isIndentOverridden;
-(void)setTextWrapped:(BOOL)arg1 ;
-(void)setTextRotation:(int)arg1 ;
-(BOOL)isEqualToAlignmentInfo:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
@end
