/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATXHomeScreenLogSystemEventDictionaries : NSObject {

	NSMutableDictionary* _systemLevelEventDictionary;
	NSMutableDictionary* _unlockSessionEngagementDictionary;

}
+(id)systemLevelDictionaryAccumulatorKeys;
+(id)systemLevelDictionaryAccumulatorSplitByLocationKeys;
+(id)_suggestionReasonToWidgetEventDictionariesProactiveWidgetRotationsKey:(int)arg1 ;
-(id)init;
-(void)sendToCoreAnalytics;
-(id)dryRunResult;
-(id)_createNewSystemLevelDictionary;
-(void)_populateDeprecatedKeys;
-(void)_addKey:(id)arg1 splitByLocation:(unsigned long long)arg2 toAggregateKey:(id)arg3 ;
-(void)populateUnlockSessionEngagementSummaryFromManager:(id)arg1 ;
-(void)updateSystemLevelSummaryTotalUnlockSessions:(unsigned long long)arg1 ;
-(void)updateSystemLevelUnlockSessionsWithWidgetDwell:(id)arg1 ;
-(void)updateSystemLevelSummaryForHomeScreenEvent:(id)arg1 ;
-(void)updateSystemLevelSummaryForHomeScreenPages:(id)arg1 startDate:(id)arg2 ;
-(void)updateSystemLevelSummaryWithRotationSession:(id)arg1 ;
-(void)updateSystemLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)arg1 ;
@end
