/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLBufferArgument : MTLArgumentInternal {

	unsigned _dataType : 15;
	unsigned _vertexDescriptorBuffer : 1;
	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(id)structType;
-(unsigned long long)bufferDataSize;
-(unsigned long long)bufferALUType;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(void)setVertexDescriptorBuffer:(BOOL)arg1 ;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataType;
-(void)dealloc;
-(unsigned long long)bufferPixelFormat;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(BOOL)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)setStructType:(id)arg1 ;
-(id)bufferIndirectArgumentType;
-(id)bufferPointerType;
-(id)bufferStructType;
-(BOOL)isVertexDescriptorBuffer;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
@end

