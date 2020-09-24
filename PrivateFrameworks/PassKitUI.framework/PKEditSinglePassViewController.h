/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WLCardViewDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKEditPassesPerformanceTestResponder.h>
#import <libobjc.A.dylib/PKEditPassesDetailsResponder.h>

@class PKGroup, PKPass, PKPassView, UIBarButtonItem, NSString;

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder> {

	PKGroup* _group;
	PKPass* _pass;
	PKPassView* _passView;
	UIBarButtonItem* _deleteBarButton;
	UIBarButtonItem* _flexibleSpace;
	UIBarButtonItem* _infoButton;
	long long _performanceTest;
	NSString* _performanceTestName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)group;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1 ;
-(void)_deletePassPressed;
-(void)_moreButtonPressed;
-(void)passViewSetup;
-(void)enableDeleteButton;
-(void)_deletePassConfirmed;
-(void)disableDeleteButton;
-(void)_didPresentDetailViewController;
-(void)setPerformanceTest:(long long)arg1 ;
-(void)setPerformanceTestName:(id)arg1 ;
-(id)initWithGroup:(id)arg1 pass:(id)arg2 ;
-(void)passWasUpdated:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)pass;
-(void)_doneButtonPressed;
@end
