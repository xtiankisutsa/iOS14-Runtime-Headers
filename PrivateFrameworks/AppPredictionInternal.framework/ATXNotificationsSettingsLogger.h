/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXNotificationsSettingsLogger : NSObject
+(id)getAppGenreFromBundleId:(id)arg1 ;
-(void)logNotificationSettingsWithActivity:(id)arg1 ;
-(id)convertToPBFormat:(id)arg1 setting:(id)arg2 ;
-(id)createPBSettingForBundleID:(id)arg1 settings:(id)arg2 ;
-(id)retrieveSettingsForBundleIDs:(id)arg1 ;
-(id)getAggregatedData:(id)arg1 totalApps:(int)arg2 ;
-(id)getAppUsageDataForBundleID:(id)arg1 ;
-(double)getSamplingRate;
-(id)retrieveLogWithActivity:(id)arg1 ;
-(id)wrapLog:(id)arg1 ;
@end
