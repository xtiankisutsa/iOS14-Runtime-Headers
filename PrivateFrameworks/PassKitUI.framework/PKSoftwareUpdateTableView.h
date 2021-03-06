/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIScrollView, UILabel, UITextView, UIColor;

@interface PKSoftwareUpdateTableView : UITableView {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UITextView* _messageView;
	long long _context;
	UIColor* _textColor;
	UIColor* _linkColor;

}

@property (assign,nonatomic) long long context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;              //@synthesize linkColor=_linkColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)linkColor;
-(id)_messageAttributedStringWithTextColor:(id)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setContext:(long long)arg1 ;
-(UIColor *)textColor;
-(long long)context;
@end

