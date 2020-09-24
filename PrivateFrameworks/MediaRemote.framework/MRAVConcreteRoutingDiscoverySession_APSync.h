/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVConcreteRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRAVClusterObserver.h>

@class NSArray, MRAVClusterController, NSString;

@interface MRAVConcreteRoutingDiscoverySession_APSync : MRAVConcreteRoutingDiscoverySession <MRAVClusterObserver> {

	NSArray* _availableEndpoints;
	id _virtualOutputDeviceNotificationToken;
	MRAVClusterController* _clusterController;
	BOOL _scheduledAvailableEndpointsReload;
	NSArray* _availableOutputDeviceGroups;

}

@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups;              //@synthesize availableOutputDeviceGroups=_availableOutputDeviceGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)externalDeviceCache;
+(/*^block*/id)externalDeviceForIdentifier;
+(void)setExternalDeviceForIdentifier:(/*^block*/id)arg1 ;
-(BOOL)inferAvailableOutputDevices;
-(void)_onQueue_reloadAvailableEndpoints;
-(void)clusterController:(id)arg1 clusterStatusDidChange:(unsigned long long)arg2 ;
-(void)_onQueue_reload;
-(void)dealloc;
-(void)_scheduleReload;
-(void)_externalDeviceConnectionStateDidChange:(id)arg1 ;
-(void)_logAVODGroupsChangedFrom:(id)arg1 toNewGroups:(id)arg2 ;
-(id)availableEndpoints;
-(void)_availableEndpointsDidChangeNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setAvailableEndpoints:(id)arg1 ;
-(void)_virtualDevicesDidChangeNotification:(id)arg1 ;
-(void)setAvailableOutputDeviceGroups:(NSArray *)arg1 ;
-(id)initWithConfiguration:(id)arg1 clusterController:(id)arg2 ;
-(void)_onQueue_populateExternalDevice:(id)arg1 ;
-(NSArray *)availableOutputDeviceGroups;
-(void)_onQueue_reloadAvailableOutputDevices;
-(void)_scheduleAvailableEndpointsReload;
-(id)deduplicateAVODGroups:(id)arg1 ;
@end
