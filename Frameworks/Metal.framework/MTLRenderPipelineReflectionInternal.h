/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, MTLArgument, NSDictionary, NSData;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT52 _flags;
	NSArray* _vertexBuiltInArguments;
	unsigned long long _postVertexDumpStride;
	NSArray* _postVertexDumpOutputs;
	NSArray* _inferredInputs;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSArray* _tileArguments;
	NSArray* _tileBuiltInArguments;
	MTLArgument* _imageBlockDataReturn;
	NSDictionary* _performanceStatistics;
	unsigned _traceBufferIndex;
	NSData* _vertexPluginReturnData;
	NSData* _fragmentPluginReturnData;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT52)arg5 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)imageBlockDataReturn;
-(id)initWithTileArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned)arg6 flags:(SCD_Struct_MT52)arg7 ;
-(id)constantSamplerUniqueIdentifiers;
-(id)fragmentArguments;
-(void)dealloc;
-(id)inferredInputs;
-(id)vertexPluginReturnData;
-(id)fragmentPluginReturnData;
-(unsigned)traceBufferIndex;
-(id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT52)arg4 ;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT52)arg6 ;
-(SCD_Struct_MT52)usageFlags;
-(id)postVertexDumpOutputs;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)postVertexDumpStride;
-(id)vertexBuiltInArguments;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)description;
-(id)performanceStatistics;
-(id)constantSamplerDescriptors;
-(id)vertexArguments;
-(id)tileArguments;
@end

