/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STUsageItem, STDrillInUsageGroupSpecifierProvider, STDrillInItemInfoGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STAllowanceProgressGroupSpecifierProvider;

@interface STDrillInDetailListController : STPINListViewController {

	STUsageItem* _usageItem;
	STDrillInUsageGroupSpecifierProvider* _screenTimeGroupSpecifierProvider;
	STDrillInItemInfoGroupSpecifierProvider* _drillInItemInfoGroupSpecifierProvider;
	STCategoryDetailsGroupSpecifierProvider* _categoryDetailsGroupSpecifierProvider;
	STAllowanceProgressGroupSpecifierProvider* _allowanceProgressGroupSpecifierProvider;

}

@property (nonatomic,readonly) STUsageItem * usageItem;                                                                          //@synthesize usageItem=_usageItem - In the implementation block
@property (nonatomic,readonly) STDrillInUsageGroupSpecifierProvider * screenTimeGroupSpecifierProvider;                          //@synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STDrillInItemInfoGroupSpecifierProvider * drillInItemInfoGroupSpecifierProvider;                  //@synthesize drillInItemInfoGroupSpecifierProvider=_drillInItemInfoGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STCategoryDetailsGroupSpecifierProvider * categoryDetailsGroupSpecifierProvider;                  //@synthesize categoryDetailsGroupSpecifierProvider=_categoryDetailsGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STAllowanceProgressGroupSpecifierProvider * allowanceProgressGroupSpecifierProvider;              //@synthesize allowanceProgressGroupSpecifierProvider=_allowanceProgressGroupSpecifierProvider - In the implementation block
-(void)viewDidLoad;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_didFetchAppInfo:(id)arg1 ;
-(STUsageItem *)usageItem;
-(id)initWithUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(STDrillInUsageGroupSpecifierProvider *)screenTimeGroupSpecifierProvider;
-(STDrillInItemInfoGroupSpecifierProvider *)drillInItemInfoGroupSpecifierProvider;
-(STCategoryDetailsGroupSpecifierProvider *)categoryDetailsGroupSpecifierProvider;
-(STAllowanceProgressGroupSpecifierProvider *)allowanceProgressGroupSpecifierProvider;
@end

