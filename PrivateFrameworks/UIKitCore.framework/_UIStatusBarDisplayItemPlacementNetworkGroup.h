/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacementCellularGroup, _UIStatusBarDisplayItemPlacementWifiGroup;

@interface _UIStatusBarDisplayItemPlacementNetworkGroup : _UIStatusBarDisplayItemPlacementGroup {

	_UIStatusBarDisplayItemPlacementCellularGroup* _cellularGroup;
	_UIStatusBarDisplayItemPlacementWifiGroup* _wifiGroup;

}

@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementCellularGroup * cellularGroup;              //@synthesize cellularGroup=_cellularGroup - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementWifiGroup * wifiGroup;                      //@synthesize wifiGroup=_wifiGroup - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(BOOL)arg5 ;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(BOOL)arg6 allowDualNetwork:(BOOL)arg7 ;
+(id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 ;
+(id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(BOOL)arg3 ;
-(_UIStatusBarDisplayItemPlacementWifiGroup *)wifiGroup;
-(_UIStatusBarDisplayItemPlacementCellularGroup *)cellularGroup;
@end
