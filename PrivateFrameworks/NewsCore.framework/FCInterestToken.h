/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCInterestToken : NSObject {

	/*^block*/id _removeInterestBlock;

}

@property (nonatomic,copy) id removeInterestBlock;              //@synthesize removeInterestBlock=_removeInterestBlock - In the implementation block
+(id)interestTokenWithRemoveInterestBlock:(/*^block*/id)arg1 ;
+(id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
-(id)removeInterestBlock;
-(id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setRemoveInterestBlock:(id)arg1 ;
@end

