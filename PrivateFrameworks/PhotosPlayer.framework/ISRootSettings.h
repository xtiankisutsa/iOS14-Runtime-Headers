/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@class ISPlayerSettings, ISVitalitySettings, ISPerformanceDiagnosticsSettings;

@interface ISRootSettings : ISSettings {

	ISPlayerSettings* _playerSettings;
	ISVitalitySettings* _vitalitySettings;
	ISPerformanceDiagnosticsSettings* _performanceDiagnosticsSettings;

}

@property (nonatomic,retain) ISPlayerSettings * playerSettings;                                              //@synthesize playerSettings=_playerSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySettings * vitalitySettings;                                          //@synthesize vitalitySettings=_vitalitySettings - In the implementation block
@property (nonatomic,retain) ISPerformanceDiagnosticsSettings * performanceDiagnosticsSettings;              //@synthesize performanceDiagnosticsSettings=_performanceDiagnosticsSettings - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)_defaultsKey;
-(void)setDefaultValues;
-(ISPerformanceDiagnosticsSettings *)performanceDiagnosticsSettings;
-(void)save;
-(void)setPerformanceDiagnosticsSettings:(ISPerformanceDiagnosticsSettings *)arg1 ;
-(ISPlayerSettings *)playerSettings;
-(void)setPlayerSettings:(ISPlayerSettings *)arg1 ;
-(void)setVitalitySettings:(ISVitalitySettings *)arg1 ;
-(ISVitalitySettings *)vitalitySettings;
@end

