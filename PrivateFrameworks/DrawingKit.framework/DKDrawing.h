/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _strokes;
	CGRect _canvasBounds;
	CGRect _strokesFrame;

}

@property (assign,nonatomic) CGRect canvasBounds;                  //@synthesize canvasBounds=_canvasBounds - In the implementation block
@property (assign,nonatomic) CGRect strokesFrame;                  //@synthesize strokesFrame=_strokesFrame - In the implementation block
@property (nonatomic,retain) NSArray * strokes;                    //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) long long totalPoints; 
+(BOOL)supportsSecureCoding;
+(id)copyOfDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
+(void)resizeDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)strokes;
-(void)reset;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStrokes:(NSArray *)arg1 ;
-(void)setStrokesFrame:(CGRect)arg1 ;
-(void)setCanvasBounds:(CGRect)arg1 ;
-(long long)totalPoints;
-(CGRect)canvasBounds;
-(CGRect)strokesFrame;
-(id)mutableStrokes;
-(void)addBrushStroke:(id)arg1 ;
-(id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1 ;
-(id)encodeBrushStrokesForArchiving;
-(void)removeLastBrushStroke;
@end
