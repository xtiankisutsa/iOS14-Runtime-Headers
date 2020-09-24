/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTStickerSheetControllerDelegate.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTAvatarActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>
#import <libobjc.A.dylib/AVTAvatarPicker.h>

@protocol AVTPresenterDelegate, AVTAvatarPickerDelegate, AVTStickerPagingControllerDelegate, AVTStickerDisclosureValidationDelegate, OS_dispatch_queue, AVTTaskScheduler, AVTResourceCache;
@class NSObject, AVTAvatarRecordDataSource, AVTUIStickerGeneratorPool, AVTUIEnvironment, NSMutableDictionary, _AVTAvatarRecordImageProvider, AVTStickerConfigurationProvider, NSArray, UIView, UICollectionView, NSIndexPath, NSString;

@interface AVTStickerPagingController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTStickerSheetControllerDelegate, AVTNotifyingContainerViewDelegate, AVTAvatarActionsViewControllerDelegate, AVTObjectViewController, AVTAvatarPicker> {

	BOOL _allowsPeel;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTAvatarPickerDelegate> avatarPickerDelegate;
	id<AVTStickerPagingControllerDelegate> _delegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _encodingQueue;
	AVTAvatarRecordDataSource* _dataSource;
	AVTUIStickerGeneratorPool* _stickerGeneratorPool;
	AVTUIEnvironment* _environment;
	NSMutableDictionary* _pageForRecords;
	id<AVTTaskScheduler> _taskScheduler;
	id<AVTResourceCache> _cache;
	_AVTAvatarRecordImageProvider* _imageProvider;
	AVTStickerConfigurationProvider* _stickerConfigurationProvider;
	NSArray* _memojiStickerConfigurations;
	UIView* _view;
	UICollectionView* _collectionView;
	NSIndexPath* _pageIndexBeforeSizeChange;
	CGPoint _pageContentOffset;
	CGPoint _endDraggingTargetContentOffset;
	UIEdgeInsets _pageContentInsets;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> renderingQueue;                                                 //@synthesize renderingQueue=_renderingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> encodingQueue;                                                  //@synthesize encodingQueue=_encodingQueue - In the implementation block
@property (nonatomic,retain) AVTAvatarRecordDataSource * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) AVTUIStickerGeneratorPool * stickerGeneratorPool;                                            //@synthesize stickerGeneratorPool=_stickerGeneratorPool - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pageForRecords;                                                        //@synthesize pageForRecords=_pageForRecords - In the implementation block
@property (nonatomic,readonly) BOOL allowsPeel;                                                                           //@synthesize allowsPeel=_allowsPeel - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> taskScheduler;                                                        //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,readonly) id<AVTResourceCache> cache;                                                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * imageProvider;                                             //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTStickerConfigurationProvider * stickerConfigurationProvider;                            //@synthesize stickerConfigurationProvider=_stickerConfigurationProvider - In the implementation block
@property (nonatomic,retain) NSArray * memojiStickerConfigurations;                                                       //@synthesize memojiStickerConfigurations=_memojiStickerConfigurations - In the implementation block
@property (nonatomic,retain) UIView * view;                                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) CGPoint endDraggingTargetContentOffset;                                                      //@synthesize endDraggingTargetContentOffset=_endDraggingTargetContentOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * pageIndexBeforeSizeChange;                                                     //@synthesize pageIndexBeforeSizeChange=_pageIndexBeforeSizeChange - In the implementation block
@property (assign,nonatomic) UIEdgeInsets pageContentInsets;                                                              //@synthesize pageContentInsets=_pageContentInsets - In the implementation block
@property (assign,nonatomic) CGPoint pageContentOffset;                                                                   //@synthesize pageContentOffset=_pageContentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerPagingControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarPickerDelegate> avatarPickerDelegate; 
+(id)stickerCacheWithEnvironment:(id)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(id<AVTResourceCache>)cache;
-(UICollectionView *)collectionView;
-(void)setDataSource:(AVTAvatarRecordDataSource *)arg1 ;
-(void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2 ;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(void)stickerSheetController:(id)arg1 didScrollToContentOffset:(CGPoint)arg2 ;
-(void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout CGPoint*)arg3 ;
-(void)stickerSheetController:(id)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(BOOL)arg3 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setRenderingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)encodingQueue;
-(void)setEncodingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)centeredPageWithOffset:(CGPoint)arg1 ;
-(void)setPageForRecords:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pageForRecords;
-(NSArray *)memojiStickerConfigurations;
-(AVTStickerConfigurationProvider *)stickerConfigurationProvider;
-(void)setMemojiStickerConfigurations:(NSArray *)arg1 ;
-(AVTUIStickerGeneratorPool *)stickerGeneratorPool;
-(id)sheetControllerForRecord:(id)arg1 ;
-(id)reloadSheetControllerForRecord:(id)arg1 ;
-(id)sheetControllerAtIndex:(long long)arg1 ;
-(long long)pageIndexForAvatarRecordIdentifier:(id)arg1 ;
-(id<AVTAvatarPickerDelegate>)avatarPickerDelegate;
-(UIEdgeInsets)pageContentInsets;
-(CGPoint)pageContentOffset;
-(UIView *)view;
-(void)setEndDraggingTargetContentOffset:(CGPoint)arg1 ;
-(void)updateForEndingScrollWithTargetContentOffset:(CGPoint)arg1 ;
-(CGPoint)endDraggingTargetContentOffset;
-(void)scrollToAvatarWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPageIndexBeforeSizeChange:(NSIndexPath *)arg1 ;
-(NSIndexPath *)pageIndexBeforeSizeChange;
-(id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2 ;
-(void)avatarActionsViewControllerDidFinish:(id)arg1 ;
-(void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvatarPickerDelegate:(id<AVTAvatarPickerDelegate>)arg1 ;
-(void)setPageContentInsets:(UIEdgeInsets)arg1 ;
-(void)insertPageForRecord:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithRecordDataSource:(id)arg1 recordImageProvider:(id)arg2 stickerConfigurationProvider:(id)arg3 environment:(id)arg4 allowsPeel:(BOOL)arg5 ;
-(void)deletePageForRecord:(id)arg1 atIndex:(long long)arg2 ;
-(void)reloadPageForRecord:(id)arg1 atIndex:(long long)arg2 ;
-(void)setPageContentOffset:(CGPoint)arg1 ;
-(void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willEndDisplaying;
-(void)willStartDisplaying;
-(id)firstPageItemView;
-(void)setStickerGeneratorPool:(AVTUIStickerGeneratorPool *)arg1 ;
-(id)collectionViewForPPT;
-(long long)pageIndexForAvatarRecordIdentifierForPPT:(id)arg1 ;
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(_AVTAvatarRecordImageProvider *)imageProvider;
-(void)loadView;
-(void)setView:(UIView *)arg1 ;
-(void)reloadData;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(AVTAvatarRecordDataSource *)dataSource;
-(NSObject*<OS_dispatch_queue>)renderingQueue;
-(void)setDelegate:(id<AVTStickerPagingControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<AVTStickerPagingControllerDelegate>)delegate;
-(AVTUIEnvironment *)environment;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)scrollToPageAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsPeel;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(id<AVTTaskScheduler>)taskScheduler;
@end
