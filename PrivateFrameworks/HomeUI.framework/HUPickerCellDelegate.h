/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUPickerCellDelegate <NSObject>
@optional
-(BOOL)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
-(id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2;
-(id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;

@required
-(void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
-(long long)numberOfValuesForPickerViewCell:(id)arg1;

@end
