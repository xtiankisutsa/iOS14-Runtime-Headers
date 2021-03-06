/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFFavoriteLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate; 
@optional
-(id)migrationOperation;

@required
-(void)addLocation:(id)arg1;
-(void)setLocations:(id)arg1;
-(id)locations;
-(void)setDelegate:(id)arg1;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2;
-(void)removeLocation:(id)arg1;

@end

