/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPBaseTracker.h>

@interface VCPCtrTracker : NSObject <VCPBaseTracker> {

	CGPoint* P;
	SCD_Struct_VC72* context;
	BOOL stable;
	BOOL lostTrack;
	float _confidence;

}

@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@property (assign) float confidence;               //@synthesize confidence=_confidence - In the implementation block
-(CGPoint*)box;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2 ;
-(void)trackInFrame:(CVBufferRef)arg1 ;
-(BOOL)lostTrackInd;
-(float)confidence;
-(void)dealloc;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1 ;
-(void)setLostTrackInd:(BOOL)arg1 ;
-(id)init;
-(void)setBox:(CGPoint*)arg1 ;
-(void)setConfidence:(float)arg1 ;
@end

