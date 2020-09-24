/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKDevice;

@interface CLKRenderingContext : NSObject {

	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device; 
+(id)sharedRenderingContext;
-(CLKDevice *)device;
-(id)_init;
-(void)setDevice:(CLKDevice *)arg1 ;
@end
