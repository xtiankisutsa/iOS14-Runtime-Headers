/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding> {

	BOOL _answered;
	BOOL _answeredOnThisDevice;
	unsigned long long _type;
	NSDate* _expirationDate;

}

@property (assign,nonatomic) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL answered;                           //@synthesize answered=_answered - In the implementation block
@property (assign,nonatomic) BOOL answeredOnThisDevice;               //@synthesize answeredOnThisDevice=_answeredOnThisDevice - In the implementation block
@property (nonatomic,readonly) NSArray * allowedAnswers; 
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)answered;
-(unsigned long long)type;
-(void)setAnswered:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)allowedAnswers;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(BOOL)answeredOnThisDevice;
-(void)setAnsweredOnThisDevice:(BOOL)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
