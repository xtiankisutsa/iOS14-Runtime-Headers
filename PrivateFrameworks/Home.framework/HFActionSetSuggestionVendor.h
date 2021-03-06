/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFActionSetSuggestionFilter, HMActionSet, HMHome, NSArray;

@interface HFActionSetSuggestionVendor : NSObject {

	HFActionSetSuggestionFilter* _filter;
	HMActionSet* _actionSet;
	HMHome* _home;
	NSArray* _services;

}

@property (nonatomic,readonly) NSArray * services;                                //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HFActionSetSuggestionFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMActionSet * actionSet;                           //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                     //@synthesize home=_home - In the implementation block
+(id)supportedBuiltInActionSetTypes;
-(id)build;
-(HFActionSetSuggestionFilter *)filter;
-(NSArray *)services;
-(id)initWithHome:(id)arg1 actionSet:(id)arg2 filter:(id)arg3 ;
-(id)buildWithOutDependentServiceTypes:(out id*)arg1 ;
-(id)initWithHome:(id)arg1 actionSet:(id)arg2 ;
-(HMActionSet *)actionSet;
-(id)init;
-(id)_actionBuildersForCustomActionSet;
-(id)_actionBuildersForBuiltInActionSetWithType:(id)arg1 outDependentServiceTypes:(out id*)arg2 ;
-(id)_actionBuildersToSetLightbulbBrightness:(double)arg1 ;
-(id)_actionBuildersToSetPowerState:(BOOL)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1 ;
-(id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)arg1 ;
-(id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2 ;
-(id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1 ;
-(id)_controlItemValueSourceForService:(id)arg1 ;
-(id)_actionBuildersForCustomActionSetWithService:(id)arg1 ;
-(id)_deriveActionForPrimaryCharacteristic:(id)arg1 ;
-(id)_deriveActionForSecondaryCharacteristic:(id)arg1 candidateServices:(id)arg2 ;
-(id)_deriveActionForPrimaryCharacteristic:(id)arg1 candidateServices:(id)arg2 targetThreshold:(double)arg3 ;
-(HMHome *)home;
@end

