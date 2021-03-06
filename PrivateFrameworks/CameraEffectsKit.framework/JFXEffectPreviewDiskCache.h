/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface JFXEffectPreviewDiskCache : NSObject {

	NSString* _cacheDirectoryPath;
	NSString* _directoryName;
	NSOperationQueue* _diskAccessQueue;

}

@property (nonatomic,readonly) NSString * directoryName;                        //@synthesize directoryName=_directoryName - In the implementation block
@property (nonatomic,readonly) NSString * cacheDirectoryPath;                   //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * diskAccessQueue;              //@synthesize diskAccessQueue=_diskAccessQueue - In the implementation block
+(id)cachedPathForEffect:(id)arg1 version:(id)arg2 directoryPath:(id)arg3 ;
+(id)createCacheAtDirectory:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 ;
-(void)dealloc;
-(NSString *)cacheDirectoryPath;
-(NSOperationQueue *)diskAccessQueue;
-(void)savePreviewForEffectID:(id)arg1 image:(id)arg2 version:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)previewForEffectID:(id)arg1 version:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)directoryName;
-(BOOL)hasPreviewForEffectID:(id)arg1 version:(id)arg2 ;
@end

