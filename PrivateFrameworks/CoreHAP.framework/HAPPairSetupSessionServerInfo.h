/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HAPPairSetupSessionServerInfo : NSObject {

	int _maxTries;
	NSString* _productData;

}

@property (nonatomic,retain) NSString * productData;              //@synthesize productData=_productData - In the implementation block
@property (assign,nonatomic) int maxTries;                        //@synthesize maxTries=_maxTries - In the implementation block
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(void)setMaxTries:(int)arg1 ;
-(id)initWithProductData:(id)arg1 maxTries:(int)arg2 ;
-(int)maxTries;
@end

