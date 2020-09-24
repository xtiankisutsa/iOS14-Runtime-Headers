/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSMTIEMaskError : NSObject {

	double _observationInterval;
	double _mask;
	double _mtie;

}

@property (assign,nonatomic) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (assign,nonatomic) double mask;                             //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) double mtie;                             //@synthesize mtie=_mtie - In the implementation block
-(double)mask;
-(double)mtie;
-(void)setMask:(double)arg1 ;
-(id)description;
-(double)observationInterval;
-(void)setMtie:(double)arg1 ;
-(void)setObservationInterval:(double)arg1 ;
@end
