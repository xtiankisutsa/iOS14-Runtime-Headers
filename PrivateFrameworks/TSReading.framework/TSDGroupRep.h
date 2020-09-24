/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContainerRep.h>
#import <TSReading/TSDMagicMoveMatching.h>

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(CGColorRef)selectionHighlightColor;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)isDraggable;
-(Class)layerClass;
-(CGRect)clipRect;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)intersectsUnscaledRect:(CGRect)arg1 ;
-(id)allRepsContainedInGroup;
@end
