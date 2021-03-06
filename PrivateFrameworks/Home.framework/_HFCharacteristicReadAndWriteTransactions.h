/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface _HFCharacteristicReadAndWriteTransactions : NSObject {

	NSMutableOrderedSet* _transactionsReading;
	NSMutableOrderedSet* _transactionsWriting;

}

@property (nonatomic,retain) NSMutableOrderedSet * transactionsReading;              //@synthesize transactionsReading=_transactionsReading - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * transactionsWriting;              //@synthesize transactionsWriting=_transactionsWriting - In the implementation block
-(id)init;
-(NSMutableOrderedSet *)transactionsReading;
-(void)setTransactionsReading:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)transactionsWriting;
-(void)setTransactionsWriting:(NSMutableOrderedSet *)arg1 ;
@end

