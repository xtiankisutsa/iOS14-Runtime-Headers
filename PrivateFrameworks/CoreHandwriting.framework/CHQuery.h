/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHRecognitionSessionObserver.h>

@protocol OS_dispatch_queue, CHQueryDelegate, CHStrokeProviderVersion;
@class NSObject, CHRecognitionSessionResult, CHRecognitionSession, NSString;

@interface CHQuery : NSObject <CHRecognitionSessionObserver> {

	NSObject*<OS_dispatch_queue> _processingQueue;
	CHRecognitionSessionResult* _currentProcessingSessionResult;
	double _lastProcessedTime;
	BOOL __queryActive;
	id<CHQueryDelegate> _delegate;
	CHRecognitionSession* _recognitionSession;
	id<CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;
	double _preferredUpdatesInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> processingQueue; 
@property (nonatomic,retain,readonly) NSString * debugName; 
@property (assign,nonatomic) BOOL _queryActive;                                                  //@synthesize _queryActive=__queryActive - In the implementation block
@property (copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;                 //@synthesize lastProcessedStrokeProviderVersion=_lastProcessedStrokeProviderVersion - In the implementation block
@property (assign,nonatomic) id<CHQueryDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;                 //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) double preferredUpdatesInterval;                                    //@synthesize preferredUpdatesInterval=_preferredUpdatesInterval - In the implementation block
-(NSString *)debugName;
-(void)pause;
-(void)dealloc;
-(void)start;
-(id)init;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setDelegate:(id<CHQueryDelegate>)arg1 ;
-(id<CHQueryDelegate>)delegate;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(void)waitForPendingUpdates;
-(void)setPreferredUpdatesInterval:(double)arg1 ;
-(id<CHStrokeProviderVersion>)lastProcessedStrokeProviderVersion;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1 ;
-(double)preferredRecognitionResultUpdatesInterval;
-(void)q_updateQueryResult;
-(id)q_sessionResult;
-(id)strokeIdentifiersForData:(id)arg1 withStrokeProvider:(id)arg2 ;
-(id)encodedStrokeIdentifiers:(id)arg1 withStrokeProvider:(id)arg2 ;
-(void)q_queryResultDidChange;
-(void)q_setNeedsQueryResultUpdating;
-(BOOL)_queryActive;
-(void)set_queryActive:(BOOL)arg1 ;
-(void)_updateForRecognitionSessionResultChangeIfNeeded;
-(double)preferredUpdatesInterval;
-(void)setLastProcessedStrokeProviderVersion:(id<CHStrokeProviderVersion>)arg1 ;
@end

