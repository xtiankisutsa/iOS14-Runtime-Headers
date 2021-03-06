/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface BBMaskedSet : NSObject {

	unsigned long long _maskBits;
	NSMutableArray* _maskObjectSets;

}

@property (nonatomic,retain) NSMutableArray * maskObjectSets;              //@synthesize maskObjectSets=_maskObjectSets - In the implementation block
-(void)removeObject:(id)arg1 ;
-(id)allObjects;
-(void)_executeUsingMask:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setMaskObjectSets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)maskObjectSets;
-(id)objectsForMask:(unsigned long long)arg1 ;
-(id)initWithMaskBits:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 withMask:(unsigned long long)arg2 ;
@end

