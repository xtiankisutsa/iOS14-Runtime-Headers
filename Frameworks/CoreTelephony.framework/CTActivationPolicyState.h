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

@interface CTActivationPolicyState : NSObject <NSCopying, NSSecureCoding> {

	long long _carrierLock;

}

@property (assign,nonatomic) long long carrierLock;              //@synthesize carrierLock=_carrierLock - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)carrierLock;
-(void)setCarrierLock:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

