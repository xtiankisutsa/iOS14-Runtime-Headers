/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock;

@interface _ATXDuetHelper : NSObject {

	_PASLock* _deletionHandlerLock;
	_PASLock* _rootOfAppDataLock;

}
+(id)sharedInstance;
-(id)getTombstoneUUIDsBetweenStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 ;
-(void)_computeRootOfAppDataWithLockWitness:(id)arg1 ;
-(double)maxAgeOfPreviousDonationToConsider;
-(id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)getIntentDeletionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)enumerateActivityAndIntentEventsFromLastMonthWithLimit:(unsigned long long)arg1 nsuaLimit:(unsigned long long)arg2 ascending:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(unsigned long long)numActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(void)_handleTombstoneCreationWithNotification:(id)arg1 ;
-(void)dealloc;
-(void)deregisterDeletionHandlerWithToken:(unsigned long long)arg1 ;
-(unsigned long long)numIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(void)_enumerateIntentEventsForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(BOOL)arg6 limit:(unsigned long long)arg7 ascending:(BOOL)arg8 callback:(/*^block*/id)arg9 ;
-(unsigned long long)_countDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ascending:(BOOL)arg6 block:(/*^block*/id)arg7 ;
-(id)getAppLaunchesFromOneMonth;
-(id)getFirstAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)getRootOfAppSignalsFor:(id)arg1 contentKey:(id)arg2 ;
-(id)init;
-(void)_enumerateActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 ascending:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3 ;
-(id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)getLastAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(id)getActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ascending:(BOOL)arg3 ;
-(id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ascending:(BOOL)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 ;
-(id)getMicroLocationsFromLastMonth;
-(id)getFirstActivityEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 ;
-(unsigned long long)getDocFreqFor:(id)arg1 contentKey:(id)arg2 ;
-(id)getMostRecentINPlayMediaIntentEvent;
-(id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getMostRecentMicroLocation;
-(id)getEligibleActivityDeletionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getActivityAndIntentEventsFromLastMonth;
-(id)getRelevantShortcutsToBundleIdDictBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(BOOL)arg6 limit:(unsigned long long)arg7 ;
-(id)getIntentEventForUUID:(id)arg1 forSource:(long long)arg2 ;
-(id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getSortedActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 comparator:(/*^block*/id)arg4 ;
-(id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)getFirstSortedActivityOrIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 comparator:(/*^block*/id)arg4 ;
-(id)getIntentEventFromDKEvent:(id)arg1 source:(long long)arg2 bundleIdFilter:(id)arg3 allowMissingTitles:(BOOL)arg4 intentsToKeep:(id)arg5 ;
-(id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ;
-(unsigned long long)registerDeletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)getFirstIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 ;
-(void)enumerateActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 intentLimit:(unsigned long long)arg3 nsuaLimit:(unsigned long long)arg4 ascending:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(id)getActivityEventFromDKEvent:(id)arg1 bundleIdFilter:(id)arg2 ;
-(id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 allowMissingTitles:(BOOL)arg5 ;
@end
