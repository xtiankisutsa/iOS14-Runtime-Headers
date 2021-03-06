/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCache, TSUPointerKeyDictionary, NSObject, NSMutableDictionary, NSString;

@interface TSDTileStorage : NSObject <NSCacheDelegate> {

	NSCache* mCache;
	TSUPointerKeyDictionary* mReverseCacheKeys;
	NSObject*<OS_dispatch_semaphore> mReverseCacheKeysLock;
	NSObject*<OS_dispatch_queue> mCacheKeysQueue;
	NSMutableDictionary* mCacheKeysByBucket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentsInRect:(CGRect)arg1 contentsScale:(double)arg2 forTileAtLocation:(NSRange)arg3 inBucket:(id)arg4 ;
-(void)removeImagesInBucket:(id)arg1 ;
-(void)removeAllContents;
-(void)dealloc;
-(id)init;
-(void)storeContents:(id)arg1 inRect:(CGRect)arg2 contentsScale:(double)arg3 forTileAtLocation:(NSRange)arg4 inBucket:(id)arg5 ;
-(id)p_cacheKeyForImageInRect:(CGRect)arg1 contentsScale:(double)arg2 tileLocation:(NSRange)arg3 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end

