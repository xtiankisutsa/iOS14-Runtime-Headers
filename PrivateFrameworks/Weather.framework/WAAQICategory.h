/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class WAAQIColor;

@interface WAAQICategory : NSObject {

	WAAQIColor* _color;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                   //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) WAAQIColor * color;              //@synthesize color=_color - In the implementation block
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 color:(id)arg2 ;
-(WAAQIColor *)color;
@end
