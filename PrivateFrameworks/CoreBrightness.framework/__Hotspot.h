/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface __Hotspot : NSObject {

	int _orientation;
	int _triggered;
	float _center_X;
	float _center_Y;
	float _touchTriggerDelay;
	float _touchReleaseTime;

}

@property (assign) int orientation;                      //@synthesize orientation=_orientation - In the implementation block
@property (assign) int triggered;                        //@synthesize triggered=_triggered - In the implementation block
@property (assign) float center_X;                       //@synthesize center_X=_center_X - In the implementation block
@property (assign) float center_Y;                       //@synthesize center_Y=_center_Y - In the implementation block
@property (assign) float touchTriggerDelay;              //@synthesize touchTriggerDelay=_touchTriggerDelay - In the implementation block
@property (assign) float touchReleaseTime;               //@synthesize touchReleaseTime=_touchReleaseTime - In the implementation block
-(void)setTriggered:(int)arg1 ;
-(int)orientation;
-(int)triggered;
-(void)setOrientation:(int)arg1 ;
-(float)center_X;
-(void)setCenter_X:(float)arg1 ;
-(float)center_Y;
-(void)setCenter_Y:(float)arg1 ;
-(float)touchTriggerDelay;
-(void)setTouchTriggerDelay:(float)arg1 ;
-(float)touchReleaseTime;
-(void)setTouchReleaseTime:(float)arg1 ;
@end

