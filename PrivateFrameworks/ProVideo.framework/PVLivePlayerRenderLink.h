/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject {

	SCD_Struct_PV22 _lastTime;
	unsigned _throttledFPS;
	HGSynchronizable* _lock;
	PVLivePlayer* _player;

}
-(void)dealloc;
-(void)teardown;
-(id)init;
-(void)rebuild;
-(unsigned)_throttledRenderLinkFPS_NoLock;
-(unsigned)throttledFPS;
-(BOOL)skipThrottledRenderLinkTime:(SCD_Struct_PV22)arg1 ;
-(void)registerWithPlayer:(id)arg1 ;
-(BOOL)setThrottledFPS:(unsigned)arg1 ;
-(unsigned)thermalPolicyThrottledFPS;
-(void)signalPlayer:(SCD_Struct_PV22)arg1 ;
-(void)signalDroppedRenderLink;
@end
