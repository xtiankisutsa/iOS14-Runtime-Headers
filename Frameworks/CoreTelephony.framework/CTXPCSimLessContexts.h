/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID;

@interface CTXPCSimLessContexts : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSUUID* _voicePreferred;

}

@property (nonatomic,retain) NSArray * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSUUID * voicePreferred;              //@synthesize voicePreferred=_voicePreferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)subscriptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(NSUUID *)voicePreferred;
-(void)setVoicePreferred:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)findForAccount:(id)arg1 ;
-(id)findForUuid:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
