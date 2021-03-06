/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoEnableServiceModeRequest : PBRequest <NSCopying> {

	NSString* _uniqueID;
	BOOL _cancelOutstandingRequests;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL hasCancelOutstandingRequests; 
@property (assign,nonatomic) BOOL cancelOutstandingRequests;                 //@synthesize cancelOutstandingRequests=_cancelOutstandingRequests - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)cancelOutstandingRequests;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasUniqueID;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setCancelOutstandingRequests:(BOOL)arg1 ;
-(void)setHasCancelOutstandingRequests:(BOOL)arg1 ;
-(BOOL)hasCancelOutstandingRequests;
@end

