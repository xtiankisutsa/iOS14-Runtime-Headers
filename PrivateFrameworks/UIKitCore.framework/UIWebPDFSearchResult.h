/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned long long pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(NSString *)string;
-(NSArray *)rects;
-(void)setString:(NSString *)arg1 ;
-(NSArray *)rotationAngles;
-(NSArray *)strings;
-(void)setRotationAngles:(NSArray *)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)boundingBox;
-(void)setRects:(NSArray *)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
-(void)setStrings:(NSArray *)arg1 ;
@end

