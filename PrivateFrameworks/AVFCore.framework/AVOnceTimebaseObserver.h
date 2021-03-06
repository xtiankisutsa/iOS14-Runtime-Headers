/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimebaseObserver.h>

@interface AVOnceTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV6 _fireTime;
	/*^block*/id _block;
	BOOL _didFire;

}

@property (nonatomic,readonly) BOOL didFire; 
-(void)invalidate;
-(BOOL)didFire;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 fireTime:(SCD_Struct_AV6)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)_effectiveRateChanged;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlock;
-(void)_resetNextFireTime;
@end

