/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {

	float _preferredRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredRate:(float)arg1 ;
-(NSArray *)supportedPlaybackRates;
-(id)newCommandEventWithPlaybackRate:(float)arg1 ;
-(float)preferredRate;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
@end

