/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject {

	WLKStoredConfiguration* _storedConfiguration;

}

@property (nonatomic,retain) WLKStoredConfiguration * storedConfiguration;              //@synthesize storedConfiguration=_storedConfiguration - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)_updateConfiguration:(id)arg1 ;
-(id)init;
-(WLKStoredConfiguration *)storedConfiguration;
-(void)_handleLibraryChange:(id)arg1 ;
-(void)_handleAccountChange:(id)arg1 ;
-(void)_setStoredConfiguration:(id)arg1 ;
-(void)_invalidateWithReason:(id)arg1 ;
-(void)setStoredConfiguration:(WLKStoredConfiguration *)arg1 ;
@end
