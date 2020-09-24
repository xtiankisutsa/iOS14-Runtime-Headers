/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ASDAccountStatusResponse : NSObject <NSSecureCoding> {

	BOOL _hasCachedFamilyInfo;
	NSNumber* _accountID;
	long long _accountStatus;

}

@property (retain) NSNumber * accountID;                  //@synthesize accountID=_accountID - In the implementation block
@property (assign) long long accountStatus;               //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign) BOOL hasCachedFamilyInfo;              //@synthesize hasCachedFamilyInfo=_hasCachedFamilyInfo - In the implementation block
@property (readonly) BOOL hasErrorStatus; 
+(BOOL)supportsSecureCoding;
-(id)initWithAccountID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccountID:(NSNumber *)arg1 ;
-(long long)accountStatus;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)accountID;
-(BOOL)hasErrorStatus;
-(BOOL)hasCachedFamilyInfo;
-(BOOL)hasResponseFlag:(long long)arg1 ;
-(void)setHasCachedFamilyInfo:(BOOL)arg1 ;
@end
