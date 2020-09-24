/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandEncoder.h>

@class NSString, MTLToolsCommandBuffer;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {

	MTLToolsCommandBuffer* _commandBuffer;

}

@property (nonatomic,readonly) MTLToolsCommandBuffer * commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(MTLToolsCommandBuffer *)commandBuffer;
-(unsigned long long)globalTraceObjectID;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)endEncoding;
-(void)addRetainedObject:(id)arg1 ;
@end
