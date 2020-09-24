/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) long long maxIconListCount; 
@property (assign,nonatomic) BOOL didShowIconReorderAlert; 
@property (nonatomic,readonly) BOOL shouldDisableLiveIcons; 
@property (nonatomic,readonly) BOOL suppressSetCurrentPage; 
@property (assign,nonatomic) BOOL suppressAppShortcutTruncation; 
@property (nonatomic,readonly) NSDictionary * legacyIconState; 
@property (nonatomic,readonly) NSDictionary * legacyIconState2; 
-(void)setSuppressSetCurrentPage:(BOOL)arg1 ;
-(BOOL)suppressSetCurrentPage;
-(void)setLegacyIconState:(NSDictionary *)arg1 ;
-(NSDictionary *)legacyIconState;
-(void)setLegacyIconState2:(NSDictionary *)arg1 ;
-(NSDictionary *)legacyIconState2;
-(void)setMaxIconListCount:(long long)arg1 ;
-(long long)maxIconListCount;
-(void)setShouldDisableLiveIcons:(BOOL)arg1 ;
-(BOOL)shouldDisableLiveIcons;
-(void)setDidShowIconReorderAlert:(BOOL)arg1 ;
-(BOOL)didShowIconReorderAlert;
-(void)setSuppressAppShortcutTruncation:(BOOL)arg1 ;
-(BOOL)suppressAppShortcutTruncation;
-(void)clearLegacyDefaults;
-(void)_bindAndRegisterDefaults;
@end
