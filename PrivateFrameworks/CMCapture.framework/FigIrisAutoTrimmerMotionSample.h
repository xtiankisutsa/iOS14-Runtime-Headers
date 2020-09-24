/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject {

	int _vitalityObjectCount;
	double _timestamp;
	double _deltaPeriod;
	NSDictionary* _inferences;
	NSMutableDictionary* _intermediateCalculations;
	SCD_Struct_Fi123 _gravity;
	SCD_Struct_BW8 _originatingFrameTime;
	SCD_Struct_BW87 _attitude;
	SCD_Struct_BW87 _delta;
	SCD_Struct_BW87 _accel;

}

@property (nonatomic,readonly) SCD_Struct_BW8 originatingFrameTime;                         //@synthesize originatingFrameTime=_originatingFrameTime - In the implementation block
@property (nonatomic,readonly) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 cmTimestamp; 
@property (nonatomic,readonly) double deltaPeriod;                                          //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW87 attitude;                                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW87 delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW87 accel;                                       //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi123 gravity;                                    //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) NSDictionary * inferences;                                     //@synthesize inferences=_inferences - In the implementation block
@property (assign,nonatomic) int vitalityObjectCount;                                       //@synthesize vitalityObjectCount=_vitalityObjectCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * intermediateCalculations;              //@synthesize intermediateCalculations=_intermediateCalculations - In the implementation block
+(void)initialize;
-(NSDictionary *)inferences;
-(id)initWithAttitude:(const SCD_Struct_BW87*)arg1 gravity:(const SCD_Struct_Fi123*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW8)arg4 previousSample:(id)arg5 ;
-(void)prepareIntermediates:(long long)arg1 ;
-(void)setVitalityObjectCount:(int)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(SCD_Struct_BW87)accel;
-(int)vitalityObjectCount;
-(double)deltaPeriod;
-(SCD_Struct_BW8)cmTimestamp;
-(SCD_Struct_BW87)attitudeRelativeTo:(id)arg1 ;
-(void)setInferences:(NSDictionary *)arg1 ;
-(SCD_Struct_BW87)delta;
-(SCD_Struct_BW8)originatingFrameTime;
-(SCD_Struct_Fi123)gravity;
-(SCD_Struct_BW87)attitude;
-(NSMutableDictionary *)intermediateCalculations;
@end
