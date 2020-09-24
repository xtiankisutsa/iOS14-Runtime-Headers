/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTGroupPicker.h>

@protocol AVTGroupPickerDelegate;
@class NSArray, UICollectionView, CALayer, NSString;

@interface AVTGroupListCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTGroupPicker> {

	id<AVTGroupPickerDelegate> delegate;
	NSArray* _groupItems;
	long long selectedGroupIndex;
	UICollectionView* _collectionView;
	CALayer* _border;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CALayer * border;                                        //@synthesize border=_border - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groupItems;                                  //@synthesize groupItems=_groupItems - In the implementation block
@property (assign,nonatomic,__weak) id<AVTGroupPickerDelegate> delegate; 
@property (assign,nonatomic) long long selectedGroupIndex; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(double)borderWidth;
-(UICollectionView *)collectionView;
-(CALayer *)border;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)updateCollectionLayoutItemSize:(id)arg1 ;
-(void)setDelegate:(id<AVTGroupPickerDelegate>)arg1 ;
-(void)setupView;
-(id<AVTGroupPickerDelegate>)delegate;
-(void)setBorder:(CALayer *)arg1 ;
-(NSArray *)groupItems;
-(void)setSelectedGroupIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)selectedGroupIndex;
-(id)initWithGroupItems:(id)arg1 environment:(id)arg2 ;
-(void)setSelectedGroupIndex:(long long)arg1 ;
-(void)setupBorder;
@end
