/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PTSettings, NSPredicate, NSString, NSArray;


@protocol PTModuleComponent <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<PTComponentObserver> componentObserver; 
@property (nonatomic,retain) PTSettings * settings; 
@property (nonatomic,retain) NSPredicate * appearancePredicate; 
@property (nonatomic,retain) NSString * childSettingsKeyPath; 
@property (nonatomic,readonly) NSArray * allSections; 
@property (nonatomic,readonly) NSArray * enabledSections; 
@required
-(NSArray *)allSections;
-(PTSettings *)settings;
-(void)setSettings:(id)arg1;
-(NSArray *)enabledSections;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(id)arg1;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(id)arg1;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id)arg1;

@end
