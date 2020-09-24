/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NAFuture;


@protocol HMBMirrorProtocol <NSObject>
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID; 
@property (nonatomic,readonly) NAFuture * startUp; 
@required
-(id)flush;
-(id<HMBLocalZoneID>)zoneID;
-(NAFuture *)startUp;
-(id)destroy;
-(id)shutdown;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;
-(void)startUpWithLocalZone:(id)arg1;

@end
