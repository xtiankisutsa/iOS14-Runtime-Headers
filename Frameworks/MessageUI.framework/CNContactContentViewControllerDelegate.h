/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(id)contactPresentedViewController:(id)arg1;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;

@end
