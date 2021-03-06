/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MBDeviceLockInfo : NSObject <NSSecureCoding> {

	NSString* _deviceUUID;
	NSString* _deviceName;
	NSString* _ownerDeviceUUID;
	NSString* _ownerDeviceName;
	NSDate* _creationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSString * deviceUUID;                   //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                   //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * ownerDeviceUUID;              //@synthesize ownerDeviceUUID=_ownerDeviceUUID - In the implementation block
@property (nonatomic,retain) NSString * ownerDeviceName;              //@synthesize ownerDeviceName=_ownerDeviceName - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceUUID;
-(NSString *)deviceName;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)ownerDeviceUUID;
-(NSString *)ownerDeviceName;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(void)setOwnerDeviceUUID:(NSString *)arg1 ;
-(void)setOwnerDeviceName:(NSString *)arg1 ;
@end

