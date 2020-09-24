/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPMediaItem;
@class NSObject;

@interface VUIPostPlayUpsellManager : NSObject {

	NSObject*<TVPMediaItem> _deferredMediaItem;
	double _deferredElapsedTime;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> deferredMediaItem;              //@synthesize deferredMediaItem=_deferredMediaItem - In the implementation block
@property (assign,nonatomic) double deferredElapsedTime;                             //@synthesize deferredElapsedTime=_deferredElapsedTime - In the implementation block
+(id)sharedInstance;
-(void)_reset;
-(id)init;
-(void)handleRouterDataSourceIfNeeded:(id)arg1 ;
-(BOOL)_isFullScreenPlaybackUIShown;
-(void)_handleDeferredMediaItemUpsellIfNeeded;
-(void)_currentMediaItemWillChange:(id)arg1 ;
-(void)_handleUpsellForMediaItem:(id)arg1 elapsedTimeInterval:(double)arg2 ;
-(void)setDeferredMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setDeferredElapsedTime:(double)arg1 ;
-(NSObject*<TVPMediaItem>)deferredMediaItem;
-(double)deferredElapsedTime;
@end
