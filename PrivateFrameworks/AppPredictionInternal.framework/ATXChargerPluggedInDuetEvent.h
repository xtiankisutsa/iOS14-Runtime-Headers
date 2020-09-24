/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXDuetEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ATXChargerPluggedInDuetEvent : ATXDuetEvent <NSSecureCoding> {

	long long _chargerPluggedInState;
	NSNumber* _adapterType;

}

@property (nonatomic,readonly) long long chargerPluggedInState;              //@synthesize chargerPluggedInState=_chargerPluggedInState - In the implementation block
@property (nonatomic,readonly) NSNumber * adapterType;                       //@synthesize adapterType=_adapterType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)identifier;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)adapterType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithChargerPluggedInState:(long long)arg1 adapterType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(long long)chargerPluggedInState;
@end
