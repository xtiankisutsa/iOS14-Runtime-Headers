/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class TKTonePickerViewController;

@interface CNTonePickerController : UINavigationController {

	TKTonePickerViewController* _tonePicker;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePicker;                     //@synthesize tonePicker=_tonePicker - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate; 
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(TKTonePickerViewController *)tonePicker;
-(void)setTonePicker:(TKTonePickerViewController *)arg1 ;
-(id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2 ;
@end

