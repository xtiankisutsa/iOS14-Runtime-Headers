/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCaptureSystemPressureMonitor : NSObject {

	/*^block*/id _systemPressureLevelChangedHandler;
	NSObject*<OS_dispatch_queue> _systemPressureLevelChangedHandlerQueue;
	int _thermalPressureNotificationToken;
	int _systemPressureLevelByThermalPressureLevel[5];
	int _currentSystemPressureFromThermalPressure;
	int _peakPowerNotificationToken;
	int _systemPressureLevelByPeakPowerLevel[5];
	int _currentSystemPressureFromPeakPower;
	SCD_Struct_BW50 _systemPressureLevelByProjectorTemperature[5];
	int _currentSystemPressureFromProjectorTemperature;
	NSObject*<OS_dispatch_source> _pearlPollTimer;
	SCD_Struct_BW8 _pollingTimerStopTime;

}

@property (copy) id systemPressureLevelChangedHandler; 
@property (readonly) int systemPressureLevelFromPearlProjector; 
+(void)initialize;
-(void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(BOOL)arg1 ;
-(id)systemPressureLevelChangedHandler;
-(void)dealloc;
-(void)setSystemPressureLevelChangedHandler:(id)arg1 ;
-(id)init;
-(void)_updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)_registerForThermalNotifications;
-(void)_registerForPeakPowerNotifications;
-(void)startMonitoringPearlProjectorTemperatureUntilNominal;
-(void)_updateSystemPressureForPeakPowerAndCallChangeHandler:(BOOL)arg1 ;
-(void)_releasePearlProjectorPollingResources;
-(void)_callChangeHandler;
-(void)callSystemPressureLevelChangedHandler;
-(int)systemPressureLevelFromPearlProjector;
@end

