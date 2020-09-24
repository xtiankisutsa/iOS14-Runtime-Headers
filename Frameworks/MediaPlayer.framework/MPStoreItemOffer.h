/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * formattedPrice; 
@property (nonatomic,copy,readonly) NSString * offerType; 
@property (nonatomic,copy,readonly) NSNumber * price; 
@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)offerType;
-(NSArray *)assets;
-(NSNumber *)price;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)actionTextForType:(id)arg1 ;
-(NSString *)formattedPrice;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)buyParameters;
-(unsigned long long)hash;
@end
