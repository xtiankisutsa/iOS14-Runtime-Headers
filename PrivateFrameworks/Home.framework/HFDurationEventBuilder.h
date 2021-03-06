/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)initWithEvent:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)buildNewEventFromCurrentState;
-(id)description;
@end

