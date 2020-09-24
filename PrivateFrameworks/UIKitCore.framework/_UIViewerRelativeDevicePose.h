/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

	_UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
	double _planarRotationAngle;
	UIOffset _viewerOffset;

}

@property (assign,nonatomic) UIOffset viewerOffset;                   //@synthesize viewerOffset=_viewerOffset - In the implementation block
@property (assign,nonatomic) double planarRotationAngle;              //@synthesize planarRotationAngle=_planarRotationAngle - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIOffset)_acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(void)_reset;
-(void)setPlanarRotationAngle:(double)arg1 ;
-(id)_acceleratedOutputRange;
-(double)planarRotationAngle;
-(UIOffset)viewerOffset;
-(void)_setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setViewerOffset:(UIOffset)arg1 ;
-(id)description;
@end
