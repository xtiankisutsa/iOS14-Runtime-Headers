/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoStandaloneAccountIdentity : PBCodable <NSCopying> {

	NSString* _accountIdentifier;
	NSString* _displayName;
	unsigned _identityType;
	NSString* _refreshToken;
	NSString* _token;
	NSString* _username;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasRefreshToken; 
@property (nonatomic,retain) NSString * refreshToken;                   //@synthesize refreshToken=_refreshToken - In the implementation block
@property (assign,nonatomic) BOOL hasIdentityType; 
@property (assign,nonatomic) unsigned identityType;                     //@synthesize identityType=_identityType - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountIdentifier; 
@property (nonatomic,retain) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(BOOL)hasDisplayName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)identityType;
-(void)setIdentityType:(unsigned)arg1 ;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasAccountIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasUsername;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)username;
-(NSString *)token;
-(NSString *)accountIdentifier;
-(BOOL)hasToken;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUsername:(NSString *)arg1 ;
-(id)description;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRefreshToken:(NSString *)arg1 ;
-(BOOL)hasRefreshToken;
-(void)setHasIdentityType:(BOOL)arg1 ;
-(BOOL)hasIdentityType;
@end
