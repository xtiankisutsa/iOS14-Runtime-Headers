/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, OS_dispatch_queue;
@class AFDictationOptions, AFDictationConnection, NSObject, NSString, NSMutableArray, NSMutableDictionary;

@interface UIDictationConnection : NSObject <AFDictationDelegate> {

	BOOL _receivedMultilingualResultsCommand;
	BOOL _offlineOnly;
	BOOL _lowConfidenceAboutLanguageDetection;
	unsigned _charBeforeInsertionPointOnDictationStart;
	unsigned _charAfterInsertionPointOnDictationStart;
	id<UIDictationConnectionDelegate> _delegate;
	id<UIDictationConnectionTokenFilterProtocol> _tokenFilter;
	AFDictationOptions* _dictationOptions;
	AFDictationConnection* _connection;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSString* _lastUsedPrimaryLanguage;
	NSString* _lastUsedDetectedLanguage;
	NSMutableArray* _lastUsedTopLanguages;
	NSMutableDictionary* _lastReceivedPartials;

}

@property (nonatomic,retain) AFDictationOptions * dictationOptions;                                        //@synthesize dictationOptions=_dictationOptions - In the implementation block
@property (nonatomic,retain) AFDictationConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL offlineOnly;                                                             //@synthesize offlineOnly=_offlineOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> analyticsQueue;                                  //@synthesize analyticsQueue=_analyticsQueue - In the implementation block
@property (nonatomic,copy) NSString * lastUsedPrimaryLanguage;                                             //@synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage - In the implementation block
@property (nonatomic,copy) NSString * lastUsedDetectedLanguage;                                            //@synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastUsedTopLanguages;                                        //@synthesize lastUsedTopLanguages=_lastUsedTopLanguages - In the implementation block
@property (assign,nonatomic) BOOL lowConfidenceAboutLanguageDetection;                                     //@synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection - In the implementation block
@property (assign,nonatomic) unsigned charBeforeInsertionPointOnDictationStart;                            //@synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart - In the implementation block
@property (assign,nonatomic) unsigned charAfterInsertionPointOnDictationStart;                             //@synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastReceivedPartials;                                   //@synthesize lastReceivedPartials=_lastReceivedPartials - In the implementation block
@property (assign,nonatomic,__weak) id<UIDictationConnectionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIDictationConnectionTokenFilterProtocol> tokenFilter;              //@synthesize tokenFilter=_tokenFilter - In the implementation block
@property (assign,nonatomic) BOOL receivedMultilingualResultsCommand;                                      //@synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)analytics;
+(id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(/*^block*/id)arg3 ;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(void)_updateFromGlobalOptions:(id)arg1 ;
+(void)cacheSupportedDictationLanguages;
+(BOOL)dictationRestricted;
+(BOOL)isDictationAvailable;
+(void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4 ;
-(BOOL)receivedMultilingualResultsCommand;
-(id)_createConnectionOptions;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(NSString *)lastUsedDetectedLanguage;
-(BOOL)lowConfidenceAboutLanguageDetection;
-(void)beginAvailabilityMonitoring;
-(void)setAnalyticsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5 ;
-(AFDictationConnection *)connection;
-(void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(BOOL)arg4 ;
-(void)setTokenFilter:(id<UIDictationConnectionTokenFilterProtocol>)arg1 ;
-(void)setLowConfidenceAboutLanguageDetection:(BOOL)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2 ;
-(void)setLastUsedTopLanguages:(NSMutableArray *)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(unsigned)charAfterInsertionPointOnDictationStart;
-(void)setDictationOptions:(AFDictationOptions *)arg1 ;
-(id)_initializeWithOptions:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2 ;
-(void)setLastUsedDetectedLanguage:(NSString *)arg1 ;
-(void)start;
-(void)_startWithOptions:(id)arg1 ;
-(id<UIDictationConnectionTokenFilterProtocol>)tokenFilter;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2 ;
-(void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2 ;
-(long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<UIDictationConnectionDelegate>)arg1 ;
-(void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 ;
-(void)setReceivedMultilingualResultsCommand:(BOOL)arg1 ;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)setCharBeforeInsertionPointOnDictationStart:(unsigned)arg1 ;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(NSMutableArray *)lastUsedTopLanguages;
-(void)cancelSpeech;
-(void)setLastReceivedPartials:(NSMutableDictionary *)arg1 ;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 ;
-(void)setLastUsedPrimaryLanguage:(NSString *)arg1 ;
-(void)setOfflineOnly:(BOOL)arg1 ;
-(id)languageDetectionUserContext;
-(id<UIDictationConnectionDelegate>)delegate;
-(void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2 ;
-(id)_speechOptions:(id)arg1 ;
-(BOOL)offlineOnly;
-(void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 ;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(id)_dictationOptions:(id)arg1 ;
-(NSString *)lastUsedPrimaryLanguage;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)setCharAfterInsertionPointOnDictationStart:(unsigned)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)preheat;
-(void)cancelAvailabilityMonitoring;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)lastReceivedPartials;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(AFDictationOptions *)dictationOptions;
-(void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2 ;
-(void)endSession;
-(void)restartDictation;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(float)averagePower;
-(void)setConnection:(AFDictationConnection *)arg1 ;
-(unsigned)charBeforeInsertionPointOnDictationStart;
@end

