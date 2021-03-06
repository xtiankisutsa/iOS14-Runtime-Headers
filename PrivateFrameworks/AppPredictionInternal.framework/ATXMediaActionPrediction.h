/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXMediaActionPrediction : NSObject
+(id)getAllUpcomingMedia;
+(id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(BOOL)arg2 ;
+(id)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 ;
+(id)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)findTopRankedINPlayMediaIntentFromArray:(id)arg1 ;
+(id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const ATXPredictionItem*)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6 ;
@end

