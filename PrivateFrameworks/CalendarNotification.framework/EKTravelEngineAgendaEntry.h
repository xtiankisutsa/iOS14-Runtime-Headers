/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CALNRouteHypothesizerProvider, CALNRouteHypothesizer;
@class NSObject, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, CalGeocoder, EKTravelEngineHypothesis, CLLocation, NSData, NSString;

@interface EKTravelEngineAgendaEntry : NSObject {

	BOOL _dismissed;
	BOOL _geocodedEventEncountered;
	BOOL _hypothesizerSentAtLeastOneHypothesis;
	/*^block*/id _updateBlock;
	/*^block*/id _entrySignificantlyChangedBlock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	EKTravelEngineOriginalEvent* _originalEventInternal;
	EKTravelEngineThrottle* _throttle;
	CalGeocoder* _geocoder;
	id<CALNRouteHypothesizerProvider> _hypothesizerProvider;
	id<CALNRouteHypothesizer> _hypothesizer;
	EKTravelEngineHypothesis* _latestHypothesis;
	CLLocation* _geoLocation;
	NSData* _mapKitHandle;
	long long _travelTimeThresholdExceededState;
	double _maximumTravelDurationEncountered;
	NSString* _agendaEntryIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                            //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) EKTravelEngineOriginalEvent * originalEventInternal;                   //@synthesize originalEventInternal=_originalEventInternal - In the implementation block
@property (nonatomic,retain) EKTravelEngineThrottle * throttle;                                     //@synthesize throttle=_throttle - In the implementation block
@property (nonatomic,retain) CalGeocoder * geocoder;                                                //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> hypothesizerProvider;              //@synthesize hypothesizerProvider=_hypothesizerProvider - In the implementation block
@property (nonatomic,retain) id<CALNRouteHypothesizer> hypothesizer;                                //@synthesize hypothesizer=_hypothesizer - In the implementation block
@property (nonatomic,retain) EKTravelEngineHypothesis * latestHypothesis;                           //@synthesize latestHypothesis=_latestHypothesis - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                                              //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * mapKitHandle;                                                 //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL geocodedEventEncountered;                                         //@synthesize geocodedEventEncountered=_geocodedEventEncountered - In the implementation block
@property (assign,nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis;                             //@synthesize hypothesizerSentAtLeastOneHypothesis=_hypothesizerSentAtLeastOneHypothesis - In the implementation block
@property (assign,nonatomic) long long travelTimeThresholdExceededState;                            //@synthesize travelTimeThresholdExceededState=_travelTimeThresholdExceededState - In the implementation block
@property (assign,nonatomic) double maximumTravelDurationEncountered;                               //@synthesize maximumTravelDurationEncountered=_maximumTravelDurationEncountered - In the implementation block
@property (nonatomic,retain) NSString * agendaEntryIdentifier;                                      //@synthesize agendaEntryIdentifier=_agendaEntryIdentifier - In the implementation block
@property (nonatomic,readonly) EKTravelEngineOriginalEvent * originalEvent; 
@property (nonatomic,copy) id updateBlock;                                                          //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id entrySignificantlyChangedBlock;                                       //@synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock - In the implementation block
@property (assign,nonatomic) BOOL dismissed;                                                        //@synthesize dismissed=_dismissed - In the implementation block
+(double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)receivedAlarmNamed:(id)arg1 ;
-(EKTravelEngineThrottle *)throttle;
-(EKTravelEngineOriginalEvent *)originalEvent;
-(EKTravelEngineHypothesis *)latestHypothesis;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelHypothesisRefreshRequest;
-(id<CALNRouteHypothesizer>)hypothesizer;
-(BOOL)hypothesizerSentAtLeastOneHypothesis;
-(id)_createSyntheticHypothesis;
-(void)setEntrySignificantlyChangedBlock:(id)arg1 ;
-(double)maximumTravelDurationEncountered;
-(void)sendFeedbackForPostingLeaveByNotification;
-(void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1 ;
-(void)removeAlarmWithName:(id)arg1 ;
-(void)_createHypothesizerForDestination:(id)arg1 ;
-(void)_clearEverything;
-(void)createAlarmWithName:(id)arg1 atDate:(id)arg2 ;
-(void)_uninstallEmissionHypothesisRefreshTimer;
-(void)_emissionHypothesisRefreshTimerFired;
-(void)sendFeedbackForPostingLeaveNowNotification;
-(id)requestHypothesisRefreshAlarmName;
-(id)emissionHypothesisRefreshAlarmName;
-(void)dealloc;
-(CalGeocoder *)geocoder;
-(void)setThrottle:(EKTravelEngineThrottle *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)cancelEmissionHypothesisRefresh;
-(id)_generateDestination;
-(void)reset;
-(void)updateWithOriginalEvent:(id)arg1 ;
-(void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1 ;
-(BOOL)dismissed;
-(void)setLatestHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)_requestHypothesisRefreshTimerFired;
-(void)setUpdateBlock:(id)arg1 ;
-(void)_trackTTLCandidateEvent:(id)arg1 ;
-(long long)travelTimeThresholdExceededState;
-(id)entrySignificantlyChangedBlock;
-(NSData *)mapKitHandle;
-(void)setGeocoder:(CalGeocoder *)arg1 ;
-(void)setOriginalEventInternal:(EKTravelEngineOriginalEvent *)arg1 ;
-(void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(BOOL)geocodedEventEncountered;
-(void)setTravelTimeThresholdExceededState:(long long)arg1 ;
-(void)setHypothesizer:(id<CALNRouteHypothesizer>)arg1 ;
-(id)updateBlock;
-(void)setHypothesizerSentAtLeastOneHypothesis:(BOOL)arg1 ;
-(id)initWithRouteHypothesizerProvider:(id)arg1 ;
-(void)_performAnalyticsPostProcessing;
-(void)_uninstallRequestHypothesisRefreshTimer;
-(NSString *)agendaEntryIdentifier;
-(void)_accountForGeocodedEventEncounter;
-(void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)arg1 ;
-(id<CALNRouteHypothesizerProvider>)hypothesizerProvider;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(void)setDismissed:(BOOL)arg1 ;
-(void)setAgendaEntryIdentifier:(NSString *)arg1 ;
-(void)_hypothesisRefreshTimerFired;
-(void)_updateWithHypothesis:(id)arg1 ;
-(void)_enhanceLocation;
-(void)requestHypothesisRefreshAtDate:(id)arg1 ;
-(void)_setUpRouteMonitoring;
-(CLLocation *)geoLocation;
-(EKTravelEngineOriginalEvent *)originalEventInternal;
-(void)setGeocodedEventEncountered:(BOOL)arg1 ;
-(void)setMaximumTravelDurationEncountered:(double)arg1 ;
@end
