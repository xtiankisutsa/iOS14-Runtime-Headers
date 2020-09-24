/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber;

@interface PKCreditAccountRates : NSObject <NSSecureCoding, NSCopying> {

	NSDecimalNumber* _aprForPurchases;

}

@property (nonatomic,copy) NSDecimalNumber * aprForPurchases;              //@synthesize aprForPurchases=_aprForPurchases - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)formattedAPRForPurchasesPercentageString;
-(NSDecimalNumber *)aprForPurchases;
-(void)setAprForPurchases:(NSDecimalNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
