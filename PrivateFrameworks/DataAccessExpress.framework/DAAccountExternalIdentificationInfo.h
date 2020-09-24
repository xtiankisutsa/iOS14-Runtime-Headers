/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface DAAccountExternalIdentificationInfo : NSObject {

	BOOL _useSSL;
	NSString* _host;
	long long _port;
	NSArray* _ownerAddresses;
	NSString* _preferredOwnerAddress;

}

@property (nonatomic,copy,readonly) NSString * host;                               //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long port;                                     //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                        //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ownerAddresses;                      //@synthesize ownerAddresses=_ownerAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredOwnerAddress;              //@synthesize preferredOwnerAddress=_preferredOwnerAddress - In the implementation block
-(long long)port;
-(BOOL)useSSL;
-(NSString *)host;
-(id)initWithHost:(id)arg1 port:(long long)arg2 useSSL:(BOOL)arg3 ownerAddresses:(id)arg4 preferredOwnerAddress:(id)arg5 ;
-(NSString *)preferredOwnerAddress;
-(NSArray *)ownerAddresses;
@end
