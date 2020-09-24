/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding> {

	DNDState* _previousState;
	DNDState* _state;
	unsigned long long _reason;

}

@property (nonatomic,copy,readonly) DNDState * previousState;              //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,copy,readonly) DNDState * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                  //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DNDState *)previousState;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(DNDState *)state;
-(id)description;
-(id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned long long)arg3 ;
@end
