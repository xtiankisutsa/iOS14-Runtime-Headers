/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject {

	long long _tag;
	NSArray* _items;
	NSString* _headerTitle;

}

@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
-(unsigned long long)numberOfRows;
-(NSArray *)items;
-(NSString *)headerTitle;
-(void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1 ;
-(long long)tag;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)hasSubitemForIndexPathRow:(unsigned long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long*)arg2 ;
-(id)initWithTag:(long long)arg1 headerTitle:(id)arg2 ;
-(id)description;
-(void)setTag:(long long)arg1 ;
@end

