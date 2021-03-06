/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _nrDeviceIdentifier;

}

@property (nonatomic,copy) NSUUID * nrDeviceIdentifier;              //@synthesize nrDeviceIdentifier=_nrDeviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newDeviceIdentifierWithBluetoothUUID:(id)arg1 ;
+(id)copyBestTestingDeviceIdentifier;
-(id)initWithUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)nrDeviceIdentifier;
-(void)setNrDeviceIdentifier:(NSUUID *)arg1 ;
@end

