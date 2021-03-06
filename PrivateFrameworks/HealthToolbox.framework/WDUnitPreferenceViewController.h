/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@class NSSet, HKDisplayType, HKUnitPreferenceController, NSArray, UIBarButtonItem, UIFont;

@interface WDUnitPreferenceViewController : HKTableViewController {

	NSSet* _units;
	HKDisplayType* _displayType;
	HKUnitPreferenceController* _unitController;
	NSArray* _rows;
	long long _selectedRowIndex;
	long long _originalSelectedRowIndex;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	BOOL _requiresChangeConfirmation;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) UIFont * bodyFont;                            //@synthesize bodyFont=_bodyFont - In the implementation block
@property (assign,nonatomic) BOOL requiresChangeConfirmation;              //@synthesize requiresChangeConfirmation=_requiresChangeConfirmation - In the implementation block
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(UIFont *)bodyFont;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithUnits:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(void)setRequiresChangeConfirmation:(BOOL)arg1 ;
-(id)_sortedUnitPreferenceRows;
-(BOOL)requiresChangeConfirmation;
-(void)_updateCurrentUnit:(id)arg1 ;
@end

