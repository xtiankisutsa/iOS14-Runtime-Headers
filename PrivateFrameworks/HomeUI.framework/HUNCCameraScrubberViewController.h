/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>
#import <libobjc.A.dylib/HUCameraPlayerScrubbing.h>

@class UIButton, HFCameraPlaybackEngine, HMCameraClip, CADisplayLink, NSDate, UIProgressView, UIView, NSString;

@interface HUNCCameraScrubberViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing> {

	BOOL _isScrubbing;
	BOOL _isVisible;
	UIButton* _playPauseButton;
	HFCameraPlaybackEngine* _playbackEngine;
	HMCameraClip* _currentClip;
	UIButton* _liveButton;
	CADisplayLink* _displayLink;
	NSDate* _clipStartDate;
	UIProgressView* _progressSlider;
	UIView* _panTrackingView;
	UIView* _liveBackgroundView;
	UIView* _playPauseBackgroundView;

}

@property (nonatomic,retain) UIButton * playPauseButton;                                  //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) HMCameraClip * currentClip;                                  //@synthesize currentClip=_currentClip - In the implementation block
@property (nonatomic,retain) UIButton * liveButton;                                       //@synthesize liveButton=_liveButton - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                              //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                            //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,retain) NSDate * clipStartDate;                                      //@synthesize clipStartDate=_clipStartDate - In the implementation block
@property (nonatomic,retain) UIProgressView * progressSlider;                             //@synthesize progressSlider=_progressSlider - In the implementation block
@property (nonatomic,retain) UIView * panTrackingView;                                    //@synthesize panTrackingView=_panTrackingView - In the implementation block
@property (nonatomic,retain) UIView * liveBackgroundView;                                 //@synthesize liveBackgroundView=_liveBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * playPauseBackgroundView;                            //@synthesize playPauseBackgroundView=_playPauseBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentScrubberResolution; 
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isScrubbing;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(UIButton *)playPauseButton;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)_updateSliderPosition;
-(void)didMoveToParentViewController:(id)arg1 ;
-(HMCameraClip *)currentClip;
-(NSDate *)clipStartDate;
-(void)setClipStartDate:(NSDate *)arg1 ;
-(UIButton *)liveButton;
-(void)setLiveButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CADisplayLink *)displayLink;
-(BOOL)isVisible;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(void)setPlayPauseButton:(UIButton *)arg1 ;
-(double)currentScrubberResolution;
-(id)initWithPlaybackEngine:(id)arg1 currentClip:(id)arg2 startDate:(id)arg3 ;
-(void)setCurrentClip:(HMCameraClip *)arg1 ;
-(void)_displayLinkUpdated:(id)arg1 ;
-(UIView *)playPauseBackgroundView;
-(UIView *)liveBackgroundView;
-(UIProgressView *)progressSlider;
-(UIView *)panTrackingView;
-(void)toggleLive:(id)arg1 ;
-(void)_updateScrubberDisplayLinkState;
-(void)_seekToCurrentScrubberValue;
-(void)showClipScrubber;
-(double)_playbackLength;
-(void)_loopPlaybackIfNeeded;
-(void)userDidPan:(id)arg1 ;
-(void)playPauseButtonPressed:(id)arg1 ;
-(void)setProgressSlider:(UIProgressView *)arg1 ;
-(void)setPanTrackingView:(UIView *)arg1 ;
-(void)setLiveBackgroundView:(UIView *)arg1 ;
-(void)setPlayPauseBackgroundView:(UIView *)arg1 ;
@end

