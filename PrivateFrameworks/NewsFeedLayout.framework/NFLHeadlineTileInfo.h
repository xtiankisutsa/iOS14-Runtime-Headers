/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@protocol FCHeadlineProviding;
@class NSString, NSArray;

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo> {

	BOOL _aggregated;
	NSString* _groupIdentifier;
	id<FCHeadlineProviding> _headline;
	NSString* _bookmarkableIdentifier;
	NSString* _namespacedIdentifier;

}

@property (nonatomic,copy) id<FCHeadlineProviding> headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy) NSString * namespacedIdentifier;                                   //@synthesize namespacedIdentifier=_namespacedIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bookmarkableIdentifier;                        //@synthesize bookmarkableIdentifier=_bookmarkableIdentifier - In the implementation block
@property (getter=isAggregated,nonatomic,readonly) BOOL aggregated;                           //@synthesize aggregated=_aggregated - In the implementation block
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithBookmarkableIdentifier:(id)arg1 groupIdentifier:(id)arg2 ;
-(NSString *)namespacedIdentifier;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupIdentifier;
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(unsigned long long)tileInfoType;
-(BOOL)isSelectable;
-(id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 aggregated:(BOOL)arg3 ;
-(NSString *)bookmarkableIdentifier;
-(BOOL)pageable;
-(id)init;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNamespacedIdentifier:(NSString *)arg1 ;
-(id<FCHeadlineProviding>)headline;
-(BOOL)isAggregated;
-(unsigned long long)bookmarkOffsetType;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(unsigned long long)hash;
-(NSArray *)underlyingFeedElements;
-(NSString *)description;
-(id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 ;
@end
