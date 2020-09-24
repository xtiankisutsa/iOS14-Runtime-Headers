/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject;

@interface AKCarrierBundleUtilities : NSObject {

	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _carrierUtilitiesQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id*)arg2 ;
@end
