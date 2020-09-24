/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PKPaletteAttributeViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/_PKInkAttributesPickerViewDelegate.h>

@protocol PKInkAttributesPickerDelegate;
@class _PKInkAttributesPickerView, PKInk, NSString;

@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate> {

	BOOL _updatingOpacityValue;
	id<PKInkAttributesPickerDelegate> _delegate;
	_PKInkAttributesPickerView* _pickerView;
	double _minimumOpacityValue;

}

@property (nonatomic,retain) _PKInkAttributesPickerView * pickerView;                                //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode; 
@property (assign,nonatomic) double minimumOpacityValue;                                             //@synthesize minimumOpacityValue=_minimumOpacityValue - In the implementation block
@property (getter=isUpdatingOpacityValue,nonatomic,readonly) BOOL updatingOpacityValue;              //@synthesize updatingOpacityValue=_updatingOpacityValue - In the implementation block
@property (nonatomic,retain) PKInk * selectedInk; 
@property (nonatomic,retain) id<PKInkAttributesPickerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultMinimumOpacityValue;
-(unsigned long long)displayMode;
-(void)setPickerView:(_PKInkAttributesPickerView *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_updateUI;
-(void)setDelegate:(id<PKInkAttributesPickerDelegate>)arg1 ;
-(id<PKInkAttributesPickerDelegate>)delegate;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(_PKInkAttributesPickerView *)pickerView;
-(BOOL)_canShowWhileLocked;
-(id)initWithInk:(id)arg1 ;
-(PKInk *)selectedInk;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setMinimumOpacityValue:(double)arg1 ;
-(void)setSelectedInk:(PKInk *)arg1 ;
-(BOOL)isUpdatingOpacityValue;
-(double)minimumOpacityValue;
-(void)setSelectedInk:(id)arg1 animated:(BOOL)arg2 ;
-(void)_notifyInkAttributesPickerDidChangeInk;
-(void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1 ;
-(void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1 ;
-(void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1 ;
-(void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1 ;
@end
