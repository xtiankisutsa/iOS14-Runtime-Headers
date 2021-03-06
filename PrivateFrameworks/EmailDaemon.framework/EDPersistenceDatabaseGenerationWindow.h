/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPersistenceDatabaseGenerationWindow : NSObject {

	long long _earliestGeneration;
	long long _latestGeneration;

}

@property (nonatomic,readonly) long long earliestGeneration;              //@synthesize earliestGeneration=_earliestGeneration - In the implementation block
@property (nonatomic,readonly) long long latestGeneration;                //@synthesize latestGeneration=_latestGeneration - In the implementation block
-(void)insertGeneration:(long long)arg1 ;
-(id)init;
-(long long)earliestGeneration;
-(long long)latestGeneration;
@end

