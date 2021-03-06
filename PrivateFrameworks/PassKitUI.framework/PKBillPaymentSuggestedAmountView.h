/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView {

	CABackdropLayer* _background;
	PKBillPaymentSuggestedAmount* _suggestedAmount;

}

@property (nonatomic,readonly) PKBillPaymentSuggestedAmount * suggestedAmount;              //@synthesize suggestedAmount=_suggestedAmount - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSuggestedAmount:(id)arg1 ;
-(PKBillPaymentSuggestedAmount *)suggestedAmount;
@end

