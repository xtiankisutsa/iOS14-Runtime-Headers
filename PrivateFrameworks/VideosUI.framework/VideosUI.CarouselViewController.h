/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>
#import <libobjc.A.dylib/VUISwiftImpressionsElement.h>

@interface VideosUI.CarouselViewController : UIViewController <TVCarouselViewDelegate, TVCarouselViewDataSource, VUISwiftImpressionsElement> {

	 viewImpressioner;
	 headerViewModel;
	 viewElement;
	 viewModel;
	 $__lazy_storage_$_visibleCellViewModels;
	 $__lazy_storage_$_carouselViewContainer;
	 items;
	 lastViewWidth;
	 centeredItemIndex;
	 impressionsTracker;
	 impressionsCalculator;
	 selfVisibilityMonitor;
	 $__lazy_storage_$_cellVisibilityMonitor;

}
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2 ;
-(id)getSnapshotImpressions;
-(id)getRecordedImpressions;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

