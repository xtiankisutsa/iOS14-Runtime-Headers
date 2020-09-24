/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/LPMediaPlayer.h>

@class LPVideo, LPVideoViewStyle, LPImage, LPImageViewStyle, LPVideoViewConfiguration, UIView, UIImageView, CATextLayer, LPFullScreenVideoController, NSString;

@interface LPVideoView : LPComponentView <CALayerDelegate, UIGestureRecognizerDelegate, LPMediaPlayer> {

	LPVideo* _video;
	LPVideoViewStyle* _style;
	LPImage* _posterFrame;
	LPImageViewStyle* _posterFrameStyle;
	LPVideoViewConfiguration* _configuration;
	UIView* _playButtonContainerView;
	UIView* _playButtonView;
	UIView* _muteButtonContainerView;
	UIImageView* _muteButtonView;
	UIImageView* _unmuteButtonView;
	UIView* _videoPlaceholderView;
	UIView* _visualEffectView;
	UIView* _pulsingLoadView;
	UIView* _containerView;
	UIView* _playbackView;
	CATextLayer* _debugIndicator;
	LPFullScreenVideoController* _fullScreenController;
	BOOL _playing;
	BOOL _hasBuilt;
	BOOL _wasPlayingOrWaitingToPlayWhenUnparented;
	BOOL _wasPlayingWhenSuspended;
	BOOL _showingPlayButton;
	BOOL _waitingForPlaybackDueToAutoPlay;
	BOOL _hasEverPlayed;
	unsigned long long _lastInteractionTimestamp;
	unsigned long long _playbackWatchdogTimerID;
	unsigned _loggingID;
	BOOL _usesSharedAudioSession;
	BOOL _waitingForPlayback;
	BOOL _fullScreen;
	double _volume;

}

@property (nonatomic,copy,readonly) LPVideoViewConfiguration * configuration; 
@property (nonatomic,readonly) BOOL shouldAutoPlay; 
@property (nonatomic,readonly) BOOL shouldShowMuteButton; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession;                                    //@synthesize usesSharedAudioSession=_usesSharedAudioSession - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,getter=isWaitingForPlayback,nonatomic) BOOL waitingForPlayback;              //@synthesize waitingForPlayback=_waitingForPlayback - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) BOOL hasEverPlayed;                                               //@synthesize hasEverPlayed=_hasEverPlayed - In the implementation block
@property (assign,nonatomic) double volume;                                                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) LPVideo * video;                                                //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UIView * playbackView;                                          //@synthesize playbackView=_playbackView - In the implementation block
@property (nonatomic,readonly) unsigned loggingID;                                             //@synthesize loggingID=_loggingID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) BOOL shouldUnmuteWhenUserAdjustsVolume; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestamp; 
@property (nonatomic,readonly) double unobscuredAreaFraction; 
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(LPVideo *)video;
-(double)volume;
-(BOOL)isParented;
-(void)dealloc;
-(void)tapRecognized:(id)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(unsigned)loggingID;
-(UIView *)playbackView;
-(void)recreateFullScreenViewControllerIfNeeded;
-(void)destroyFullScreenViewController;
-(void)didChangePlayingState:(BOOL)arg1 ;
-(void)resetToPlaceholderView;
-(BOOL)hasEverPlayed;
-(void)setHasEverPlayed:(BOOL)arg1 ;
-(void)setWaitingForPlayback:(BOOL)arg1 ;
-(void)_swapVideoPlaceholderForVideoForAutoPlay:(BOOL)arg1 ;
-(void)removePlaceholderViews;
-(void)didChangeMutedState:(BOOL)arg1 ;
-(void)layoutComponentView;
-(BOOL)shouldShowMuteButton;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(void)beginLoadingMediaForPreroll;
-(BOOL)usesSharedAudioSession;
-(id)createFullScreenVideoViewController;
-(id)createVideoPlayerView;
-(BOOL)usesCustomFullScreenImplementation;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isActive;
-(void)enterFullScreen;
-(id)init;
-(BOOL)isMuted;
-(void)didEncounterPossiblyTransientPlaybackError;
-(void)didEncounterPlaybackError;
-(void)fullScreenVideoDidDismiss;
-(void)enterCustomFullScreen;
-(BOOL)isWaitingForPlayback;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_buildVideoPlaceholderView;
-(void)updatePlayButtonVisibility;
-(void)showMuteButton;
-(id)_createPulsingLoadIndicator;
-(void)_startPlaybackWatchdogTimer;
-(id)_createPosterFrameView;
-(void)updateMuteButton;
-(void)showPlayButtonAnimated:(BOOL)arg1 ;
-(void)hidePlayButtonAnimated:(BOOL)arg1 ;
-(void)_muteButtonHighlightLongPressRecognized:(id)arg1 ;
-(void)_muteButtonTapRecognized:(id)arg1 ;
-(void)userInteractedWithVideoView;
-(void)hideMuteButton;
-(void)fadeInMuteButton;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;
-(unsigned long long)lastInteractionTimestamp;
-(double)unobscuredAreaFraction;
-(void)componentViewDidMoveToWindow;
-(BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1 ;
-(BOOL)isFullScreen;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(LPVideoViewConfiguration *)configuration;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)shouldAutoPlay;
@end
