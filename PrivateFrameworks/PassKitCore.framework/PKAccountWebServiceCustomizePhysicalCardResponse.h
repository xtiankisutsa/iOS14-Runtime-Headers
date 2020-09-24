/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse {

	NSArray* _artworkOptions;
	NSArray* _nameOptions;
	NSArray* _priceOptions;

}

@property (nonatomic,copy,readonly) NSArray * artworkOptions;              //@synthesize artworkOptions=_artworkOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nameOptions;                 //@synthesize nameOptions=_nameOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceOptions;                //@synthesize priceOptions=_priceOptions - In the implementation block
-(NSArray *)artworkOptions;
-(NSArray *)priceOptions;
-(id)initWithData:(id)arg1 ;
-(NSArray *)nameOptions;
@end
