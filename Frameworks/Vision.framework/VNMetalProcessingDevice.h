/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNProcessingDevice.h>

@protocol MTLDevice;
@interface VNMetalProcessingDevice : VNProcessingDevice {

	id<MTLDevice> _metalDevice;

}
+(id)allDevices;
-(int)espressoEngine;
-(int)espressoStorageType;
-(id)metalDevice;
-(id)initWithMetalDevice:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)espressoDeviceID;
-(unsigned long long)hash;
-(id)description;
-(BOOL)targetsGPU;
@end
