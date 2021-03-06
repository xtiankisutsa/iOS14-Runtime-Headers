/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBicubicScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;
	NSNumber* inputB;
	NSNumber* inputC;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
@property (nonatomic,retain) NSNumber * inputB; 
@property (nonatomic,retain) NSNumber * inputC; 
+(id)customAttributes;
-(NSNumber *)inputB;
-(NSNumber *)inputC;
-(void)setInputB:(NSNumber *)arg1 ;
-(void)setInputC:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAspectRatio;
-(CIImage *)inputImage;
-(BOOL)_isIdentity;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
-(vec2)_scale;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
@end

