/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NGMPBP256Key : PBCodable <NSCopying> {

	NSData* _keyData;
	NSString* _keychainTag;
	int _keystore;

}

@property (nonatomic,readonly) BOOL hasKeychainTag; 
@property (nonatomic,retain) NSString * keychainTag;              //@synthesize keychainTag=_keychainTag - In the implementation block
@property (assign,nonatomic) int keystore;                        //@synthesize keystore=_keystore - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                    //@synthesize keyData=_keyData - In the implementation block
-(int)keystore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasKeychainTag;
-(NSString *)keychainTag;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)keyData;
-(void)setKeystore:(int)arg1 ;
-(void)setKeychainTag:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)keystoreAsString:(int)arg1 ;
-(void)setKeyData:(NSData *)arg1 ;
-(int)StringAsKeystore:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasKeyData;
-(id)dictionaryRepresentation;
@end

