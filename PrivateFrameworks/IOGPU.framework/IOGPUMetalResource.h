/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLResource.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class NSString;

@interface IOGPUMetalResource : _MTLResource <MTLResourceSPI> {

	IOGPUMetalResource* _res;
	IOGPUMetalResource* next;
	IOGPUMetalResource* prev;
	unsigned long long uniqueId;

}

@property (readonly) _IOGPUResource* resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned long long resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long heapOffset; 
@property (assign) int responsibleProcess; 
@property (readonly) unsigned long long allocationID; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)makeAliasable;
-(unsigned long long)storageMode;
-(id<MTLDevice>)device;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)protectionOptions;
-(id<MTLHeap>)heap;
-(unsigned long long)hazardTrackingMode;
-(BOOL)isAliasable;
-(unsigned)resourceID;
-(unsigned long long)gpuAddress;
-(CFArrayRef)copyAnnotations;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOGPUNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(void)dealloc;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(BOOL)isComplete;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(_IOGPUResource*)resourceRef;
-(id)initStandinWithDevice:(id)arg1 ;
-(unsigned long long)resourceOptions;
-(unsigned long long)resourceSize;
-(unsigned long long)heapOffset;
-(void)waitUntilComplete;
-(void*)virtualAddress;
-(id)retainedLabel;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(unsigned long long)allocatedSize;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithResource:(id)arg1 ;
-(BOOL)isPurgeable;
@end
