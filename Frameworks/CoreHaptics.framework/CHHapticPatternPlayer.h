/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticPatternPlayer <NSObject>
@property (assign) BOOL isMuted; 
@required
-(void)setIsMuted:(BOOL)arg1;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2;
-(BOOL)cancelAndReturnError:(id*)arg1;
-(BOOL)isMuted;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;

@end
