/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject {

	NSMutableArray* _posterFrameViewQueue;

}

@property (nonatomic,retain) NSMutableArray * posterFrameViewQueue;              //@synthesize posterFrameViewQueue=_posterFrameViewQueue - In the implementation block
+(id)dequeuePosterFrameViewForWidth:(double)arg1 ;
+(void)enqueuePosterFrameView:(id)arg1 ;
+(void)purgeCache;
+(id)sharedCache;
-(id)init;
-(NSMutableArray *)posterFrameViewQueue;
-(void)setPosterFrameViewQueue:(NSMutableArray *)arg1 ;
@end
