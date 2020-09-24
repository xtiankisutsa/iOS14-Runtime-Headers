/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BWInferenceProviderStorage, NSArray, NSDictionary;


@protocol BWInferenceStorage <NSObject>
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@property (nonatomic,retain) NSDictionary * inferenceResults; 
@required
-(void)clear;
-(id)pixelBufferPoolForRequirement:(id)arg1;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSDictionary *)inferenceResults;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(void)setInferenceResults:(id)arg1;

@end
