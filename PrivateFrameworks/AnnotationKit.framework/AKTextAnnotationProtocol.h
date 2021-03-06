/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextStorage, NSDictionary;


@protocol AKTextAnnotationProtocol <NSObject>
@property (retain) NSTextStorage * annotationText; 
@property (copy) NSDictionary * typingAttributes; 
@property (assign) BOOL isEditingText; 
@property (assign) BOOL textIsFixedWidth; 
@property (assign) BOOL textIsFixedHeight; 
@property (assign) BOOL textIsClipped; 
@property (assign) BOOL shouldUsePlaceholderText; 
@required
-(NSDictionary *)typingAttributes;
-(void)setTypingAttributes:(id)arg1;
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(id)arg1;
-(BOOL)isEditingText;
-(void)setIsEditingText:(BOOL)arg1;
-(BOOL)textIsFixedWidth;
-(void)setTextIsFixedWidth:(BOOL)arg1;
-(BOOL)textIsFixedHeight;
-(void)setTextIsFixedHeight:(BOOL)arg1;
-(BOOL)textIsClipped;
-(void)setTextIsClipped:(BOOL)arg1;
-(BOOL)shouldUsePlaceholderText;
-(void)setShouldUsePlaceholderText:(BOOL)arg1;

@end

