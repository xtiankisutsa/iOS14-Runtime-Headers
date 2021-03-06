/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableHealthObject, NSString;

@interface HDCodableSample : PBCodable <HDDecoding, NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableHealthObject* _object;
	SCD_Struct_HD12 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) HDCodableHealthObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) long long dataType;                          //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                              //@synthesize endDate=_endDate - In the implementation block
-(long long)dataType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(HDCodableHealthObject *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setDataType:(long long)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(double)endDate;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasObject;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)startDate;
-(BOOL)hasDataType;
-(unsigned long long)hash;
-(void)setHasDataType:(BOOL)arg1 ;
-(HDCodableHealthObject *)object;
-(NSString *)description;
-(void)setEndDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)applyToObject:(id)arg1 ;
@end

