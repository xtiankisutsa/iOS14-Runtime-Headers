/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAccelerationStructureDescriptor.h>

@protocol MTLBuffer;
@class NSArray;

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {

	id<MTLBuffer> _instanceDescriptorBuffer;
	unsigned long long _instanceDescriptorBufferOffset;
	unsigned long long _instanceDescriptorStride;
	unsigned long long _instanceCount;
	NSArray* _instancedAccelerationStructures;

}

@property (nonatomic,retain) id<MTLBuffer> instanceDescriptorBuffer;                         //@synthesize instanceDescriptorBuffer=_instanceDescriptorBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long instanceDescriptorBufferOffset;              //@synthesize instanceDescriptorBufferOffset=_instanceDescriptorBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceDescriptorStride;                    //@synthesize instanceDescriptorStride=_instanceDescriptorStride - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                               //@synthesize instanceCount=_instanceCount - In the implementation block
@property (nonatomic,retain) NSArray * instancedAccelerationStructures;                      //@synthesize instancedAccelerationStructures=_instancedAccelerationStructures - In the implementation block
+(id)descriptor;
-(unsigned long long)instanceCount;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInstanceDescriptorBuffer:(id<MTLBuffer>)arg1 ;
-(void)setInstanceDescriptorBufferOffset:(unsigned long long)arg1 ;
-(void)setInstanceDescriptorStride:(unsigned long long)arg1 ;
-(void)setInstancedAccelerationStructures:(NSArray *)arg1 ;
-(unsigned long long)instanceDescriptorStride;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)instanceDescriptorBufferOffset;
-(id<MTLBuffer>)instanceDescriptorBuffer;
-(unsigned long long)hash;
-(NSArray *)instancedAccelerationStructures;
@end
