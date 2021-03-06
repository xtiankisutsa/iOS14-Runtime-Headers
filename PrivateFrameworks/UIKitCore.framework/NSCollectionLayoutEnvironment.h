/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCollectionLayoutEnvironment_Private.h>

@protocol _UIDataSourceSnapshot, NSCollectionLayoutContainer;
@class UITraitCollection, NSString;

@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private> {

	id<_UIDataSourceSnapshot> __dataSourceSnapshot;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) id<NSCollectionLayoutContainer> container;                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                        //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) id<_UIDataSourceSnapshot> _dataSourceSnapshot;              //@synthesize _dataSourceSnapshot=__dataSourceSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)set_dataSourceSnapshot:(id<_UIDataSourceSnapshot>)arg1 ;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3 ;
-(id<_UIDataSourceSnapshot>)_dataSourceSnapshot;
-(id<NSCollectionLayoutContainer>)container;
@end

