/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLIntersiloUniverse.h>

@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;

}

@property (nonatomic,readonly) CLSilo * silo;                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;              //@synthesize vendor=_vendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSharedVendorUniverseWithSilo:(id)arg1 ;
+(id)newIsolatedUniverseWithOnlySilo:(id)arg1 ;
-(CLSilo *)silo;
-(id)initWithSilo:(id)arg1 vendor:(id)arg2 ;
-(CLServiceVendor *)vendor;
@end

