/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject {

	BOOL _isCelsius;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL isCelsius;                     //@synthesize isCelsius=_isCelsius - In the implementation block
+(id)sharedCoordinator;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(BOOL)isCelsius;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)init;
-(void)_updateIsCelsiusNotifyingObservers:(BOOL)arg1 ;
-(void)_temperatureUnitDidChange;
-(void)setIsCelsius:(BOOL)arg1 ;
@end

