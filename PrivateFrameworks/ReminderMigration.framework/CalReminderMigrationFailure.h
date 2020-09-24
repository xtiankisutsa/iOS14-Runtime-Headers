/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface CalReminderMigrationFailure : NSObject {

	NSString* _failureDescription;
	unsigned long long _stage;
	NSError* _underlyingError;
	NSString* _relatedPath;

}

@property (nonatomic,copy,readonly) NSString * failureDescription;              //@synthesize failureDescription=_failureDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long stage;                        //@synthesize stage=_stage - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;                  //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,copy,readonly) NSString * relatedPath;                     //@synthesize relatedPath=_relatedPath - In the implementation block
+(id)_labelForStage:(unsigned long long)arg1 ;
-(unsigned long long)stage;
-(NSString *)failureDescription;
-(NSError *)underlyingError;
-(id)description;
-(NSString *)relatedPath;
-(id)initWithDescription:(id)arg1 stage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedPath:(id)arg4 ;
@end
