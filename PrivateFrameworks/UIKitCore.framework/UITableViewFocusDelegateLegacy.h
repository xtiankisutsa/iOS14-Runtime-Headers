/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewFocusDelegateLegacy <UITableViewDelegate>
@optional
-(BOOL)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;
-(BOOL)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;
-(id)indexPathForPreferredFocusedItemForTableView:(id)arg1;

@end
