/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableView.h>

@class EKEventViewController;

@interface EKEventTableView : UITableView {

	EKEventViewController* _controller;

}

@property (assign,nonatomic,__weak) EKEventViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(void)setController:(EKEventViewController *)arg1 ;
-(void)reloadData;
-(EKEventViewController *)controller;
@end
