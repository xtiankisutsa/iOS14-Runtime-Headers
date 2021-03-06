/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HFCameraImageObserver.h>

@class HMCameraClip, CALayer, UIView, HUClipScrubberTimeController, HURecordingEventCellFamiliarFacesView;

@interface HUCameraEventRecordingCell : UICollectionViewCell <HFCameraImageObserver> {

	BOOL _portraitMode;
	BOOL _hasFamiliarFaces;
	unsigned long long _displayMode;
	HMCameraClip* _recordingEvent;
	CALayer* _badgeLayer;
	UIView* _posterFramesContainerView;
	UIView* _dayBoundaryView;
	HUClipScrubberTimeController* _timeController;
	HURecordingEventCellFamiliarFacesView* _familiarFacesView;

}

@property (assign,nonatomic) unsigned long long displayMode;                                         //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * recordingEvent;                                   //@synthesize recordingEvent=_recordingEvent - In the implementation block
@property (nonatomic,retain) CALayer * badgeLayer;                                                   //@synthesize badgeLayer=_badgeLayer - In the implementation block
@property (nonatomic,retain) UIView * posterFramesContainerView;                                     //@synthesize posterFramesContainerView=_posterFramesContainerView - In the implementation block
@property (nonatomic,retain) UIView * dayBoundaryView;                                               //@synthesize dayBoundaryView=_dayBoundaryView - In the implementation block
@property (assign,nonatomic) BOOL portraitMode;                                                      //@synthesize portraitMode=_portraitMode - In the implementation block
@property (assign,nonatomic,__weak) HUClipScrubberTimeController * timeController;                   //@synthesize timeController=_timeController - In the implementation block
@property (nonatomic,retain) HURecordingEventCellFamiliarFacesView * familiarFacesView;              //@synthesize familiarFacesView=_familiarFacesView - In the implementation block
@property (assign,nonatomic) BOOL hasFamiliarFaces;                                                  //@synthesize hasFamiliarFaces=_hasFamiliarFaces - In the implementation block
+(id)backgroundColor;
-(id)accessibilityLabel;
-(unsigned long long)displayMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(UIView *)posterFramesContainerView;
-(UIView *)dayBoundaryView;
-(HURecordingEventCellFamiliarFacesView *)familiarFacesView;
-(HUClipScrubberTimeController *)timeController;
-(HMCameraClip *)recordingEvent;
-(id)_badgeImageForSignificantEventReasons:(id)arg1 ;
-(CALayer *)badgeLayer;
-(void)setRecordingEvent:(HMCameraClip *)arg1 ;
-(void)setPortraitMode:(BOOL)arg1 ;
-(void)setTimeController:(HUClipScrubberTimeController *)arg1 ;
-(void)addPosterFrameViews;
-(void)synchronizeLoadingIndicators;
-(void)addDayBoundaryIfNeeded;
-(void)drawEventMarkers;
-(void)updateFamiliarFaces;
-(unsigned long long)numberOfFramesNeeded;
-(void)_updateBadgeLayerWithImage:(id)arg1 inRect:(CGRect)arg2 ;
-(void)updateBadgeLayerWithEvents:(id)arg1 inRect:(CGRect)arg2 ;
-(void)displayReachabilityErrorUI;
-(void)setHasFamiliarFaces:(BOOL)arg1 ;
-(BOOL)hasFamiliarFaces;
-(void)preparePosterFrameViewsForReuse;
-(id)_accessibilityStringForSignificantEvents;
-(void)updateWithCameraClipEvent:(id)arg1 mode:(unsigned long long)arg2 portraitMode:(BOOL)arg3 timeController:(id)arg4 ;
-(void)showFamiliarFacesWithMaxWidth:(double)arg1 ;
-(void)hideFamiliarFaces;
-(void)setBadgeLayer:(CALayer *)arg1 ;
-(void)setPosterFramesContainerView:(UIView *)arg1 ;
-(void)setDayBoundaryView:(UIView *)arg1 ;
-(BOOL)portraitMode;
-(void)setFamiliarFacesView:(HURecordingEventCellFamiliarFacesView *)arg1 ;
@end

